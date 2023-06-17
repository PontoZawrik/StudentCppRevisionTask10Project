
#include "tasks.h"

/*	Task X. The Largest Sequence of Number Digits [наибольшая последовательность цифр числа]
*
*	Дано целое число. Необходимо определить, какое наибольшее число подряд идущих
*	цифр заданного числа равны друг другу. Если не нашлось ни одной пары, тройки
*	и т.д. подряд идущих цифр, равных друг другу, то программа должна вывести число 1.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено число, которое является решение задачи.
*
*	[Sample function input 1]: 123456
*	[Sample function output 1]: 1
*
*	[Sample function input 2]: 1234567789
*	[Sample function output 2]: 2
*
*	[Sample function input 3]: 1122233335
*	[Sample function output 3]: 4
*
*	[Sample function input 4]: 0
*	[Sample function output 4]: 1
*
*	[Sample function input 5]: -15
*	[Sample function output 5]: 1
*/

int taskX(long long number) {
	number = number > 0 ? number : -number;

	int count = 1;
	int t_count = 1;

	if (number < 10) {
		return 1;
	}

	while (number > 0) {
		int t = number % 10;
		number /= 10;

		if (number % 10 == t) {
			t_count++;
		}
		else if (number % 10 != t && t_count != 1) {
			count = t_count > count ? t_count : count;
			t_count = 1;
		}
	}
	return count;
}