// 022_try catch example-01.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	try
	{
		cout << "A" << endl;
		throw 123;
		//throw 'X';
	}
	catch (int)
	{
		cout << "B" << endl;
	}
	catch (char)
	{
		cout << "BB" << endl;
	}
	cout << "C" << endl;

	return 0;
}

