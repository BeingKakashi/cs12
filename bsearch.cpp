#include<iostream>
using namespace std;
int bsearch(int a[], int key)
{
int mid,start=0,end=9;
while(start<=end)	
	{
		mid=(start+end)/2;
		
		if (a[mid]==key)
		{
			return mid;
		}
		else 
		{
			if(a[mid]<=key)
			start=mid+1;
			else
			end=mid-1;
		}
	}//end of while
	return -1;
}
int main()
{
	//declare array and take input
int i,j,k,temp,key,a[10];
cout<<"Enter 10 Numbers : "<<endl;
for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
//sort array
for(k=1;k<10;k++)
	{for(j=0;j<10-k;j++)
	{
		if(a[j]>a[j+1]) 
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
		}
	}
}
//display sorted array
cout<<"\nSorted array is \n";
for(i=0;i<10;i++)
{
	cout<<"number "<<a[i]<<" is at position "<<i+1<<endl;
}
//enter key to call function
cout<<"\n \n enter the number to be searched ";
cin>>key;
int pos=bsearch(a,key); //int bsearch(int [], int);
if(pos==-1)
cout<<"number not found";
else
cout<<"number found at position = "<<pos+1;
return 0;
}
