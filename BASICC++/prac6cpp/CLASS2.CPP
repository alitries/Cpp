//wap to demonstrate class and multiple Object
#include<iostream.h>
#include<conio.h>
class Demo
{
	//Data Member
	public:
	int a,b,c;
	//Member Function
	void putdata()
	{
		cout<<"Enter First Object Details:"<<endl;
		cin>>a>>b>>c;

	}
	void getdata()
	{
		cout<<"A = "<<a<<endl;
		cout<<"B = "<<b<<endl;
		cout<<"C = "<<c<<endl;

	}
};
void main()
{
	Demo o1,o2;
	clrscr();
	o1.putdata();
	o2.putdata();
	o1.getdata();
	o2.getdata();
	getch();
}





