// 028_operator example-01.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class xxx
{
	private:
		int x;
		int y;

	public:
		xxx()
		{
			x = y = 0;
		}

		xxx(int x, int y)
		{
			this->x = x;
			this->y = y;
		}

		~xxx()
		{

		}

		xxx *add()	//	�^�� xxx �����ƫ��A, �]�� this �O���� �ҥH add �n�[�W * ��
		{
			return this;
		}
};

int main()
{
	xxx a(1, 2), b(3, 4);
	xxx c;


	return 0;
}

