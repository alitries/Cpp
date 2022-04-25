//wap to create add function without return and with parameter list
#include<iostream.h>
#include<conio.h>
void Add(int a,int b)
{
	int c;
	c=a+b;
	cout<<"Addition is "<<c<<endl;
}
void main()
{
	int x,y;
	clrscr();
	cout<<"Enter anu 2 numbers";
	cin>>x>>y;
	Add(x,y);
	Add(10,20);
	getch();
}