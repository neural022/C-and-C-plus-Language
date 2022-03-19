// 011_multiple inheritance.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
class A;

class C
{
	private:
		int c;
	public:
		C()
		{
			c = 0;
		}
		~C()
		{

		}
		friend class A; //	A �i�H���ݨ� C �� c
};

class A	//	father
{
	protected:
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

class D //	mother
{
	public:
		int d;
		D()
		{
			d = 0;
			printf("D()\n");
		}
		~D()
		{
			printf("~D()\n");
		}
};

class B : public A, public D	//	�h���~��
{
	public:
		int b;
		B()
		{
			aa = 0;
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
	C z;
	//y. �i�H�ݨ�father class A and mother class C



	return 0;
}

