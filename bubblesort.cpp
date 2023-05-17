#include<iostream>
using namespace std;
int main()
{
//input array ---------------1
int i,j,k,temp,a[10];
cout<<"\n Enter 10 Numbers : ";
for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
//display original array ---2
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<"\t";
	}
//sorting array ------------3
for(k=1;k<10;k++)
	{
		for(j=0;j<10-k;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
//sorted array -------------4
cout<<"\nSorted array is ";
for(i=0;i<10;i++)
	{
		
cout<<"\nnumber =       "<<a[i];
	}
}
