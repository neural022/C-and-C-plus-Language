// 09_inheritance protected and private.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
class A
{
	protected:	//	protected �u����l�~��ϥ�
		int aa;
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

class B : public A	//	�Y�� private ��L��l���ɭԴN�����}�ӳ��F �p���]
{
	public:
		int b;
		B()
		{
			//	aa = 0;		//	�Y aa �� A �� private �|���Ѧ]���OA���p���]
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
	B y;
	y.a;

	return 0;
}

