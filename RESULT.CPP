#include<iostream.h>
#include<conio.h>
class student
{
protected:
int rno;
public:
void getrno()
{
cout<<"Enter Roll No :";
cin>>rno;
}
void showrno()
{
cout<<" Roll no. :"<<rno;
}
};
class test : public student
{
protected:
int sub1;
int sub2;
public:
void getmarks()
{
cout<<"Enter Marks :";
cin>>sub1>>sub2;
}
void putmarks()
{
cout<<"marks of sub1 = "<<sub1<<"marks of sub2 = "<<sub2;
}
};
class sports
{
protected:
int score;
public :
void getscore()
{
cout<<"Enter Score : ";
cin>>score;
}
void putscore()
{
cout<<"Score = "<<score;
}
};
class result:public test,public sports
{
protected:
int total;
public:
void add()
{
total=sub1+sub2+score;
cout<<"Your total result is "<<total;
}
};
void main()
{
clrscr();
result ob;
ob.getrno();
ob.getmarks();
ob.getscore();
ob.showxrno();
ob.putmarks();
ob.putscore();
ob.add();
getch();
}



