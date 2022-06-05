#include <stdio.h>
#include <stdlib.h>
//Write a program to receive one employee’s data display the code, name, and net salary.
typedef struct Employee
{
    int ID;
    int Age;
    float salary;
    char Name[51];
} Employee;



int main()
{
    Employee e1 ;
    ///**************************************
    printf("enter id : ");
    scanf("%d",&e1.ID);
system("clear");
    printf("enter age : ");
    scanf("%d",&e1.Age);

    printf("enter salary : ");
    scanf("%f",&e1.salary);
fflush(NULL);
    printf("enter name : ");

    scanf("%*c",e1.Name);

    //gets(e1.Name);
    //fgets(e1.Name, 20, stdin);
    //*********************************************
    printf( "id : %d\t",e1.ID);
    printf( "name : %s\t",e1.Name);
    printf( "salary : %0.3f\n",e1.salary);

    return 0;
}




