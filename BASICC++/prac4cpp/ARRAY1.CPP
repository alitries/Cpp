//wap to demonstrate array initialization
#include<iostream.h>
#include<conio.h>
void main()
{
	int A[5]={11,22,33,44,55};
	int B[3],C[5],i;

	clrscr();
	B[0]=1; B[1]=2; B[2]=3;
	cout<<"enter any 5 numbers";
	for(i=0;i<5;i++)
	   cin>>C[i];
	cout<<"First Array A :";
	for(i=0;i<5;i++)
	  cout<<A[i]<<"  ";

	cout<<"\nSecond Array B :";
	for(i=0;i<3;i++)
	  cout<<B[i]<<"  ";

	cout<<"\nThird Array C :";
	for(i=0;i<5;i++)
	  cout<<C[i]<<"  ";
	getch();
}



