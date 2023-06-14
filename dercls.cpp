#include<iostream>
#include<conio.h>

class b1
{
 protected:
  int n1;
 public :
  void inputb()
  {
   cout<<"Enter a number ";
   cin>>n1;
  }
};
class b2
{
 protected:
  int n2;
 public:
  void inputd()
  {
   cout<<"Enter a number ";
   cin>>n2;
  }
};
class d1:public b1, public b2 
{
 public:
  void add()
  {
   int c=n1+n2;
   cout<<"\nAddition : "<<c;
  }
};
int main()
{
 d1 ob;
 ob.inputb();
 ob.inputd();
 ob.add();
 getch();
}
