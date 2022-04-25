//wap tofind fact of a number n.
#include<iostream.h>
#include<conio.h>
void main()
{
	int n;
	int fact=1;
	clrscr();
	cout<<"Enter any Number:";
	cin>>n;		//initial value
	while(n>0)	//condition
	{
		fact = fact * n;
		n--;

	}
	cout <<"Fact of  n Numbers :"<<fact ;
	getch();
}
