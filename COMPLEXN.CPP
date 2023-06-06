#include<iostream.h>
#include<conio.h>
class complex
{
int i,j;
public:
void input();
void show();
};
void complex::input()
{
cout<<"Enter 2 No.s "<<endl;
cin>>i>>j;
}
void complex::show()
{
cout<<"\n i= "<<i<<"j= "<<j;
}
void main()
{
complex x,y,z;
clrscr();

x.input();
y.input();
cout<<"\n x object is ";
x.show();
cout<<"\n y object is ";
y.show();
getch();
}