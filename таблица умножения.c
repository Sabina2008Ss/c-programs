#include <stdio.h>

int main()
{
	int M, N;
	
	
	scanf("%d %d", &M, &N);
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			printf("%d\t ", i * j);
		}
		printf("\n");
	}

	
	return 0;
}
