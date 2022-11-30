#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

class TollBooth
{
	int cars;
	double cash;
	public:
		TollBooth()
		{
			cars=0;
			cash=0.0;

		}

		void payingCars()
		{
			cars++;
			cash+=50;
			cout<<"\nDone";
			getch();
		}

		void nonPayingCars()
		{
			cars++;
			cout<<"\nDone";
			getch();
		}

		void display()
		{
			cout<<"\nNo of Cars : "<<cars;
			cout<<"\nAmount Gained : "<<cash;
			getch();
		}
};

void main()
{       int cho;
	TollBooth th;
	do
	{
		clrscr();
		cout<<"Options :-";
		cout<<"\n1. If payment is delivered by Car Owner";
		cout<<"\n2. If payment is not delivered by Car Owner";
		cout<<"\n3. Total Payment collected and Total No of Cars";
		cout<<"\n4. Press Esc for Exit";
		cout<<"\n\nEnter Choice : ";
		cin>>cho;
		switch(cho)
		{
			case 1: th.payingCars();
				break;

			case 2: th.nonPayingCars();
				break;

			case 3: th.display();
				break;

		}
		}while(getchar()!=27);
}

