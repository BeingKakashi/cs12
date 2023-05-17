#include<iostream>
using namespace std;
int bsearch(int a[10],int key)
{
	int mid,start=0,end=9;
	while(start<end)
	{
		mid=(start+end)/2;
		if(a[mid]==key)
		return mid;
		else
		{
			if(a[mid]<=key)		//if condition so()
			start=mid+1;
			else 
			end=mid-1;		//processing no
		}
	}
	return -1;
}						//end of function
int main()
{
int i,j,k,temp,key,pos,a[10];
//declare array and take input
cout<<"Enter 10 numbers ";
for(i=0;i<10;i++)
{
	cin>>a[i];
}
//sorting of array
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
//display array
for(i=0;i<10;i++)
{
	cout<<"  "<<a[i];
}
cout<<"Enter a number to search : ";
cin>>key;
pos=bsearch(a,key);
if(pos==-1)
{
	cout<<"Number not found";
	
}
else
{
cout<<"Number found at position "<<pos+1;
}
//getch();
return 0;
}


