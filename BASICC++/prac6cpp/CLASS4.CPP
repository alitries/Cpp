//wap to create Box class and calculate volumne of a Box
#include<iostream.h>
#include<conio.h>
class Box
{
	public:
	double height;
	double width;
	double depth;
};
void main()
{
	//create object of Box class
	Box obj;
	double vol;

	clrscr();
	cout<<"Enter Height :";
	cin>>obj.height;
	cout<<"Enter Width :";
	cin>>obj.width;
	cout<<"Enter depth :";
	cin>>obj.depth;

	vol=obj.height*obj.width*obj.depth;
	cout<<"Volume of a Box :"<<vol;
	getch();
}
