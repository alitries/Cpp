//wap to create add function with return and without parameter list
#include<iostream.h>
#include<conio.h>
int Add()
{
	int a,b,c;
	cout<<"Enter anu 2 numbers";
	cin>>a>>b;
	c=a+b;
	return c;
}
void main()
{
	int z;
	clrscr();
	z=Add();
	cout<<"Addition is "<<z<<endl;
	cout<<"Addition is "<<Add();
	getch();
}