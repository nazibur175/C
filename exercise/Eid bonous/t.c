#include <stdio.h>
int main()
{
	int i, j, even = 8, odd = 9, bi = 2;

	for (i = 1; i <= 5; i++)
	{
		if (bi == 1)
			bi = 2;
		else if (bi == 2)
			bi = 1;

		for (j = 1; j <= i; j++)
		{
			if (bi == 1)
			{
				printf(" %2d", odd);
				odd = odd - 2;
			}

			if (bi == 2)
			{
				printf(" %2d", even);
				even = even - 2;
			}
		}
		printf("\n");
	}

	return 0;
}
