p//wap to demonstrate 2d array initialization
#include<iostream.h>
#include<conio.h>
void main()
{
	int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int B[2][2],C[3][3],i,j;

	clrscr();
	B[0][0]=11;
	B[0][1]=12;
	B[1][0]=13;
	B[1][1]=14;
	cout<<"Enter 3*3 Matrix";
	for(i=0;i<3;i++)
	  for(j=0;j<3;j++)
	     cin>>C[i][j];
	cout<<"First Matrix"<<endl;
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)  //column
	     cout<<" "<<A[i][j];
	  cout<<endl;
	}
	cout<<"Second Matrix"<<endl;
	for(i=0;i<2;i++)
	{
	  for(j=0;j<2;j++)  //column
	     cout<<" "<<B[i][j];
	  cout<<endl;
	}
	cout<<"Third Matrix"<<endl;
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)  //column
	     cout<<" "<<C[i][j];
	  cout<<endl;
	}
	getch();
}