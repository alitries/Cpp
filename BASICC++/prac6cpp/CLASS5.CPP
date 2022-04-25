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
	void getBox()
	{
		cout<<"Enter Height :";
		cin>>height;
		cout<<"Enter Width :";
		cin>>width;
		cout<<"Enter depth :";
		cin>>depth;
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
	//create object of Box class
	Box o1,o2;

	clrscr();
	o1.getBox();
	cout<<"Volume of a Box :"<<o1.Volume();
	o2.getBox();
	cout<<"Volume of a Box :"<<o2.Volume();
	getch();
}
