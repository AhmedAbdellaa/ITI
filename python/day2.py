'''##########################lab1########################

users_dic = {"ahmed" : "123" , "mohamed" :"456" , "abdellah" : "789" }

i = 1
while i <=3 :
    username = input("enter username " )
    password = input ("enter password ")
    
    if users_dic.get(username) == None or users_dic.get(username) != password:
        i = i+1 
        print("in correct entry")
    else :
        print("welcome" , username)
        break;
#print(i)
if i ==4  :
    print("trhee error attemp ")
    
'''##########################end lab1########################

'''##########################lab2########################


def SET_BIT(num , index):
    result = (1<<index)|num
    return result

def CLR_BIT(num , index):
    result = ~(1<<index)  & num
    return result

def TOG_BIT(num , index):
    result = (1<< index) ^ num
    return result

def GET_BIT(num , index):
    result = (num>> index) & 1
    return result
#1011 ->11
print(SET_BIT(11,2))
print(CLR_BIT(11,2))
print(TOG_BIT(11,2))
print(GET_BIT(11,2))
'''##########################end lab2########################

'''##########################lab3########################

nameList = ["ahmed" , "ali" , "amr"] 
salList = [2000 , 3000 , 4000]
while (True):
    print("\n\nfor exit enter : exit \n\n")
    
    emp = input("please enter employee name : ")
    if (emp != "exit"):
        if emp in nameList :
            index = nameList.index(emp)
            print(salList[index])
        else :
            print("empolyee not found , try another empolyee")
    else :
        print("program exit succsefully")
        break
        
'''##########################end lab3########################
