#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node* next;

}NODE;

class LinkedList
{
	public:
		NODE *root, *tail;

	public:
        LinkedList()
		{
			root=NULL;
			tail=NULL;
		}

		NODE* createNode(int a)
		{
	      NODE *ref=new NODE;
		  ref->data=a;
		  ref->next=NULL;
		  return ref;
		}

		void insertLeft(int b)
		{
			NODE *newnode;
			newnode=createNode(b);

			if(root==NULL)
			{
				root=newnode;
				tail=newnode;
			}
			else
			{
				newnode->next=root;
				root=newnode;
				tail->next=root;
			}

		}
		void insertRight(int c)
		{
			NODE *newnode,*temp;
			newnode=createNode(c);

			if(root==NULL)
            {
               root=newnode;
               tail=newnode;
            }

			else
			{
				tail->next=newnode;
				newnode->next=root;
                tail=newnode;
			}
		}

		void Cycle(int c)
		{
		    NODE *temp;

		    while(c)
            {
                temp=root;
                root=tail;
                root->next=temp;
                tail=getSecondLast();
                --c;
            }
		}

		NODE* getSecondLast()
		{
		    NODE *temp,*trav;
		    trav=root;
		    int c=1;

		    while(1)
            {
                if(root==trav)
                {
                    if(c)
                    {
                        trav=trav->next;
                        --c;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    temp=trav;
                    trav=trav->next;
                }
            }
		     return temp;

		}



		void display()
		{
			NODE *trav;
			trav=root;
			int c=1;

			while(1)
			{
			    if(trav==root)
                {
                    if(c)
                    {
                        cout<<trav->data<<"\t";
				        trav= trav->next;
				        --c;
                    }
                    else
                    {
                        break;
                    }
                 }
                else
                {
                  cout<<trav->data<<"\t";
				  trav= trav->next;
                }
			}
			cout<<"\n"<<endl;
		}
};

int main()
{
	int choice;
	LinkedList l;

	cout<<" \n 1.AddFirst \n 2.AddLast \n 3.Cycle \n 4.Display \n 0.Exit\n"<<endl;

	do
	{

		cout<< "Enter choice:"<<endl;
		cin>>choice;

		switch(choice)
		{
			case 1:
					int k;
					cout<<"Enter element"<<endl;
					cin>>k;
					l.insertLeft(k);
				break;

				case 2:
					int j;
					cout<<"Enter element"<<endl;
					cin>>j;
					l.insertRight(j);
					break;

                case 3:
                    int c;
                    cout<<"Enter number Of Cycle"<<endl;
                    cin>>c;
                    l.Cycle(c);
                    break;

				case 4:
				    l.display();
					break;

				case 0:
					cout<<"Exit"<<endl;
					break;

					default:
						cout<<"Enter Valid Choice"<<endl;
	}
	}while(choice!=0);
}



