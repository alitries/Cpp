//wap to read 10 diff no. and count total no. of even and odd elements
#include<iostream.h>
#include<conio.h>
void main()
{
	int X[10],i,ecnt,ocnt;

	clrscr();
	ecnt=ocnt=0;
	cout<<"Enter any 10 no.";
	for(i=0;i<10;i++)
	  cin>>X[i];
	for(i=0;i<10;i++)
	   if(X[i]%2==0)
	      ecnt++;
	   else
	      ocnt++;
	cout<<"Total Even No. is "<<ecnt<<endl;
	cout<<"Total Odd No. is "<<ocnt;
	getch();
}