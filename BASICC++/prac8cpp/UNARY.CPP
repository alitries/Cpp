//wap to demonstrate Unary Operator Overloading
#include<iostream.h>
#include<conio.h>
class Space
{
	int a,b,c;
	public:
	Space()
	{
		cout<<"Enter any 3 numbers :";
		cin>>a>>b>>c;
	}
	void Display()
	{
		cout<<"A = "<<a<<endl;
		cout<<"B = "<<b<<endl;
		cout<<"C = "<<c;
	}
	//Overload Unary optr - to change the sign of object
	void operator -()
	{
		a=-a;
		b=-b;
		c=-c;
	}
};
void main()
{
	clrscr();
	Space obj;

	-obj;
	obj.Display();
	getch();
}



