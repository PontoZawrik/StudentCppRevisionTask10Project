#include "tasks.h"

/*	Task 02. The Count of Min Number Digits [количество наименьших цифр числа]
*
*	Дано целое число. Необходимо определить, какое количество цифр 
*	заданного числа равны его наименьшей цифре с использованием эффективного алгоритма.
* 
*	Примечание
*	Постарайтесь при решении задания использовать только одну циклическую конструкцию.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено число, которое является решение задачи.
*
*	[ input 1]: 1234
*	[output 1]: 1
*
*	[ input 2]: 4112
*	[output 2]: 2
*
*	[ input 3]: 100
*	[output 3]: 2
*
*	[ input 4]: -2222
*	[output 4]: 4
*/

int task02(long long number) {
	if (number == 0) {
		return 1;
	}

	number = number > 0 ? number : -number;
	int min = number % 10;
	int result = 0;

	while (number > 0) {
		if (min > number % 10) {
			min = number % 10;
			result = 0;
		}
		result += min == number % 10 ? 1 : 0;
		number /= 10;
	}
	return result;
}