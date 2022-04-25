//wap to implement Single inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	protected:
	int a;
	public:
	void getA()
	{
		cout<<"Enter Value of A:";
		cin>>a;
	}
};
class B:public A
{
	protected:
	int b;
	public:
	void getB()
	{
		cout<<"Enter Value of B:";
		cin>>b;
	}
	void addition()
	{
		cout<<"Addition is"<<a+b;
	}
};
void main()
{
	clrscr();
	B obj;
	obj.getA();
	obj.getB();
	obj.addition();
	getch();
}