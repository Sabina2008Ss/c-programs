/*Series22. Дано целое число N (> 1) и набор из N вещественных чисел. Если
данный набор образует убывающую последовательность, то вывести 0;
в противном случае вывести номер первого числа, нарушающего закономерность.
*/
#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	double num, last_num;
	scanf("%lf", &num);
	last_num = num;
	int idx = 0;  
	int i;
	for (i = 2; i <= n; i++) {
		scanf("%lf", &num);
		if (idx == 0 && num >= last_num) {
			idx = i;   
		}
		last_num = num;
	}	
	printf("%d", idx);
	return 0;
}
