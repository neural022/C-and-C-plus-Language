// 02_ member and constructor-destructor.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"

class xxx
{
	public:
		//	The class is divided into two sections : data member & method member.
		//	

		//	data member:
		//	There is not any data member in this example.

		// method member:
		//	constructor (�غc�l) aim to call automatically in an object created,
		//	and its main purpose is the initialization of the data member
		xxx()
		{
			printf("xxx\n");
		}
		//	destructor (�Ѻc�l) aims to call automatically in an object dies,
		//	and its main purpose is to return system memory.
		~xxx()
		{
			printf("~xxx\n");
		}
};

int main()
{

	xxx b;
	printf("hello\n");

	return 0;
}

