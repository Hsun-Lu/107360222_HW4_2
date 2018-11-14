#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i, j, t, b;
	b = 4;
	int a[5] = { 26,5,81,7,63 };
	for (i = 0; i < b; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		b -= 1;
		printf("²Ä%d¦¸¡G", i);
		for (j = 0; j < 5; j++)
			printf("%4d", a[j]);
		printf("\n");
		if ((a[0] == 5) && (a[1] == 7) && (a[2] == 26) && (a[3] == 63) && (a[4] == 81))
			break;
	}

	system("pause");
}