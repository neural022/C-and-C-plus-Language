// 32_operator.cpp : �w�q�D���x���ε{�����i�J�I�C
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

	xxx operator + (xxx s)	// �[�W operator �ϱo +-*/ �������q���{�o
	{
		xxx t;
		t.x = this->x + s.x;
		t.y = this->y + s.y;
		return t;
	}
};

int main()
{
	xxx a(1, 2), b(3, 4);
	xxx c;

	//	c = a + (b); �ǤJ����b
	c = a + b;
	cout << c.x << endl;
	cout << c.y << endl;


	return 0;
}
