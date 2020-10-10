#include<iostream>
using namespace std;

int maxsize,rear,front;
int Cque[20];

void initCque(int a)
{
    maxsize=a;
    rear=-1;
    front=-1;
}

int isEmpty()
{
    if(front==-1 && rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 int isFull()
 {
     if((front==-1 && rear== maxsize-1) || (rear==front && rear!=-1))
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }
 void push(int a)
 {
     if(rear==maxsize-1)
     {
         rear=0;
     }
     else
     {
         rear++;
     }
     Cque[rear]=a;
 }

void pop()
 {
     if(front==maxsize-1)
     {
         front=0;
     }
     else
     {
         front++;
     }

     if(front==rear)
     {
         front=-1;
         rear=-1;
     }
 }

 int peek()
 {
     if(front==maxsize-1)
     {
         return Cque[0];
     }
     else
     {
          return Cque[front+1];
     }
 }

 void display()
 {
     int i;
     for(i=front+1; i<=rear; i++)
     {
         cout<<"\t";
         cout<<Cque[i];
     }
     cout<<"\n";
 }

int main()
{
    int size,choice;
    cout<<"Enter Size"<<endl;
    cin>>size;
    initCque(size);

    do
    {
        cout<<"Enter Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            if(isFull())
            {
                cout<<"Que is full"<<endl;
            }
            else
            {
                int a;
                cout<<"Enter Element"<<endl;
                cin>>a;
                push(a);
            }
            break;

        case 2:
            if(isEmpty())
            {
                cout<<"Que is Empty"<<endl;
            }
            else
            {
                int val=peek();
                pop();
                cout<<"Delete";
                cout<<val<<endl;
            }
            break;

        case 3:
            if(isEmpty())
            {
                cout<<"Que is Empty"<<endl;
            }
            else
            {
               display();
            }
            break;

        case 0:
            cout<<"Exit"<<endl;
            break;

        default:
            cout<<"Enter Valid Choice"<<endl;
        }
    }while(choice!=0);

    return 0;
}
