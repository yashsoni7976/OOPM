#include<iostream.h>
#include<conio.h>
class Complex
{
	int Re,Img;
	public:
		Complex()
		{
			Re=0;
			Img=0;
		}

		Complex(int re,int img)
		{
			Re=re;
			Img=img;
		}

		void Display()
		{
			cout<<Re<<"+"<<Img<<"i";
		}

		Complex operator+ (Complex c)
		{
			Complex temp;
			temp.Re=Re+c.Re;
			temp.Img=Img+c.Img;
			return temp;
		}
};

void main()
{
	clrscr();
	Complex c1(5,6);
	Complex c2(7,8);
	Complex c3;
	c1.Display();
	c2.Display();
	c3=c1+c2;
	c3.Display();
	getch();
}