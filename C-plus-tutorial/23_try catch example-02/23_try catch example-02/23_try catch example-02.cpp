// 23_try catch example-02.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	try
	{
		cout << "A" << endl;
		throw 3.2;	//	�S���� double ��ƫ��O
	}
	catch (float)
	{
		cout << "BB" << endl;
	}
	catch (double)
	{
		cout << "BBB" << endl;
	}
	cout << "C" << endl;

	return 0;
}


