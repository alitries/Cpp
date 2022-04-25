//wap to find max from three numbers.
#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,c;

	clrscr();
	cout<<"Enter any three numbers:";
	cin>>a>>b>>c;
	if(a>b)
	{
	  if(a>c)
	     cout<<a<<" is greater.";
	  else
	     cout<<c<<" is greater ";
	}
	else
	{
	  if(b>c)
	     cout<<b<<" is greater.";
	  else
	     cout<<c<<" is greater ";
	}
	getch();
}
