#include<iostream.h>
#include<conio.h>

class addAmount
{
	public:
	static int amt;
		addAmount()
		{
			cout<<"Amount is "<<amt;
		}

		addAmount(int a)
		{
			amt+=a;
			cout<<"\nAmount is "<<amt;
		}

};
int addAmount :: amt=50;
void main()
{
	clrscr();
	addAmount a1,a2(50);
	getch();
}