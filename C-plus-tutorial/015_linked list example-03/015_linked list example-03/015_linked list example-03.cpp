// 015_linked list example-03.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;

template <class xxx>
class node
{
	private:
		xxx data;
		node *next;

	public:
		node()
		{
			data = NULL;
			next = NULL;
		}
		node(xxx data)
		{
			this->data = data;
			next = NULL;
		}
		~node()
		{
			//demo later
		}

		xxx Data() { return data; }
		node *Next() { return next; }
		void setData(xxx data) { this->data = data; }
		void setNext(node *next) { this->next = next; }
};

int main()
{
	node <int> *p, *head;
	head = new node <int>(1);
	p = new node <int>(2);
	head->setNext(p); //	�i�g�� head->setNext(new node <int> (2));
	head->Next()->setNext(new node <int>(3));

	cout << head->Data() << endl;
	cout << head->Next()->Data() << endl;
	cout << head->Next()->Next()->Data() << endl;

	return 0;
}


