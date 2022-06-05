#include <stdio.h>
#include <stdlib.h>
//3. Write two functions to read an Employee’s data and other to print its Name with the net salary.
typedef struct Employee
{
    int ID;
    int Age;
    float salary;
    char Name[51];
} Employee;

Employee read_employee();
void print_employee(char *name,float salary);


int main()
{
    Employee e1 ;

    e1 = read_employee();
    print_employee(e1.Name,e1.salary);
    return 0;
}


Employee read_employee()
{
    Employee e ;
    printf("enter employee id : ");
    scanf("%d",&e.ID);

    printf("enter employee age : ");
    scanf("%d",&e.Age );
    printf("enter employee salary : ");
    scanf("%f",&e.salary);

    printf("enter employee name : ");
    scanf("%s",e.Name);

    return e;
    //fgets(name ,51 ,stdin);
    // gets(name);

}
void print_employee(char *name,float salary)
{
    printf( "name : %s\t",name);
    printf( "salary : %0.3f\n",salary);

}
