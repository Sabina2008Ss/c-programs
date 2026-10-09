/*Series16◦
. Дано целое число K и набор ненулевых целых чисел; признак
его завершения — число 0. Вывести номер последнего числа в наборе,
большего K. Если таких чисел нет, то вывести 0.
*/
/*начала в 14.01*/
#include <stdio.h>
int main() {
	int k;
	scanf("%d", &k);
	int i = 1;
	int idx = 0;
	int num;
	scanf("%d", &num);
	while (num != 0) {
		if (num > k) {
			idx = i;
		}
		i = i + 1;
		scanf("%d", &num);
	}
	printf("%d", idx);
	return 0;
}
/*закончила в 14.25*/
