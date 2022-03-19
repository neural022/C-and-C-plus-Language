#pragma once

template <class xxx>
class stack
{
	private:
		int size; //	�����ݩ�
		int top;

	public:
		static int count; //	���O�������ܼ�
		xxx *a;
		stack(int size)
		{
			count++;
			this->size = size;
			top = 0;
			a = new xxx[size]; //	(char *) malloc(sizeof(char)*size);
		}

		~stack()
		{
			count--;
			delete[] a; //	free(a);
		}

		bool push(xxx c)
		{
			if (top >= size) return false;
			a[top++] = c;	//	�����ȫ�B��
			return true;
		}

		xxx pop()
		{
			if (top == 0) return 0;
			return a[--top];	//	���B������
		}

		int Size() { return size; } //	read only
		int Top() { return top; } //	read only
};

template <class xxx>
int stack <xxx>::count = 0;