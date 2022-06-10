'''
/*************************************************
/*  AUTHORS:         Ahmed                       *                        
/*  DATE:            December 30, 2021           *                       
/*  VER:             1.0                         *                         
/*  DESCRIPTION:  atm program                    *
/*************************************************
'''
#*******very important if you dont install  screeninfo lib  please comment line 196
##################class user  #############
class User():
    def __init__(self):
        #database of bank user
        self.__users_dic = {"123":[3500166,'123','Ahmed Abdelrazek Mohamed',0 ],
             "203659302214":[520001,'1390','Salama Mohamed Foaad',0],
             "126355700193":[111000,'1214','Abdel Khaled Abdelrahman',0]
             ,"201455998011":[1200,'2001','Saeed Amin Elsway',0]
             ,"201122369851":[178933,'8935','Amir Salama Elgendy',0],
             "201356788002":[55000,'3420','Wael Mohamed Khairy',0],
             "203366789564":[18000,'1179','Mina Sameh Bishoy',0],
             "201236787812":[180350,'1430','Omnia Ahmed Awad',0]}
    def get_users(self):
        '''return list of all user of bank'''
        return list(self.__users_dic.keys())
    
    def getUserPass(self,accountNum):
        '''
            accountNum : user want to search for
            return (String) accountNum password
        '''
        return self.__users_dic.get(accountNum)[1]
    
    def getUserState(self,accountNum):
        '''
            accountNum : user want to search for

            return (number)user state
        '''
        return self.__users_dic.get(accountNum)[3]
    
    def getUserBalance(self,accountNum):
        '''
            accountNum : user want to search for
            return (Number) accountNum Balance
        '''
        return self.__users_dic.get(accountNum)[0]
    
    def getUserName(self,accountNum):
        '''
            accountNum : user want to search for

            return (String)user Name
        '''
        return self.__users_dic.get(accountNum)[2]
    
#########################end get######################## 
    def setUserBalance(self,accountNum,balance):
        '''
            accountNum : user want to search for
            update user Balance
        '''
        self.__users_dic.get(accountNum)[0] =balance
            
    def setUserPass(self,accountNum,password):
        '''
            accountNum : user want to search for
            update user state
        '''
        self.__users_dic.get(accountNum)[1] = password
            
    def setUserState(self,accountNum, state):
        '''
            accountNum : user want to search for
            
            upate user password
        '''
        self.__users_dic.get(accountNum)[3] = state
    
    
        
    
##############end class user#################
##############class atm ######################

class ATMbackend():
    def __init__(self,user):
        self.user = user#User()
        self.users = self.user.get_users()
        
    def checkUser(self,username):
        '''username : user want to search for
           
           return boolean (True) if user found
        '''
        if username in self.users:
            return True 
        else :
            return False
        
    def checkPass(self,account_num,password):
        '''username : user want to search for
            password : user password
            
            return state of user
            0 :stopped from bank 
            -1 :incorrect password
            1 : log in succefully
        '''
        state = self.user.getUserState(account_num)
        realPass = self.user.getUserPass(account_num)
          #if user stoped from bank
        if ( state ==3 ):
            return 0
        else :
            #if user has more attamps
            if state <= 3 :
                #if user enter wrong password
                if realPass != password :
                    self.user.setUserState(account_num,self.user.getUserState(account_num)+1)
                    state +=1   #************
                    return -1
                    #loginmsg("in correct password you have "+str(3-users_dic.get(username)[3]) +" attemps" )
                else :
                    #if user enter write password
                    self.user.setUserState(account_num,0)
                    return 1
                    #strp ="welcome " + users_dic.get(username)[2]
                    #welcome_display(username)
                    #loginmsg(strp)
                    
    def change_password(self , account_num,fpass, spass):
        '''username : user want to search for
            fpass : new password
            spass : confiramtion new password
            
            return result of change password state
            1 : password change succefully
            2 : password must contain only 4 character
            3 : password dont match
        '''
        if fpass == spass :
            if len(fpass) == 4 :
                self.user.setUserPass(account_num,fpass)
                return 1
            else :
                return 2
        else :
            return 3
    def withdraw(self ,account_num, amount ,flag):
        '''
            amount : (number) amount of money want to withdraw
            flag (1) withdraw for charge
            return :
            1 : succefull withdraw
            2 : no sufficient balance then the system
            3 : not allowed value please enter again
            4 : you exced the maximum limit(5000)
        '''
        balance =  self.user.getUserBalance(account_num)
        if amount <= 5000 :
            if amount %100 == 0 or flag ==1:
                
                if balance >= amount :
                    self.user.setUserBalance(account_num,balance-amount )
                    return 1
                    #result_label.config(text = "thank you")
                     #go to the home window.
                else :
                    return 2      
            else :
                return 3
        else :
            return 4
        
      
        
        
