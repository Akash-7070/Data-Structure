#include<iostream>
#include<string.h>
using namespace std;

int s[5],tos1,tos2,ss;

void init(int size)
{
 tos1=-1;
 tos2=size;
 ss=size;
}

void push1(int a)
{
 tos1++;
 s[tos1]=a;
}
void push2(int b)
{
 tos2--;
 s[tos2]=b;
}

bool isFull()
{
  if((tos1+1)==tos2)
  {
   return true;
 }
 else
 {
  return false;
 }
}
bool isEmpty1()
{
 if(tos1==-1)
 {
  return true;
 }
 else
 {
  return false;
 }
}

bool isEmpty2()
{
 if(tos2==ss)
 {
  return true;
 }
 else
 {
  return false;
 }
}

void pop1()
{
 tos1--;
}

void pop2()
{
 tos2++;
}

int peek1()
{
 return s[tos1];
}
int peek2()
{
 return s[tos2];
}
 void printStack1()
 {
  cout<<"First stack:\t";
  for(int i=tos1;i>=0;i--)
  {
   cout<<s[i]<<"\t";
 }
 cout<<"\n";
 }

 void printStack2()
 {
  cout<<"Second stack:\t";
  for(int i=tos2;i<=ss;i++)
  {
   cout<<s[i]<<"\t";
 }
 cout<<"\n";
 }

int main()
{
 cout<<"Enter size of stack "<<endl;
 int a, choice;
 cin>>a;
 init(a);

 cout<<" \n 1.push11 \t 2.push22 \n 3.Pop12 \t 4.Pop23  \n 5.Print11 \t 6.Print22 \n 0.Exit"<<endl;
 do
 {
  cout<< "Enter choice:"<<endl;
  cin>>choice;
  switch(choice)
  {
   case 1:
    if(isFull())
    {
     cout<<"Stack11 is full"<<endl;
    }
     else
    {
     int k;
     cout<<"Enter element to push11"<<endl;
     cin>>k;
     push1(k);
    }
    break;

   case 2:
     if(isFull())
    {
     cout<<"Stack22 is full"<<endl;
    }
     else
    {
     int k1;
     cout<<"Enter element to push22"<<endl;
     cin>>k1;
     push2(k1);
    }
    break;

    case 3:
     if(isEmpty1())
     {
      cout<<"Stack11 in empty"<<endl;
     }

     else
     {
      int a=peek1();
      pop1();
      cout<<"Deleted Element: "<<a<<endl;
     }
     break;

    case 4:
     if(isEmpty2())
     {
      cout<<"Stack22 in empty"<<endl;
     }
     else
     {
      int a1=peek2();
      pop2();
      cout<<"Deleted Element: "<<a1<<endl;
     }
     break;
    case 5:
     if(isEmpty1())
     {
      cout<<"Stack11 in empty"<<endl;
     }
     else
     {
      printStack1();
     }
     break;

    case 6:
     if(isEmpty2())
     {
      cout<<"Stack22 in empty"<<endl;
     }
     else
     {
      printStack2();
     }
     break;
    case 0:
     cout<<"Exit"<<endl;
     break;

     default:
      cout<<"Enter Valid Choice"<<endl;
  }
 }while(choice!=0);
}
