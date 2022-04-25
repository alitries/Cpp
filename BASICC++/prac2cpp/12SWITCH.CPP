//wap to create basic arithmatic menu for two numbers
#include<iostream.h>
#include<conio.h>
void main()
{
	int ch,a,b,c;

	clrscr();
	cout<<"===============Arithmatic Menu==================="<<endl;
	cout<<"\t1.Addition"<<endl;
	cout<<"\t2.Subtraction"<<endl;
	cout<<"\t3.Multiplication"<<endl;
	cout<<"\t4.Division"<<endl;
	cout<<"================================================="<<endl;
	cout<<"Enter your choice :";
	cin>>ch;
	cout<<"================================================="<<endl;
	switch(ch)
	{
		case 1: cout<<"Enter any two Numbers :";
			cin>>a>>b;
			c=a+b;
			cout<<"Addition is "<<c;
			break;
		case 2: cout<<"Enter any two Numbers :";
			cin>>a>>b;
			c=a-b;
			cout<<"Subtraction is "<<c;
			break;
		case 3: cout<<"Enter any two Numbers :";
			cin>>a>>b;
			c=a*b;
			cout<<"Multiplication is "<<c;
			break;
		case 4: cout<<"Enter any two Numbers :";
			cin>>a>>b;
			c=a/b;
			cout<<"Division is "<<c;
			break;
		default:cout<<"Invalid Choice...!";
			break;
	}//end of switch
	getch();
}
