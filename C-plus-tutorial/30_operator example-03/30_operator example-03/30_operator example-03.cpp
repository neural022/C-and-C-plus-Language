// 30_operator example-03.cpp : �w�q�D���x���ε{�����i�J�I�C
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

		xxx add(xxx s)
		{
			xxx t;
			t.x = this->x + s.x;	//��X���� t �� x = �o�Ӫ��� x + �ǤJ���� s �� x
			t.y = this->y + s.y;	//��X���� t �� y = �o�Ӫ��� y + �ǤJ���� s �� y
			return t;
		}
};

int main()
{
	xxx a(1, 2), b(3, 4);
	xxx c, d;

	c = a.add(b);	// ���� c = a add b
	d = c.add(c);	// ���� d = c add c

	cout << d.x << endl;
	cout << d.y << endl;


	return 0;
}
