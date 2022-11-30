#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee
{
 int emp_code;
 char emp_name[20];
 char emp_disignation[40];
 int basic_salary;
 int ta;
 int hra;
 int da;

public:

 void emp_input()
 {
   cout<<"Enter the employee code :";
   cin>>emp_code;
   cout<<"Enter the employee name :";
   cin>>emp_name;
   cout<<"Enter the employee disignatiion : ";
   cin>>emp_disignation;
   cout<<"Enter the employee salary : ";
   cin>>basic_salary;
   cout<<"Enter the employee travelling allowance : ";
   cin>>ta;
   cout<<"Enter the employee house rent allowance  : ";
   cin>>hra;
   cout<<"Enter the employee daily allowance : ";
   cin>>da;
 }

 void emp_output()
 {
  cout<<"The employee code is : " <<emp_code<<endl;
  cout<<"The employee name is : " <<emp_name<<endl;
  cout<<"The employee disignation is " <<emp_disignation<<endl;
  cout<<"The employee salary is " <<basic_salary<<endl;
 }

 void salary()
 {
     int ra = basic_salary+hra+ta+da;
     cout<<"Gros Salary of employee is : "<<ra<<endl;
     int tt = ra-(ra*0.1);
     cout<<"Net Salary of employee is : "<<tt;

 }


};
void main()
{
clrscr();
   employee r;
   r.emp_input();
   r.emp_output();
   r.salary();
getch();
}

