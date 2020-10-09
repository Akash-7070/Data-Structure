/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int s[100],tos,MaxSize;
int stack (int size)
{
    MaxSize=size;
    tos=-1;
}
 void push(int e)
{
    tos++;
    s[tos]=e;
}
 int isFull()
{
    if(tos==MaxSize-1)
    return 1; 
    else
    return 0;
}
int pop()
{
    int temp;
    temp=s[tos];
    tos--;
    return temp;
}
int isEmpty()
{
    if(tos==1)
    return 1;
    else 
    return 0;
}
int atTop()
{
    return (s[tos]);
}
void PrintStack()
{
    int i;
    for(i=tos;i>-1;i--)
    {
        cout<<s[i];
    }
}
int main()
{
    int no,rem;
    stack(10);
    cout<<"Enter Number";
    cin>>no;
    while(no!=0)
    {
        rem=no%2;
        no=no/2;
        push(rem);
    }
    PrintStack();
}
