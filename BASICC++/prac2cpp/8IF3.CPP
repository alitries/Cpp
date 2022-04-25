//wap to check number is divisible by 7 or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	int n;

	clrscr();
	cout<<"Enter any number:";
	cin>>n;
	if(n%7==0)
	   cout<<n<<" is Divisible by 7.";
	else
	   cout<<n<<" is not Divisible by 7.";
	getch();
}
