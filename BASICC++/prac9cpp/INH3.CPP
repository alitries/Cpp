//WAP TO IMPLEMENT HYBRID INHERITANCE
#include<iostream.h>
#include<conio.h>
class stud
{
	protected:
	int rno;
	public:
	void getRno()
	{
		cout<<"enter RollNo.";
		cin>>rno;
	}
};
class marks:public stud
{
	protected:
	double m1,m2,m3;
	public:
	void getMarks()
	{
		cout<<"Enter the marks of 3 subjects:";
		cin>>m1>>m2>>m3;
	}
};
class sports
{
	protected:
	char grade;
	public:
	void getGrade()
	{
		cout<<"Enter the Sports Grade:";
		cin>>grade;
	}
};
class result:public marks,public sports
{
	double total;
	public:
	void  Display()
	{
		getRno();
		getMarks();
		getGrade();
		total=m1+m2+m3;
		cout<<"=================Marksheet====================="<<endl;
		cout<<"RollNo.\t"<<rno<<endl;
		cout<<"Sub1 :"<<m1<<"\tSub2 :"<<m2<<"\tSub3 :"<<m3<<endl;
		cout<<"Total Marks :"<<total<<endl;
		cout<<"Grade :"<<grade<<endl;
		cout<<"================================================"<<endl;
	}
};
void main()
{
	clrscr();
	result obj;
	obj.Display();
	getch();
}