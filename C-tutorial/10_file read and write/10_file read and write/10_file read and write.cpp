// 10_file read and write.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include "math.h"

int main()
{
	FILE*f;

	srand(time(NULL)); rand();
	f = fopen("a.txt", "w");
	fprintf(f, "�Ǹ� ���Z\n");
	for (int i = 0; i < 50; i++)
	{
		int u = rand() % 41 + 60;
		fprintf(f, "%2d    %3d\n", i + 1, u);
	}
	fclose(f);

	return 0;
}

