//wap to read day code from user and display day name using switch case
#include<iostream.h>
#include<conio.h>
void main()
{
	int dc;

	clrscr();
	cout<<"Enter DayCode (1-7):";
	cin>>dc;
	switch(dc)
	{
		case 1:cout<<"Monday";
			break;
		case 2:cout<<"Tuesday";
			break;
		case 3:cout<<"Wednesday";
			break;
		case 4:cout<<"Thursday";
			break;
		case 5:cout<<"Friday";
			break;
		case 6:cout<<"Staurday";
			break;
		case 7:cout<<"Sunday";
			break;
		default:cout<<"Invalid Daycode...!";
			break;
	}//end of switch
	getch();
}
