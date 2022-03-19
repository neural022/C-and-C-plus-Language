// 017_linked list example-05.cpp : �w�q�D���x���ε{�����i�J�I�C
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
			if (next) delete next;//	demo later
		}

		xxx Data() { return data; }
		node *Next() { return next; }
		void setData(xxx data) { this->data = data; }
		void setNext(node *next) { this->next = next; }
};

int main()
{
	node <int> *p, *head;

	head = new node <int>(0);
	p = head;
	for (int i = 0; i < 100; i++)
	{
		p->setNext(new node <int>(i + 1));
		cout << p->Data() << endl;
		p = p->Next();
	}

	delete head;

	return 0;
}
