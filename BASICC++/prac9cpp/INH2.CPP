//wap to implement muliple inheritance
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
class B
{
	protected:
	int b;
	public:
	void getB()
	{
		cout<<"Enter Value of B:";
		cin>>b;
	}
};
class C:public A,public B
{
	protected:
	int c;
	public:
	void getC()
	{
		cout<<"Enter Value of C:";
		cin>>c;
	}
	void addition()
	{
		cout<<"Addition is"<<a+b+c;
	}
};
void main()
{
	clrscr();
	C obj;
	obj.getA();
	obj.getB();
	obj.getC();
	obj.addition();
	getch();
}