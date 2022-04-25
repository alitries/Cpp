//wap to read day code from user and display day name
#include<iostream.h>
#include<conio.h>
void main()
{
	int dc;

	clrscr();
	cout<<"Enter DayCode (1-7):";
	cin>>dc;
	if(dc==1)
	  cout<<"Monday";
	else if(dc==2)
	       cout<<"Tuesday";
	     else if(dc==3)
		    cout<<"Wednesday";
		  else if(dc==4)
			 cout<<"Thursday";
		       else if(dc==5)
			      cout<<"Friday";
			    else if(dc==6)
				   cout<<"Staurday";
				 else if(dc==7)
					cout<<"Sunday";
				      else
					cout<<"Invalid Daycode...!";
	 getch();
}
