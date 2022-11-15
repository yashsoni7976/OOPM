#include<iostream.h>
#include<conio.h>
class Complex
{
	int re1, re2;
	int img1, img2;
	public:
		Complex()
		{
			cout<<"\nEnter Real and Imaginary Part of 1st Complex Number : ";
			cin>>re1>>img1;
			cout<<"\nEnter Real and Imaginary Part of 2nd Complex Number : ";
			cin>>re2>>img2;
		}

		void addComplex()
		{
			re1+=re2;
			img1+=img2;
		}

		void display()
		{
			addComplex();
			cout<<"\nAddition of Complex is : ";
			cout<<re1<<"+"<<img1<<"i";
		}
};
void main()
{
	clrscr();
	Complex c;
	c.display();
	getch();
}