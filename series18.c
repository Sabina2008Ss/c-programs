/*Series18. Дано целое число N и набор из N целых чисел, упорядоченный
по возрастанию. Данный набор может содержать одинаковые элементы.
Вывести в том же порядке все различные элементы данного набора.*/
#include <stdio.h>
/*начала в 14.29*/
int main() {
	int n;
	scanf("%d", &n);
	int last_num, num;
	scanf("%d", &last_num);
	printf("%d ", last_num);
	int i;
	for (i = 2; i <= n; i++) {
		scanf("%d", &num);
		if (num != last_num) {
			printf("%d ", num);
			last_num = num;
		}
	}
	return 0;
}
/*закончила в 15.01*/
