/*
Consider and Example of declaring examination result. Design 3 class
Student, Exam and Result. The Student class has Data Members such as Roll no,
name, etc. create a class Exam by inheriting the student class. The Exam class
should have data members representing the marks scored in six subjects.
Derive a class Result from the Exam class and it should have its own Data
Members such as total marks.
Write an interactive program to modal this relationship. What type of
Relation ship this modal belongs to.
*/
#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class Student
{
	char name[10],enroll[20],sec[5];
	public:
		Student()
		{
			cout<<"\nEnter Details of Student";
			cout<<"\nEnter Name of Student : ";
			gets(name);
			cout<<"\nEnter Enrollment No. of Student : ";
			gets(enroll);
			cout<<"\nEnter Class and Section of Student : ";
			gets(sec);
		}
		void disp()
		{
			cout<<"\nShowing Details";
			cout<<"\nName                : "<<name;
			cout<<"\nEnrollement No      : "<<enroll;
			cout<<"\nClass and Section   : "<<sec;
		}

};

class Exam : public Student
{
	public:
	int maths, phy, chem, bio, cs, ped;
	public:
		Exam()
		{
			cout<<"\nEnter Marks in Subjects:-";
			cout<<"\nPhysics : ";
			cin>>phy;
			cout<<"\nMathematics : ";
			cin>>maths;
			cout<<"\nChemistry : ";
			cin>>chem;
			cout<<"\nBiology : ";
			cin>>bio;
			cout<<"\nComputer Science : ";
			cin>>cs;
			cout<<"\nPhysical Education : ";
			cin>>ped;
		}
		void display()
		{
			disp();
			cout<<"\n\nShowing Marks of Each Subject :-";
			cout<<"\nPhysics             : "<<phy;
			cout<<"\nMathematics         : "<<maths;
			cout<<"\nChemistry           : "<<chem;
			cout<<"\nBiology             : "<<bio;
			cout<<"\nComputer Science    : "<<cs;
			cout<<"\nPhysical Education  : "<<ped;
		}
};

class Result : public Exam
{
	int totmarks;
	float res;
	public:
		int calcRes()
		{
			totmarks=phy+maths+chem+bio+cs+ped;
			cout<<"\nTotal Marks Obtained : "<<totmarks;
			res=(float)totmarks/6.0;
			return res;
		}
};

void main()
{
	clrscr();
	Result r;
	clrscr();
	r.display();
	cout<<"\nPercentage is : "<<r.calcRes()<<"%";
	getch();
}