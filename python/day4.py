'''
/*************************************************
/*  AUTHORS:         Ahmed                       *                        
/*  DATE:            December 29, 2021           *                       
/*  VER:             1.0                         *                         
/*  DESCRIPTION:  lab1 emplyee database with gui *
/*************************************************
'''
'''#######################lab1########################################    
import tkinter

users_dic = {"ahmed" : "123" , "mohamed" :"456" , "abdellah" : "789" }
i = 0
def loginfun() :
    
    global entUser
    global entPass
    ent_var = entUser.get()
    sub_window =  tkinter.Tk()
    sub_window.title("empolyee database")
    sub_window.geometry("400x200")
    sub_window.resizable(True,True)
    sub_window.configure(background="white")
    global i
    if i <3 :
        username = entUser.get()
        password = entPass.get()

        if users_dic.get(username) == None or users_dic.get(username) != password:
            i = i+1 
            resultLabel  = tkinter.Label(sub_window, text = "in correct entry attmp"+str(i) ).place(x = 50 ,y = 50)            
            sub_window.mainloop()
        else :
            strp ="welcome" + username
            resultLabel  = tkinter.Label(sub_window, text = strp).place(x = 50 ,y = 50)
            sub_window.mainloop()
    
    elif i ==3  :
        main_window.destroy()
        resultLabel  = tkinter.Label(sub_window, text = "trhee error attemp " ).place(x = 50 ,y = 50)
        sub_window.mainloop()
        

main_window = tkinter.Tk()
main_window.title("empolyee database")
main_window.geometry("400x200+250+200")
main_window.resizable(True,True)
main_window.configure(background="white")
label1  = tkinter.Label(main_window, text = "username" )
label1.place(x = 0 ,y = 0)
entUser = tkinter.Entry(main_window ,fg ="blue")
entUser.place(x = 80 ,y = 0)

label2  = tkinter.Label(main_window, text = "password" )
label2.place(x = 0 ,y = 50)
entPass = tkinter.Entry(main_window ,fg ="blue",show="*")
entPass.place(x = 80 ,y = 50)

login = tkinter.Button(main_window, text = "login" , command = loginfun , width = 3 , height = 1)
login.place(x = 70 ,y = 100)
main_window.mainloop()
'''#######################end lab1########################################

'''
/*************************************************
/*  AUTHORS:         Ahmed                       *                        
/*  DATE:            December 29, 2021           *                       
/*  VER:             1.0                         *                         
/*  DESCRIPTION:  lab2 draw 4 button using grid  *
/*************************************************
'''
'''##############################lab2###################################
import tkinter

main_window = tkinter.Tk()
main_window.title("main")
main_window.geometry("250x200")
main_window.resizable(True,True)
main_window.configure(background="red")


btnlist = []
for i in range(4):
    btnlist.append(tkinter.Button(main_window, text = "Button"+str(i+1) , width = 5 , height = 2))
    
    
btnlist[0].grid(row=0 ,column =1)
btnlist[1].grid(row=1 ,column =0)
btnlist[2].grid(row=1 ,column =3)
btnlist[3].grid(row=2 ,column =1)

main_window.mainloop()


'''############################end lab2##################################

'''
/*************************************************
/*  AUTHORS:         Ahmed                       *                        
/*  DATE:            December 29, 2021           *                       
/*  VER:             1.0                         *                         
/*  DESCRIPTION:  lab3 draw 4 button using place  *
/*************************************************
'''
'''##############################lab3###################################

import tkinter

main_window = tkinter.Tk()
main_window.title("main")
main_window.geometry("400x200+250+200")
main_window.resizable(True,True)
main_window.configure(background="red")

btnlist = []
for i in range(4):

    btnlist.append(tkinter.Button(main_window, text = "Button"+str(i+1) , width = 5 , height = 2))
    btnlist[i].place(x=i*30 ,y = i*50)
main_window.mainloop()
'''############################end lab3##################################


'''
/*************************************************
/*  AUTHORS:         Ahmed                       *                        
/*  DATE:            December 29, 2021           *                       
/*  VER:             1.0                         *                         
/*  DESCRIPTION:  lab4 draw 4 button using place  *
/*************************************************
'''
'''##############################lab4###################################

import tkinter

def printfun():
    print("ahmed")
    
def okfun():
    print("ok")
    
def close():
    print("close")
    main_window.destroy()

main_window = tkinter.Tk()
main_window.title("main")
main_window.geometry("400x200+250+200")
main_window.resizable(True,True)
main_window.configure(background="red")

btn1 = tkinter.Button(main_window, text = "print name" ,command =printfun)
btn1.place(x = 0 , y = 0)

btn2 = tkinter.Button(main_window, text = "ok", command = okfun)
btn2.place(x = 0 , y = 150)

btn3 = tkinter.Button(main_window, text =  "close" ,command =close)
btn3.place(x = 100 , y = 150)

main_window.mainloop()
'''############################end lab4##################################


'''
/*************************************************
/*  AUTHORS:         Ahmed                       *                        
/*  DATE:            December 29, 2021           *                       
/*  VER:             1.0                         *                         
/*  DESCRIPTION:  lab5 DDRA with gui             *
/*************************************************
'''

'''##############################lab5###################################
import tkinter


def get_values():
    lbits = []
    strToPut = "DDRA = 0b"
    for i in range(8) :
        
        inp = var[i].get()
        if(inp =="input"):
            lbits.append('1')
        elif (inp =="output"):
            lbits.append('0')
        
    for c in lbits:
        strToPut = strToPut+c
    
    cfile = "void main(void){\n\t" +strToPut +";\n}"
    print(cfile)
    fi = open(r"/home/Ahmed/binary1.c","w+")
    fi.write(cfile)
    fi.close()
    main_window.destroy()
    
    
main_window = tkinter.Tk()
main_window.title("main")
main_window.geometry("400x500")
main_window.resizable(True,True)
var = []
for i in range(8) :
    var.append(tkinter.StringVar())
    label2  = tkinter.Label(main_window, text = "pin "+str(i)+" Mode" , height = 2 )
    label2.grid(row = i ,column = 0)

    rbtn = tkinter.Radiobutton(main_window, text = "input",value = "input",variable=var[i] )
    rbtn.grid(row = i ,column = 1)

    rbtn = tkinter.Radiobutton(main_window, text = "output",value = "output" ,variable=var[i])
    rbtn.grid(row = i ,column = 3)
    
btn = tkinter.Button(main_window, text =  "generate" ,command =get_values)
btn.grid(row = 8 ,column = 3)

main_window.mainloop()
'''############################end lab5##################################
