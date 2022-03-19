// 010_inheritance and friendship.cpp : �w�q�D���x���ε{�����i�J�I�C
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
		friend class A; //	A �i�H���ݨ� C �� c �p�T
};

class A
{
	protected:	//	�u����l�~���
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
		void AA(C w)	//	A���O�U���غc�l AA �ǤJC���O�� w �o�Ӫ���
		{
			w.c = 10;	//	�]�� C �O A ���B�ͩҥH�i�H��g
		}
};

class B : public A
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
	//	z.c;�L�k�s�� �]�� C �� c �O private
	// y.aa;�L�k�s�� �]���u���L��lB�~���

	return 0;
}

