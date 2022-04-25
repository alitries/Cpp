//wap to demonstrate class and multiple Object
//Scope Resolution Operator

#include<iostream.h>
#include<conio.h>
class Demo
{
	//Data Member
	int a,b,c;
	//Member Function
	public:
	void putdata();	//prototype
	void getdata();
};
void Demo::putdata()
{
		cout<<"Enter Object Details:"<<endl;
		cin>>a>>b>>c;

}
void Demo::getdata()
{
		cout<<"A = "<<a<<endl;
		cout<<"B = "<<b<<endl;
		cout<<"C = "<<c<<endl;

}
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





