//wap to create add function with return and with parameter list
#include<iostream.h>
#include<conio.h>
int Add(int a,int b)
{
	return (a+b);
}
void main()
{
	int x,y,z;
	clrscr();
	cout<<"Enter anu 2 numbers";
	cin>>x>>y;
	z=Add(x,y);
	cout<<"Addition is "<<z<<endl;
	cout<<"Addition is "<<Add(10,20);
	getch();
}