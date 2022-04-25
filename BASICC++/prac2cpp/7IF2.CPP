//wap to display msg if number is greater than 100 or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	int n;

	clrscr();
	cout<<"Enter any number:";
	cin>>n;
	if(n>100)
	   cout<<n<<" is greater than 100.";
	else
	   cout<<n<<" is not greater than 100.";
	getch();
}
