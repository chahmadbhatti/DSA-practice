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
        void insert(int a);
        void print();
};

Node *Head;
void Node::insert(int x)
{
    Node *temp = new Node();
    temp->data = x;
    temp->next = Head;
    Head = temp;
}

void Node::print()
{
    Node *temp = Head;
    cout<<"List is: ";
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n\n";
}


int main()
{
    Node list;
    Head = NULL;
    int size, number;
    cout<<"Enter the size of list: ";
    cin>>size;
    
    for(int i=1; i<=size; i++)
    {
        cout<<"\nEnter integer: ";
        cin>>number;
        list.insert(number);
        list.print();
    }
    return 0;
}