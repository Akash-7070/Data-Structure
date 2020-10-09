#include<iostream>
using namespace std;

int maxsize,front,rear;
int que[100];

void initque(int size)
{
    maxsize=size;
    front=-1;
    rear=-1;
}

int isFull()
{
    if(rear==maxsize-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty()
{
    if(rear==front)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void insert(int val)
{
     ++rear;
     que[rear]=val;
}

void deleteq()
{
    ++front;
    cout<<"delete ";
    cout<<que[front]<<endl;
    int i;
    for(i=0;i<=rear-1;i++)
    {
        que[i]=que[i+1];
    }
    --rear;
    front=-1;
}

void display()
{
    int i;
    for(i=0;i<=rear;i++)
    {
        cout<<que[i]<<endl;
    }
}

int main()
{
    int a,choice;
    cout<<"Enter Size of Que"<<endl;
    cin>>a;
    initque(a); //Initializing Que

    cout<<"1: Insert"<<endl;
    cout<<"2: Delete"<<endl;
    cout<<"3: Display"<<endl;
    cout<<"0: Exit"<<endl;

    do
    {
        cout<<"Enter Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            if(isFull())
            {
                cout<<"Que is Full"<<endl;
            }
            else
            {
                int val;
                cout<<"Insert Number"<<endl;
                cin>>val;
                insert(val);
            }
            break;

            case 2:

            if(isEmpty())
            {
                cout<<"Que is Empty"<<endl;
            }
            else
            {
               deleteq();
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
            };
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

