// 01_class and object.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"

class xxx
{
	public:
		int a;
		void x()
		{
			a = 10;
			printf("%d\n", a);
		}
};

int main()
{
	//	the object y is a class of the xxx type
	//	the function x() is a method of the object y 
	xxx y;
	y.x();

	return 0;
}


