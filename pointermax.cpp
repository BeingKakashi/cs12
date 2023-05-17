#include<iostream>
using namespace std;
void max(int *x, int *y)
{
	if (*x > *y)
		cout<<*x;
	else
		cout<<*y; 
	
	
}
int main()
{
	int x, y;
	cout<<"Enter 2 Numbers : ";
	cin>>x>>y;
	max(&x,&y);
	return 0;
}
	
