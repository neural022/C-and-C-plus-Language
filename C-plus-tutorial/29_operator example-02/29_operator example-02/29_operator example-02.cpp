// 29_operator example-02.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class xxx
{
	public:
		int x;
		int y;

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

		xxx add(xxx s)	//	�ǤJ�ѼƬ��@�Ӫ��� xxx s
		{
			xxx t;
			return t;	// �^�Ǭ��@�Ӫ��� xxx t
		}
};

int main()
{
	xxx a(1, 2), b(3, 4);
	xxx c;

	c = a.add(b);
	cout << c.x << endl;
	cout << c.y << endl;


	return 0;
}

