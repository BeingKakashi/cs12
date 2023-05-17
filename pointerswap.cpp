#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
	int c;
	c=*x;
	*x=*y;
	*y=c;
}
int main()
{
	int n1, n2;
	cout<<"Enter 2 Numbers : ";
	cin>>n1>>n2;
	swap(&n1,&n2);
	cout<<"n1 = "<<n1<<"\nn2 = "<<n2;
}
	
