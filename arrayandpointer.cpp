#include<iostream>
using namespace std;
int main()
{
	float a[5]={1.1,2.5,3.3,4.4,5.5};
	float *ptr,sum=0;
	int i;
	ptr=a;
	cout<<"Starting address       size \t    ending address \tsum\n";
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		cout<<ptr<<"\t\t"<<sizeof(*ptr)<<"\t\t";
		//++ptr=ptr+1
		cout<<++ptr<<"\t"<<sum<<"\n";
		
	}
	return 0;
}