##############end class################

############### class ATMAPP contain main gui window and function to move between frames #####################

import tkinter as tk

class ATMApp(tk.Tk): #class extend TK, its main window
    def __init__(self ,atm_object): #constructor
        tk.Tk.__init__(self) #calling superclass constructor
        self.atm = atm_object
        #main_window = self
        self.title("NBE ATM Service")
        #*********configure window size and centralize it in center of main monitor***************************
        #window size widthxheight+position right+position down
        window_width = 1400
        window_height = 800
        position= ""
        #**very important*if you don't have "screeninfo" library comment next line********
        position = "+"+self.get_centerPosition(window_width,window_height) 
        self.geometry(str(window_width)+"x"+str(window_height)+position) 
        #***********************************************************************
        
        self.resizable(False,False)
        self.configure(background="red")
        #if there is noused spase it give it to specify col and row  upon the weight 
        #(if weight = 0 it will give it functionality)
        self.grid_rowconfigure(0, weight=1)
        self.grid_rowconfigure(1, weight=12)
        self.grid_columnconfigure(0,weight=1)
        ####i will divide screen into two frame
        #first frame which has two label fixed label for bank logo and second for name of current part two 
        #display frame
        self.header_Frame = headerFrame(self)
        self.header_Frame.grid(row=0, column=0, sticky="nsew",rowspan=1)
        #second frame firstly contain login frame and change upon user input
        self.mainFrame = login_Page(self)
        self.mainFrame.grid(row=1, column=0, sticky="nsew",rowspan=1)
        
        self.header_Frame.frame_label.configure(text="login page")#first frame third label update
        
    
   #to put center window of project
    def get_centerPosition(self,window_width ,window_height):
        from screeninfo import get_monitors
        screens = get_monitors() #list of monitors class of all monitor connected to system 
        for monitor in screens :#if you have multi monitor
            if monitor.is_primary == True : #select main monitor
                center =str((monitor.width//2)-window_width//2)+ "+" +str((monitor.height//2)-window_height//2)
                return center
            
    def show_previous(self,who):
        who.grid_forget()
        widget = self.grid_slaves(row=1, column=0)[0]
        self.header_Frame.frame_label.configure(text=widget.name)
        return
 
    def Show_frame(self,pageName ):
        '''show a frame for the given page name
            and destroy frame who send request 
        '''
        self.header_Frame.frame_label.configure(text=pageName.name)
        
        
        pageName.grid(row=1, column=0, sticky="nsew")#tkraise()
        return
    
    def LoginBtn(self,account,password):
        if not self.atm.checkUser(account) :
            self.Show_frame(resultFrame(self,"!!account not found"))
            self.mainFrame.usrVar.set("")
            self.mainFrame.passVar.set("")
            return
        
        state = self.atm.checkPass(account, password)
        if state== 0:
            self.Show_frame(resultFrame(self,"account stopped from bank"))
            self.mainFrame.usrVar.set("")
            self.mainFrame.passVar.set("")
            return
        
        elif state == -1 :
            mm= "!! incorrect password "+str(3-self.atm.user.getUserState(account))+" attempt remain"
            self.Show_frame(resultFrame(self,mm))
            self.mainFrame.passVar.set("")
            return
        
        elif state == 1 :
            mm= "welcome "+ self.atm.user.getUserName(account) 
            self.header_Frame.welcome_label.configure(text=mm)#first frame second label update
            self.Show_frame(service_menu(self ,account))
            return
        
        return
    def WithdrawBtn(self,who,account,amount ,flag):
        am = amount.get()
        if am.isdigit():
            am = int(am)
            res = self.atm.withdraw(account,am,flag)
            if res ==1 :
                who.destroy()
                self.Show_frame(resultFrame(self,"succsefull operation thank you "))
            
            elif res == 2 :
                who.destroy()
                self.Show_frame(resultFrame(self,"no sufficient balance then the system "))
            elif res == 3 :
                who.destroy()
                self.Show_frame(resultFrame(self,
                                     "not allowed value please enter again, value must be multible by 100 "))
            elif res == 4 :
                who.destroy()
                self.Show_frame(resultFrame(self,"you exced the maximum limit(5000) "))
        else :
            who.destroy()
            self.Show_frame(resultFrame(self,
                                     "not allowed value please enter valid"))

        return
    def BalanceBtn(self,account):
        page = Balance_Page(self)
        page.nameLabel.configure(text=self.atm.user.getUserName(account))
        page.blanceLabel.configure(text=self.atm.user.getUserBalance(account))
        self.Show_frame(page)
        return
    
    def ExitBtn(self, page):
        self.mainFrame.usrVar.set("")
        self.mainFrame.passVar.set("")
        self.show_previous(page)
        return
    def PasswordBtn(self,page,account):
        
        first_pass = page.fpass.get()
        second_pass = page.spass.get()
        res = self.atm.change_password(account ,first_pass,second_pass)
        if res ==1 :
            page.destroy()
            self.Show_frame(resultFrame(self,"password change succefully"))
        elif res ==2 :
            page.destroy()
            self.Show_frame(resultFrame(self,"password must contain only 4 character"))
        elif res ==3 :
            page.destroy()
            self.Show_frame(resultFrame(self," password dont match"))
        return 

##############################################end class#######################################################

############################################gui classes each frame reperesent by single class################

class headerFrame(tk.Frame):
    def __init__(self,parent):
        tk.Frame.__init__(self, parent,bg='Maroon')
        
        self.label = tk.Label(self,text="welcome to NBE ATM Service", bg="white",justify="center" 
                              ,font=("utopia", "36", "bold"))
        self.label.pack(side="top",pady=25)
        
        self.welcome_label = tk.Label(self , bg="white",justify="center" ,font=("fixed", "12","bold" ))
        self.welcome_label.pack(side="top",pady=5)
        
        self.frame_label = tk.Label(self,text="" , bg="white",justify="center" ,font=("fixed", "12","bold" ))
        self.frame_label.pack(side="top",pady=5)
    
    
class resultFrame(tk.Frame):
    def __init__(self, parent,massage):
        self.name ="**massage**"
        color ="#e6e600"
        tk.Frame.__init__(self, parent,bg=color)
        
        self.label1  = tk.Label(self,bg=color,text=massage ,justify="left",
                                font=("fixed", "18","bold" ), )
        self.label1.place(x = 450, y = 100)
       
        self.login = tk.Button(self,bg=color ,text = "back" ,font=("fixed", "18","bold" ) 
                               ,command=lambda:parent.show_previous(self)) 
        self.login.place(x = 1200 ,y = 200)
        return 
    pass


class login_Page(tk.Frame):
    def __init__(self, parent ):
        self.name= "login page"
        self.usrVar =tk.StringVar()
        self.passVar =tk.StringVar()
        color ="#e6e600"
        tk.Frame.__init__(self, parent,bg=color)
        
        self.label1  = tk.Label(self,bg=color, text = "account number : ",justify="left"
                                ,font=("fixed", "18","bold" ), )
        self.label1.place(x = 450, y = 5)
        self.entUser = tk.Entry(self ,fg ="blue" ,textvariable=self.usrVar,font=("fixed", "18","bold" ),width = 20 )
        self.entUser.place(x = 670 ,y = 5)

        self.label2  = tk.Label(self, bg=color ,text = "password :" ,justify="left"
                                ,font=("fixed", "18","bold" ), )
        self.label2.place(x = 450, y = 50)
        self.entPass = tk.Entry(self ,fg ="blue", textvariable=self.passVar ,show="*",font=("fixed", "18","bold" ),width = 20)
        self.entPass.place(x = 670 ,y = 50)
        #lambda argumnts : expression
        # i want to pass arguments to command function to do this i use lambda
        self.login = tk.Button(self,bg=color ,text = "login" ,font=("fixed", "18","bold" ) 
                               ,command=lambda:parent.LoginBtn(self.entUser.get(),self.entPass.get()) ) 
        self.login.place(x = 620 ,y = 120)
        
        return
    

class service_menu(tk.Frame):
    def __init__(self,parent,account):#args0 account number
        #self.account = account
        self.name= "service menu"
        color ="#e6e600"
        tk.Frame.__init__(self,parent ,bg=color )
        
        wi = 20
        hei = 2
        CashBtn  = tk.Button(self, text = "Cash Withdraw" ,font=("fixed", "18","bold" )
                             ,command=lambda:parent.Show_frame(Withdraw_Page(parent,account)), width = wi , height = hei, )
        CashBtn.place(x=400 , y = 20)

        BalanceBtn = tk.Button(self, text = "Balance Inquiry" ,font=("fixed", "18","bold" )
                              ,command=lambda:parent.BalanceBtn(account), width = wi , height = hei, )
        BalanceBtn.place(x=800 , y = 20)

        PasswordBtn = tk.Button(self, text = "Password Change" ,font=("fixed", "18","bold" )
                                ,command=lambda:parent.Show_frame(Reset_password_Page(parent,account)), width = wi , height = hei, )
        PasswordBtn.place(x=400 , y = 100)

        FawryBtn = tk.Button(self, text = "Fawry Service" ,font=("fixed", "18","bold" )
                             ,command=lambda:parent.Show_frame(Fawry_service_menu(parent,account)), width = wi , height = hei, )
        FawryBtn.place(x=800 , y = 100)

        ExitBtn = tk.Button(self, text = "Exit" ,font=("fixed", "18","bold" )
                           , command =lambda:parent.ExitBtn(self), width = wi , height = hei, )
        ExitBtn.place(x=1000 , y = 300)
        
        return 
    pass

class Withdraw_Page(tk.Frame):
    def __init__(self,parent,account):
        self.name= "Withdraw Page"
        color = "#e6e600"
        tk.Frame.__init__(self,parent,bg=color)

        label1  = tk.Label(self,bg=color, text = "amount to withdraw",font=("fixed", "18","bold" ) )
        label1.place(x = 430, y = 5)
        amount = tk.Entry(self ,fg ="blue" ,font=("fixed", "18","bold" ) )
        amount.place(x = 670 ,y = 5)

        btn1 = tk.Button(self, text = "withdraw" ,font=("fixed", "18","bold" )
                         ,command=lambda:parent.WithdrawBtn(self,account,amount,0), bg=color)
        btn1.place(x = 670 ,y = 50)

class Balance_Page(tk.Frame):
    def __init__(self,parent):
        self.name= "Balance Page"
        color = "#e6e600"
        tk.Frame.__init__(self,parent,bg=color)

        self.nameLabel  = tk.Label(self, font=("fixed", "18","bold" ) )
        self.nameLabel.place(x = 430 ,y = 5)

        self.blanceLabel  = tk.Label(self, font=("fixed", "18","bold" ))
        self.blanceLabel.place(x = 430 ,y = 100)

        btn1 = tk.Button(self, text = "ok" , command =lambda:parent.show_previous(self) 
                         , width = 5 , height = 2)
        btn1.place(x=670 , y= 150)
        return
    pass

class Reset_password_Page(tk.Frame):
    def __init__(self,parent,account):
        self.name= "Reset password Page"
        color = "#e6e600"
        tk.Frame.__init__(self,parent,bg=color)

            
        self.label1  = tk.Label(self,bg=color, text = "enter new password : ",justify="left"
                                ,font=("fixed", "18","bold" ), )
        self.label1.place(x = 450, y = 5)
        self.fpass = tk.Entry(self ,fg ="blue" ,show="*",font=("fixed", "18","bold" ),width = 20 )
        self.fpass.place(x = 670 ,y = 5)

        self.label2  = tk.Label(self, bg=color ,text = "enter confirm password:" ,justify="left"
                                ,font=("fixed", "18","bold" ), )
        self.label2.place(x = 450, y = 50)
        self.spass = tk.Entry(self ,fg ="blue",show="*",font=("fixed", "18","bold" ),width = 20)
        self.spass.place(x = 670 ,y = 50)
        
        self.login = tk.Button(self,bg=color ,text = "change" ,font=("fixed", "18","bold" ) 
                               ,command=lambda:parent.PasswordBtn(self,account) ) 
        self.login.place(x = 620 ,y = 120)

class Fawry_service_menu(tk.Frame):
    def __init__(self,parent,account):
        self.name= "Fawry service menu"
        color ="#e6e600"
        tk.Frame.__init__(self,parent ,bg=color )
        
        wi = 20
        hei = 2
        CashBtn  = tk.Button(self, text = "Orange Recharge" ,font=("fixed", "18","bold" )
                             ,command=lambda:parent.Show_frame(Phone_charge_Page(parent,account)),
                             width = wi , height = hei, )
        CashBtn.place(x=400 , y = 20)

        BalanceBtn = tk.Button(self, text = "Vodafone Recharge" ,font=("fixed", "18","bold" )
                              ,command=lambda:parent.Show_frame(Phone_charge_Page(parent,account)),
                               width = wi , height = hei, )
        BalanceBtn.place(x=800 , y = 20)

        PasswordBtn = tk.Button(self, text = "We Recharge" ,font=("fixed", "18","bold" )
                                ,command=lambda:parent.Show_frame(Phone_charge_Page(parent,account)),
                                width = wi , height = hei, )
        PasswordBtn.place(x=400 , y = 100)

        FawryBtn = tk.Button(self, text = "Etisalat Recharge" ,font=("fixed", "18","bold" )
                             ,command=lambda:parent.Show_frame(Phone_charge_Page(parent,account)),
                             width = wi , height = hei, )
        FawryBtn.place(x=800 , y = 100)

        ExitBtn = tk.Button(self, text = "Back" ,font=("fixed", "18","bold" )
                           ,command=lambda:parent.show_previous(self),
                            width = wi , height = hei, )
        ExitBtn.place(x=1000 , y = 300)
        
        return 
    pass

class Phone_charge_Page(tk.Frame):
    def __init__(self,parent,account):
        self.name= "Phone charge Page"
        color = "#e6e600"
        tk.Frame.__init__(self,parent,bg=color)

            
        self.label1  = tk.Label(self,bg=color, text = "enter phone number : ",justify="left"
                                ,font=("fixed", "18","bold" ), )
        self.label1.place(x = 450, y = 5)
        self.phone = tk.Entry(self ,fg ="blue" ,font=("fixed", "18","bold" ),width = 20 )
        self.phone.place(x = 730 ,y = 5)

        self.label2  = tk.Label(self, bg=color ,text = "enter amount of charge:" ,justify="left"
                                ,font=("fixed", "18","bold" ), )
        self.label2.place(x = 450, y = 50)
        self.amount = tk.Entry(self ,fg ="blue",font=("fixed", "18","bold" ),width = 20)
        self.amount.place(x = 730 ,y = 50)
        
        self.login = tk.Button(self,bg=color ,text = "charge" ,font=("fixed", "18","bold" ) 
                               ,command=lambda:parent.WithdrawBtn(self,account,self.amount,1) ) 
        self.login.place(x = 620 ,y = 120)
############################################end of gui classes###############################################
######lets start program :)  ##################################
#*******very important if you dont install  screeninfo lib  please comment line 196
#*******very important if you dont install  screeninfo lib  please comment line 196
#*******very important if you dont install  screeninfo lib  please comment line 196
user = User()
atm = ATMbackend(user)
gui = ATMApp(atm)
gui.mainloop()

