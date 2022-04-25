//wap to overload Add function to find addition of integer and float
#include<iostream.h>
#include<conio.h>
void Add()
{
	float a,b,c;
	cout<<"Enter any 2 float Values :";
	cin>>a>>b;
	c=a+b;
	cout<<"Float Addition :"<<c<<endl;
}
int Add(int x,int y)
{
	return (x+y);
}
void main()
{
	int x,y,z;
	clrscr();
	Add();
	cout<<"Enter any 2 int Values :";
	cin>>x>>y;
	z=Add(x,y);
	cout<<"Int Addition :"<<z<<endl;
	getch();
}