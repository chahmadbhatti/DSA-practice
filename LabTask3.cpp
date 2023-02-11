//213047
//singly list of integers
//insertion at begining/specific position
//deletion at begining/specific position
//reversing the elements
//displaying the elements

#include <iostream>
#include<list>
using namespace std;

class Node
{
	private:
		int data;
		Node *next;
	public:
		void insert(int b, int n);=
		void deleti(int m);
		void reverse();
		void print();
};

Node *Head;
void Node::insert(int b, int n)
{
	Node *temp = new Node();
	temp->data = b;
	temp->next = NULL;
	
	if(n==1)
	{
		temp->next = Head;
		Head = temp;
	}
	else
	{
		Node *temp2 = new Node(); 
		temp2 = Head;
		for(int i=1; i<n-1; i++)
		{
			temp2 = temp2->next;
		}
		temp->next = temp2->next;
		temp2->next = temp;
		
	}
}

void Node::deleti(int m)
{
	Node *temp = new Node();
	temp = Head;
	
	if(m==1)
	{
		Head = temp->next;
		delete temp;
	}
	else
	{
		Node *temp2 = new Node();
		temp2 = NULL;
	
		for(int i=1 ; i<m ; i++)
		{
			temp2 = temp;
			temp = temp->next;
		}
			
		temp2->next = temp->next;
		delete temp;
	}
}
void Node::reverse()
{
	Node* temp = Head;
	Node* prev = NULL;
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
	Node *temp= Head;
	cout<<"List is: ";
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n\n";
	
}

int main()
{
	Node listt;
	Head= NULL;
	int num;
	
	listt.insert(43,1);
	listt.insert(33,2);
	listt.insert(8,3);
	listt.insert(56,4);
	listt.insert(87,5);
	
	listt.print();
	
	cout<<"\nPerforming deletion and reverse:"<<endl;
	
	listt.deleti(3);
	cout<<"\nAfter deleting value at position '3', ";
	listt.print();

	listt.reverse();
	cout<<"After reversing, ";
	listt.print();
	
 return 0;
}

