// 07_include and header files.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "stack.h" //	�[�J���Y�ɤ�K�ϥ�

int main()
{
	stack <int> x(10);
	stack <int> y(10);
	stack <char> z(10);

	printf("%d\n", x.Size());
	printf("%d\n", x.Top());

	x.push(100);
	printf("%d\n", x.Top());
	x.push(1000);
	printf("%d\n", x.Top());
	x.pop();
	printf("%d\n", x.Top());
	printf("%d\n", x.pop());

	printf("%d\n", stack <int>::count);
	printf("%d\n", z.count); //	printf("%d\n", stack <char>::count);

	return 0;
}
