//wap to calculate addition of two complex number
//using binary operator overloading
#include<iostream.h>
#include<conio.h>
class Complex
{
	int real;
	double img;

	public:
	Complex()
	{
		real=0;
		img=0.0;
	}
	Complex(int r,double i)
	{
		real=r;
		img=i;
	}
	void Display(int j)
	{
		cout<<"C"<<j<<" = "<<real<<" + "<<img<<"i"<<endl;
	}

	//OO
	Complex operator+(Complex &X)
	{
		Complex t;
		t.real = real + X.real;
		t.img = img + X.img;
		return t;
	}
};
void main()
{
	Complex C1(1,1.1),C2(2,2.2),C3;

	clrscr();

	C3=C1+C2;

	C1.Display(1);
	C2.Display(2);
	C3.Display(3);

	getch();
}
