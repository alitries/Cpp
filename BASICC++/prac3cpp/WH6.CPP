//wap to find sum of digit of a number n.
#include<iostream.h>
#include<conio.h>
void main()
{
	int n,d,s=0;

	clrscr();
	cout<<"\n\nEnter any Number:";
	cin>>n;		//initial value
	while(n>0)	//condition
	{
		d=n%10;
		s= s + d;
		n=n/10;

	}
	cout <<"Sum of digit of a Numbers :"<<s ;
	getch();
}
