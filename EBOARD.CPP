#include<iostream.h>
#include<conio.h>
class eboard
{
	int unit;
	float charge,scharge;
	char name[30];
public:
	void getdata();
	void calculate_charge();
	void display();
};

void eboard :: getdata()
{
	cout<<"Name of user :";
	cin>>name;
	cout<<"no. of unit used : ";
	cin>>unit;
}
void eboard :: calculate_charge()
{
	if(unit<=100)
	{
		charge=unit*0.6;
	}
	else if(unit>100 && unit<=200)
	{
		charge=unit*0.8;
	}
	else if(unit>200)
	{
		charge=unit*0.92;
	}
	else
	{
		cout<<"wrong entry ";
	}

		if (charge>300)
		{
			scharge=(charge*0.15);
			charge=scharge+charge;
		}
		else if(charge<50)
		{
			charge=50;
		}
}

void eboard :: display()
{
	cout<<"Name of user: "<<name<<endl;
	cout<<"charges of "<< name<<" is "<< charge<<endl;

}

void main()
{
int n,i;
clrscr();
	cout<<"Enter the no. of user : ";
	cin>>n;
eboard r[10];
	for(i=1;i<=n;i++)
	{
	r[i].getdata();
	r[i].calculate_charge();
	}

	for(i=1;i<=n;i++)
	{
	r[i].display();
	}

getch();
}
