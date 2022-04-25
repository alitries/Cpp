//wap to read 10 diff no. and search an element.
#include<iostream.h>
#include<conio.h>
void main()
{
	int X[10],i,e,f=0;

	clrscr();
	cout<<"Enter any 10 no.";
	for(i=0;i<10;i++)
	  cin>>X[i];

	cout<<"Enter Search element:";
	cin>>e;

	for(i=0;i<10;i++)
	{
	   if(X[i]==e)
	   {
	      cout<<"Element found at  "<<i+1<<endl;
	      f=1;
	   }
	}
	if(f==0)
	  cout<<"Element not found";
	getch();
}