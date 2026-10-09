/*Series20. Дано целое число N (> 1) и набор из N целых чисел. Вывести те
элементы в наборе, которые меньше своего правого соседа, и количество K
таких элементов.*/
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int num, next_num;
	scanf("%d", &num);
	int k = 0;
	int i;
	for (i = 2; i <= n; i++) {
		scanf("%d", &next_num);
		if (num < next_num) {
			printf("%d ", num);
			k = k + 1;
		}
		num = next_num;
	}
	printf("\n%d", k);
	return 0;
}
