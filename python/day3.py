'''
/*************************************************
/*  AUTHORS:         Ahmed                       *                        
/*  DATE:            December 28, 2021           *                       
/*  VER:             1.0                         *                         
/*  DESCRIPTION: lab1 empolyee simple database   *
/*************************************************
'''
''' ##########################lab1######################################
#{id : [name , job , salary]}
employes_dict = {}



def add(Id, name , job , sal):
    if Id not in employes_dict :
        employes_dict.update({Id : [name , job , sal]})
        print("added succsefully")
    else :
        print("this id is taken")
def printall():
    for emp in employes_dict :
        print(emp ," : ", employes_dict[emp])

def remove(Id):
    del employes_dict[Id]

while True :
    print ("***************************************")
    print ("|to add employee enter 1              |")
    print ("|to print all employee enter 2        |")
    print ("|to remove employee enter 3           |")
    print ("|to exit enter 4                      |")
    print ("***************************************")
    choose = input("please enter your choise: ")
    if choose == "1":
        print("\n\n")
        ID = int(input("enter employee id"))
        name = input("enter employee name")
        job = input("enter employee job")
        sal =int(input("enter employee salary"))
        print("\n\n")
        add(ID , name , job , sal)
    elif choose == "2" :
        printall()
    elif choose == "3" :
        print("\n\n")
        Id = int(input("enter employee id"))
        print("\n\n")
        remove(Id)
    elif choose == "4" :
        print("succesfully exit")
        break 
        
 ''' ##########################end lab1######################################   
 
 '''
/*************************************************
/*  AUTHORS:         Ahmed                       *                        
/*  DATE:            December 28, 2021           *                       
/*  VER:             1.0                         *                         
/*  DESCRIPTION:    lab2 DDRA                    *
/*************************************************
'''
'''#######################lab2#########################################
lbits = []
i = 0

while i <8 :
    inp = input("please enter bit "+ str(i) +" mode ")
    if(inp =="input"):
        lbits.append('1')
    elif (inp =="output"):
        lbits.append('0')
    i +=1
strToPut = "DDRA = 0b"
for c in lbits:
    strToPut = strToPut+c
   # print(strToPut)
cfile = "void main(void){\n" +strToPut +";\n}"

fi = open(r"/home/Ahmed/binary1.c","w+")
fi.write(cfile)
fi.close()

'''#######################end lab2#########################################
    
    

