/*wap to display following output pattern
  1
  2 3
  4 5 6
  7 8 9 10
*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k=1;

	clrscr();
	for(i=1;i<5;i++)
	{
		for(j=1;j<=i;j++,k++)
		  cout<<" "<<k;
		cout<<endl;
	}
	getch();
}
