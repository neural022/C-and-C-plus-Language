// 08_inheritance and public.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"

class A
{
	public:
		int a;
		A()
		{
			a = 0;
			printf("A()\n");
		}
		~A()
		{
			printf("~A()\n");
		}
};

class B : public A	//	B�~��A���F��
{
	public:
		int b;
		B()
		{
			b = 0;
			printf("B()\n");
		}
		~B()
		{
			printf("~B()\n");
		}
};

int main()
{
	//	A x;
	B y;	//	�Y�ŧiA�ۤv�h�|�X�{�⦸ �@���O�ۤv�@���O�v�� 
			//	�ǥͷ|�����`

	return 0;
}

