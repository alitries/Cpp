//wap to swap 2 no. using function and pointer
#include<iostream.h>
#include<conio.h>
void Swap(int *a,int *b)
{
	*a=*a + *b;
	*b=*a - *b;
	*a=*a - *b;
}
void main()
{
	int x,y;
	clrscr();
	cout<<"Enter anu 2 numbers";
	cin>>x>>y;
	cout<<"Before Swap X:"<<x<<" and Y:"<<y<<endl;
	Swap(&x,&y);
	cout<<"After Swap X:"<<x<<" and Y:"<<y<<endl;
	getch();
}