#include<iostream.h>
#include<conio.h>
class circle
{
float x,y,rad;
public:
circle()
{
x=10.0;
y=10.0;
rad=10.0;
}
void getdata()
{
cout<<"\n Enter x Coordinates";
cin>>x;
cout<<"\n Enter Y Coordinates";
cin>>y;
cout<<"\n Rnter Radius";
cin>>rad;
}
void area()
{
cout<<"\n Area= "<<(3.14*rad*rad);
}
void circum()
{
cout<<"\n circumference= "<<(2*3.14*rad);
}
void print()
{
cout<<"\n Circle Details are: "<<endl;
cout<<"\n X= "<<x<<"\n Y= "<<y;
cout<<"\n Radius= "<<rad;
area();
circum();
}
};
void main()
{
clrscr();
circle obj;
obj.getdata();
obj.print();
getch();
}