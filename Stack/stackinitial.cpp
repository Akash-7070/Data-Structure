

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
    int ch,e,MaxSize;
    cout<<"Enter Size";
    cin>>MaxSize;
    stack(MaxSize);
    do
    {
        cout<<"\n1.push: \n2.pop \n3.atTop\n4.PrintStack\n0:Exit\n:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            if(isFull()==1)
            cout<<"Full";
            else
            {
                cout<<"Enter data:";
                cin>>e;
                push(e);
            }
        break;
        case 2:
        if(isEmpty()==1)
        cout<<"Empty";
        else
        {
            e=pop();
            cout<<"popped"<<e;
        }
        break;
        case 3:
        if(isEmpty()==1)
        cout<<"EMPTY";
        else
        {
            e=atTop();
            cout<<"at TOP"<<e;
        }
        break;
        case 4:
        if(isEmpty()==1)
        cout<<"empty";
        else
        {
            PrintStack();
        }
        break;
        case 0:
        {
            cout<<"Exiting";
        }
        break;
        default:
        cout<<"ERROR";
        break;
        }
    
    }
        while(ch!=0);
}

