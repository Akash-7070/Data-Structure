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
		
		void insertRight(int c)
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
		
		void display()
		{
			NODE *trav;
			trav=root;
			while(trav!=NULL)
			{
				cout<<trav->data<<"\t";
				trav= trav->next;
			}
			cout<<"\n"<<endl;
		}
		
		void swap()
		{
			NODE *trav=root;
			
			while( trav!=NULL && trav->next!=NULL )
			{
                int temp=trav->data;
                trav->data=trav->next->data;
                trav->next->data=temp;
                
                trav=trav->next->next;
			}
		
		}
};
		int main()
	{
		int choice;
		LinkedList l;
		cout<<" \n1.ADD \n2.disp \n3.swap \n0.Exit"<<endl;
	
		do
		{
			cout<< "Enter choice:"<<endl;
			cin>>choice;
			switch(choice)
			{
				
				case 1:
					int j;
					cout<<"Enter element to Enqueue"<<endl;
					cin>>j;
					l.insertRight(j);
					break;
					
				case 2:
				    l.display();
					break;
			
				case 3:
					l.swap();
					break;		
				case 0:
					cout<<"Exit"<<endl;
					break;
					
					default:
						cout<<"Enter Valid Choice"<<endl;
	}
	}while(choice!=0);

}


