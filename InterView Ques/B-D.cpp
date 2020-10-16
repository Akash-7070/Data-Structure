#include<iostream>
#include<cmath>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;

}NODE;

class LinkedList
{
	public:
		NODE* root;

	public:

        LinkedList()
		{
			root=NULL;
		}

		NODE* createNode(int a)
		{
	      NODE *ref=new NODE;
		  ref->data=a;
		  ref->next=NULL;
		  return ref;
		}


		void AddBinary(int c)
		{
			NODE *newnode,*trav;
			newnode=createNode(c);
			if(root==NULL)
			root=newnode;
			else
			{
				trav=root;
				while(trav->next!=NULL)
				{
					trav=trav->next;
				}
				trav->next=newnode;
			}
		}

		void getDecimal()
		{
		    int sum=0,cnt=3,base=2;
			NODE *trav=root;

			while(trav!=NULL)
			{
			    int ex= (int)pow((double)base,(double)cnt);
				sum=sum+(trav->data)*ex;
				trav= trav->next;
				cnt--;
			}
			cout<<"\nDecimal Number: "<<sum<<endl;
		}

		void clearr()
		{
		    NODE *temp;

		    while(root!=NULL)
            {
                temp=root;
                root=temp->next;
                delete temp;
            }
		}

};

int main()
{
	int choice;
	LinkedList l;

	cout<<"\n 1.AddBinary\n 0.Exit"<<endl;

	do
	{
		cout<< "Enter choice:"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
					int i,k;
					cout<<"Enter Binary"<<endl;
					for(i=1; i<=4; i++)
                    {
                       cin>>k;
					   l.AddBinary(k);
                    }

            case 2:
                l.getDecimal();
            case 3:
                l.clearr();
                break;

            case 0:
                cout<<"Exit"<<endl;
                break;

            default:
                cout<<"Enter Valid Choice"<<endl;
	}
	}while(choice!=0);

}


