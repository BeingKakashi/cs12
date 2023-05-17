#include<iostream>
#include<string.h>
using namespace std;
main()
{
		char st[10];
		int i,j,len,temp;
		cout<<"enter string : ";
		//cin>>st;
		gets(st);
		len=strlen(st);
		j=len-1;
		for(i=0;i<len/2;i++)
		{
			temp=st[i];
			st[i]=st[j];
			st[j]=temp;
			j--;
		}
		cout<<"Reverse string is "<<st;
	
}
