#include<iostream.h>
#include<conio.h>

class Time
{
	int hr, min, sec;
	public:
		Time()
		{
			hr=min=sec=0;
		}
		Time(int hh, int mm, int ss)
		{
			hr=hh;
			min=mm;
			sec=ss;
		}
		void display()
		{
			cout<<hr<<":"<<min<<":"<<sec;
		}

		Time operator+(Time t)
		{
			Time temp;
			temp.hr=hr+t.hr;
			temp.min=min+t.min;
			temp.sec=sec+t.sec;
			cout<<temp.hr<<":"<<temp.min<<":"<<temp.sec;
			return calc(temp);
		}

		Time calc(Time tx)
		{
			if(tx.sec>60)
			{
				tx.min+=(tx.sec/60);

				tx.sec%=60;
			}
			if(tx.min>60)
			{
				tx.hr+=(tx.min/60);
				tx.min%=60;
			}
			return tx;
		}
};

void main()
{
	clrscr();
	Time t1(10,80,100);
	Time t2(7,80,105);
	cout<<endl;
	Time t3=t1+t2;
	t3.display();
	getch();
}
