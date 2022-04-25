//Constructor overloading
//wap to create Box class and create member function to calculate volumne of a Box
#include<iostream.h>
#include<conio.h>
class Box
{
	private :
	double height;
	double width;
	double depth;
	public:
	Box()
	{
		height=0.0;
		width=0.0;
		depth=0.0;
	}
	Box(double h,double w,double d) //parametrized constructor
	{
		height=h;
		width=w;
		depth=d;
	}
	double Volume()
	{
		double vol;
		vol=height*width*depth;
		return vol;
	}
};
void main()
{
	clrscr();
	double h,w,d;
	cout<<"Enter Box Details"<<endl;
	cout<<"Enter Height :";	cin>>h;
	cout<<"Enter Width :"; 	cin>>w;
	cout<<"Enter depth :"; 	cin>>d;
	//create object
	Box o1,o2(h,w,d),o3(1.1,2.2,3.3);

	cout<<"Volume of a Box :"<<o1.Volume()<<endl;
	cout<<"Volume of a Box :"<<o2.Volume()<<endl;
	cout<<"Volume of a Box :"<<o3.Volume()<<endl;
	getch();
}
