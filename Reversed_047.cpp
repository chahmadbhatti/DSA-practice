//213047
#include <iostream>
#include <list>
#include <iterator> 

using namespace std;

class Node
{
	private:
		int data;
		Node *next;
	public:
		void insert(int x);
		void print();
		void reverse();	
};

Node *Head;
void Node::insert(int x)
{
	Node *temp=new Node();
	temp->data=x;
	temp->next=Head;
	Head=temp;
}

void Node::reverse()
{ 
    Node* temp = Head;
    Node *prev = NULL;
    while (temp != NULL) 
	{    
        next = temp->next;  
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    Head = prev;
}

void Node::print()
{
	Node *temp = Head;
	cout<<"List is: ";
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n\n";
}

int main()
{
	Node list;
	int size,n;
	Head = NULL;
	cout<<"Enter the size: ";
	cin>>size;
	for(int i=1; i<size+1;i++)
	{
		cout<<"Enter integer:";
		cin>>n;
		list.insert(n);
		list.print();	
	}
	list.reverse();
	cout<<"After reversing, ";
	list.print();
	return 0;
}