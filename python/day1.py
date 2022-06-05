'''##########################lab1########################

text = " ahmed moha med med abdellah "

slist = text.split(" ")
print(slist.count("med"))

'''##########################end lab1########################

'''##########################lab2########################
users_dic = {"ahmed" : "123" , "mohamed" :"456" , "abdellah" : "789" }
username = input("enter username " )

if users_dic.get(username) != None :
    password = input ("enter password ")
    if users_dic.get(username) == password:
        print("welcome ",username)
    else :
        print("wrong password")
else :
    print("no username")

'''##########################end lab2########################

'''##########################assigment 2-digit binary just using count and index #########
decimal = 0
binar = input("please enter binary number to convert ")
if binar.isdigit() and len(binar) == 2:
    if binar.count("0") == 2 :
        decimal = 0
    elif binar.count("1") == 2 :
        decimal = 3
    elif binar.count("0") == 1 :
        if binar.index("1") == 0:
            decimal = 2
        else :
            decimal = 1       
else :
    print("enter valid number")
    
print(decimal)
'''##################end assigment####################

