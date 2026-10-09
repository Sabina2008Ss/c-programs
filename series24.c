/*Series24. Дано целое число N и набор из N целых чисел, содержащий по
крайней мере два нуля. Вывести сумму чисел из данного набора,
расположенных между последними двумя нулями (если последние нули идут
подряд, то вывести 0).*/
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int sum_between = 0;
	int result = 0;
	int num;
	int i;
	for (i = 1; i <= n; i++) {
		scanf("%d", &num);
		if (num == 0) {
			result = sum_between;
			sum_between = 0;
		} else {
			sum_between = sum_between + num;
		}
	}
	printf("%d", result);
	return 0;
}
