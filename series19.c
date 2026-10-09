/*Series19◦
. Дано целое число N (> 1) и набор из N целых чисел. Вывести те
элементы в наборе, которые меньше своего левого соседа, и количество K
таких элементов.
*/
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int last_num, num;
	scanf("%d", &last_num);
	int k = 0;
	int i;
	for (i = 2; i <= n; i++) {
		scanf("%d", &num);
		if (num < last_num) {
			printf("%d ", num);
			k = k + 1;
		}
		last_num = num;
	}	
	printf("\n%d", k);
	return 0;
}
