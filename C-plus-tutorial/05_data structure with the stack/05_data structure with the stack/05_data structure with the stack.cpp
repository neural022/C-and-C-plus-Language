// 05_data structure with the stack.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "stdlib.h"

class stack
{
	// ���F���ϥΪ̥u��Ū size, top �B�u��b���O�]�p���ϥ�(���i�b���H�~�ק�), �ҥH�n�]�w�� private �p���] 
	private:
		int size;
		int top;

	public:
		char *a;
		stack(int size)
		{
			this->size = size;
			top = 0;
			a = (char*)malloc(sizeof(char)*size); //	a = new char[size];
		}
		~stack()
		{
			free(a); //	delete []a;
		}

		bool push(char c)
		{
			if (top >= size) return false;	//	��ثe���|��>�̰����|�Ʀ^�� false
			a[top++] = c;					//	a[n+1] = '�r��'
			return true;					// �_�h�^�� true
		}
		char pop()
		{
			if (top == 0) return 0;	//	��ثe���|�ƬO�Ū��^��0
			return a[--top];		//	�_�h�^�� a[n-1] ����b��(�Ǵ��)
		}

		// ���F���ϥΪ̯�Ū size, top (�v���� private), �ҥH�]�p�ϥΪ̯�I�s���Ƶ{��
		int Size() { return size; } //	read only
		int Top() { return top; }	//	read only

};

int main()
{
	stack x(10);
	//	��l��
	printf("��l��\n");
	printf("%d\n", x.Size());
	printf("%d\n", x.Top());
	//	push
	printf("push\n");
	x.push('a');
	printf("%d\n", x.Top());

	x.push('b');
	printf("%d\n", x.Top());
	//	pop
	printf("pop\n");
	x.pop();
	printf("%d\n", x.Top());
	printf("%c\n", x.pop());

	return 0;
}

