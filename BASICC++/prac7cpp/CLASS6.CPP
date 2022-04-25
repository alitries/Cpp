//Constructor
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
		cout<<"Enter Box Details"<<endl;
		cout<<"Enter Height :";
		cin>>height;
		cout<<"Enter Width :";
		cin>>width;
		cout<<"Enter depth :";
		cin>>depth;
	}
	~Box()
	{
		cout<<"\nObject is Dead...!";
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
	{
	//create object of Box class
	Box o1,o2;
	cout<<"Volume of a Box :"<<o1.Volume()<<endl;
	cout<<"Volume of a Box :"<<o2.Volume();
	}
	getch();
}
