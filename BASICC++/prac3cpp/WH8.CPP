//wap to check number is Palindrome or not.
#include<iostream.h>
#include<conio.h>
void main()
{
	int n,d,r=0,c;
	clrscr();
	cout<<"\n\nEnter any Number:";
	cin>>n;		//initial value
	c=n;		//copy
	while(n>0)	//condition
	{
		d=n%10;
		r= r * 10 + d;
		n=n/10;
	}
	if(c==r)
	  cout<<"Numbers is Palindrome ";
	else
	  cout<<"Number is not Palindrome";
	getch();
}
