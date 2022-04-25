//wap to find factorial of a number
#include<iostream.h>
#include<conio.h>
void main()
{
	int n,f=1;

	clrscr();
	cout<<"Enter any number";
	cin>>n;
	for(;n>0;n--)
	  f=f*n;
	cout<<"Fact is "<<f;
	getch();
}
