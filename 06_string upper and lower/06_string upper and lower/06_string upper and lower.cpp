// 06_string upper and lower.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "string.h"

int change(char s[])
{
	int n = 0;
	while (s[n] != 0)
	{
		if (s[n] >= 'A' && s[n] <= 'Z') s[n] = s[n] + 32;
		else if (s[n] >= 'a' && s[n] <= 'z') s[n] = s[n] - 32;
		n++;
	}
	return s[n];

}

int main()
{

	char a[30];
	scanf("%s", a);
	change(a);
	printf("%s", a);

	return 0;
}

