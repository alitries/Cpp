//wap to calculate factorial of a number using constructor
#include<iostream.h>
#include<conio.h>
class Fact
{
	int n,f;
	public:
	Fact()
	{
		f=1;
		cout<<"Enter any number:";
		cin>>n;
		while(n)
		{
			f=f*n;
			n--;
		}
		cout<<"Factorial is "<<f;
	}
};
void main()
{
	clrscr();
	Fact o;
	getch();
}
