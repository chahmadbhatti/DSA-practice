#include <iostream>
#include <iterator>
#include <list>
using namespace std;

void display(list<int> &lst)
{
	list<int> :: iterator it;
	for (it = lst.begin(); it != lst.end(); it++)
	{
		cout<<*it<<" ";
	}
}

int main()
{
	list<int> listt;
	listt.push_back(28);
	listt.push_back(2);
	listt.push_back(34);
	listt.push_back(66);
	listt.push_back(69);
	cout<<"List of intefgers is: ";
	display(listt);
	
	cout<<"\n\nList after deleting an integer: ";
	listt.pop_front();
	display(listt);
	
	cout<<"\n\nList after reversing: ";
	listt.reverse();
	display(listt);
	

 return 0;
}

