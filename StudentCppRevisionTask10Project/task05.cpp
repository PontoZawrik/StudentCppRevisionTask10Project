﻿#include "tasks.h"

/*	Task 05. The Number of Fibonacci Number [порядковый номер числа Фибоначчи]
*
*	Последовательность Фибоначчи определяется так:
*	F(1) = 0, F(2) = 1, F(3) = 1, F(4) = 2, F(5) = 3, …, F(n) = F(n−1) + F(n−2).
*	Дано натуральное число A. Необходимо определить, каким по счету числом Фибоначчи оно является,
*	т.е. выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи или 
*	данные заданы некорректно, то должно быть возвращено число -1.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должен быть возвращён порядковый номер N-го числа числового ряда Фибоначчи или число -1.
*
*	[ input 1]: 0
*	[output 1]: 1
*
*	[ input 2]: 1
*	[output 2]: 2 или 3 (оба варианта подходят)
*
*	[ input 3]: 2
*	[output 3]: 4
*
*	[ input 4]: 55
*	[output 4]: 11
*
*	[ input 5]: 7'778'742'049
*	[output 5]: 50
*
*	[ input 6]: 1'779'979'416'004'714'189
*	[output 6]: 90
*
*	[ input 7]: 0
*	[output 7]: -1
*
*	[ input 8]: 4
*	[output 8]: -1
*
*	[ input 9]: 7
*	[output 9]: -1
*
*	[ input 10]: -144
*	[output 10]: -1
*/

int task05(long long number) {
	if (number < 0)
		return -1;
		
	long long num1 = 0;
	long long num2 = 1;
	long long num_next = 1;
	int count = 2;

	if (number == 0) 
		return 1;

	if (number == 1) 
		return 2;

	while (num_next < number) {
		num_next = num1 + num2;
		num1 = num2;
		num2 = num_next;

		count++;
		if (num_next == number)
			return count;
	}

	return -1;
}