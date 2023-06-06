#include<iostream.h>
#include<conio.h>
class student
{
private:
int rno;
char name[15];
public:
void getdata()
{
cout<<"\n Enter Roll No.: ";
cin>>rno;
cout<<"\n Enter Name of the Student; ";
cin>>name;
}
void putdata()
{
cout<<"\nRoll No: "<<rno;
cout<<"\nName= "<<name;
}
};
void main()
{
student ob,ob1;
ob.getdata();
ob.putdata();
ob1.getdata();
ob1.putdata();
getch();

}