// 012_linked list.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"

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
			//	demo later
		}

		xxx Data() { return data; }
		node *Next() { return next; }
		void setData(xxx data) { this->data = data; }
		void setNext(node *next) { this->next = next; }
};

int main()
{
	return 0;
}

