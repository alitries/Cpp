//wap to find sum of 1st n number.
#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	int sum =0;
	clrscr();
	cout<<"Enter any Number:";
	cin>>n;		//initial value
	while(n>0)	//condition
	{
		sum += n;
		n--;

	}
	cout <<"Sum of First n Numbers :"<<sum ;
	getch();
}
