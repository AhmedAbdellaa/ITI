#include <stdio.h>
#include <stdlib.h>
//4. Write a program to make an array of Employees with size determined at run time from a user and read its data and print the ID and net salary for each employee.

//#define SIZE 2
typedef struct Employee
{
    int ID;
    int Age;
    float salary;
    char Name[51];
} Employee;


Employee read_employee();
void print_employee(Employee e);


int main()
{
    int SIZE;
    printf("enter number of employees : ");
    scanf("%d",&SIZE);
    Employee earr[SIZE] ;

    for(int i =0 ; i<SIZE ; i++)
    {
        printf("\nenter employee %d data :\n",i+1);
        earr[i] = read_employee();
    }
    for(int i =0; i<SIZE ; i++)
    {
        printf("\nemployee %d data :\n",i+1);
        print_employee(earr[i]);
    }
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
void print_employee(Employee e)
{
    printf( "id : %d\t",e.ID);
    printf( "salary : %0.3f\n",e.salary);

}
