//Copy Constructor
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
	Box(double h,double w,double d) //parametrized constructor
	{
		height=h;
		width=w;
		depth=d;
	}
	Box(Box &O)	//copy constructor

	{
		height=O.height;
		width=O.width;
		depth=O.depth;
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
	//create object
	Box o3(1.1,2.2,3.3),o2(o3);
	cout<<"Volume of a Box :"<<o2.Volume()<<endl;
	cout<<"Volume of a Box :"<<o3.Volume()<<endl;
	getch();
}
