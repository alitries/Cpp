//wap to read 3*3 matrix and display diagonal elements
#include<iostream.h>
#include<conio.h>
void main()
{
	int C[3][3],i,j;

	clrscr();
	cout<<"Enter 3*3 Matrix";
	for(i=0;i<3;i++)
	  for(j=0;j<3;j++)
	     cin>>C[i][j];

	cout<<"Diagonal Elements :"<<endl;
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)  //column
	    if(i==j)
	       cout<<" "<<C[i][j];
	    else
	       cout<<" ";
	  cout<<endl;

	}
	getch();
}