// 06_template.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"

#include "stdlib.h"

//	���F���]�p��stack��A���ƨϥ� ���O�A�ŭ��ƽƻs(stack2..stack3...)
template <class xxx>

class stack
{
	//	���F���ϥΪ̥u��Ū size, top �B�b���O�]�p���ϥ�(���i�b���H�~�ק�), �ҥH�n�]�w�� private �p���] 
	private:
		int size;
		int top;

	public:
		xxx *a;
		stack(int size)
		{
			this->size = size;
			top = 0;
			a = (xxx*)malloc(sizeof(xxx)*size); //	a = new char[size];
		}
		~stack()
		{
			free(a); //	delete []a;
		}

		bool push(xxx c)
		{
			if (top >= size) return false;	//	��ثe���|��>�̰����|�Ʀ^�� false
			a[top++] = c;	//	�_�ha[n+1] = '�r��'
			return true;	// �^�� true
		}
		xxx pop()
		{
			if (top == 0) return 0;	//	��ثe���|�ƬO�Ū��^��0
			return a[--top]; //	�_�h�^�� a[n-1] ����b��(�Ǵ��)
		}

		//	���F���ϥΪ̥u��Ū size, top (�v���� private), �ҥH�]�p�ϥΪ̯�I�s���Ƶ{��
		int Size() { return size; } //	read only
		int Top() { return top; } //	read only

};

int main()
{
	//	template��
	stack <char> x(10);
	stack <int> y(10);
	//	��l��
	printf("%d\n", x.Size());
	printf("%d\n", x.Top());
	//	push & pop
	x.push('a');
	printf("%d\n", x.Top());
	x.push('b');
	printf("%d\n", x.Top());
	x.pop();
	printf("%d\n", x.Top());
	printf("%c\n", x.pop());

	return 0;
}

