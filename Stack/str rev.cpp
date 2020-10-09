#include<iostream>
#include<string>
using namespace std;
char s[100];
int MaxSize,tos;

void initStack(int size)
{
	MaxSize=size-1;
	tos=-1;
}

void push(char e)
{
	tos++;
	s[tos]=e;
}

char pop()
{
	char temp;
	temp = s[tos];
	tos--;
	return temp;
}

int isEmpty()
{
	if(tos==-1)
		return 1;
	else
		return 0;
}

int isFull()
{
	if(tos == MaxSize-1)
		return 1;
	else
		return 0;
}

char atTop()
{
	return s[tos];
}


void printStack()
{
	int i;
	for(i=tos;i>-1;i--)
	{
		cout<<s[i];	
	}
}

int main()
{
	int i,length;
	string name;
	cout<<"Enter name";
	cin>>name;
	length = name.length();
	for(i=0;i<length;i++)
	{
		push(name[i]);
	}
	cout<<"\n";
	printStack();
	return 0;
}
