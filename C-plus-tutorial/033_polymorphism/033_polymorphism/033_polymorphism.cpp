// 033_polymorphism.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class xxx
{
	//  c++: polymorphism (�h��)
	//	���q�]�p�n�鬰�F���Ҧ��n�ϥ� xxx ���O �W�d�F�@�ӳW�h
	//	�Ҧ��������ݿ�`���W�h pp()
	//	�Y����������` rule �٬O��ظm���� (�]�� xxx �� pp()�S���������)
	public:
		void pp()
		{

		}
};
class A : public xxx	//	A �~�� xxx
{
	int a;
	public:
		A() { a = 0; }
		void pp()
		{
			cout << a << endl;
		}
};
class B : public xxx	// B �~�� xxx
{
	char b;
	public:
		B() { b = 'x'; }
		void pp()
		{
			cout << b << endl;
		}
};

int main()
{
	A aa;
	B bb;

	aa.pp();
	bb.pp();

	return 0;
}

