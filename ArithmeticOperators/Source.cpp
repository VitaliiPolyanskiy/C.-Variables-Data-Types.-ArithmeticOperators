﻿#include <iostream>

using namespace std;

int main()
{
	// Оператор сложения (бинарный).
	int nAddition = 7 + 2;

	cout << "7 + 2 = " << nAddition << endl;

	// Оператор вычитания (бинарный).
	int nSubtraction = 7 - 2;

	cout << "7 - 2 = " << nSubtraction << endl;

	// Оператор умножения (бинарный).
	int nMultiplication = 7 * 2;

	cout << "7 * 2 = " << nMultiplication << endl;

	// Оператор деления (бинарный).
	// Если оператор деления применяется к целым числам, дробная часть отбрасывается.
	// При делении на ноль произойдет ошибка на этапе выполнения.
	int nDivision = 7 / 2;

	cout << "7 / 2 = " << nDivision << endl << endl;

	// Оператор минус (унарный).
	// Унарный минус умножает свой операнд на -1. Иными словами, унарный минус меняет знак операнда 
	// на противоположный.
	int nMinus = -(7 + 2);

	cout << "-(7 + 2) = " << nMinus << endl;
	cout << "-(-1) = " << -(-1) << endl << endl;

	// Оператор остаток от деления (бинарный). Результатом применения этого оператора будет остаток 
	// целочисленного деления. Этот оператор можно использовать только с целыми числами. Если 
	// применить его к числам с плавающей точкой, то будет ошибка на этапе компиляции.
	int nModule1 = 7 % 2;
	int nModule2 = 2 % 7;

	cout << "7 % 2 = " << nModule1 << endl;
	cout << "2 % 7 = " << nModule2 << endl << endl;

	// Оператор инкремент (унарный). Операция применения оператора инкремент называется 
	// инкрементирование. Этот оператор добавляет 1 к своему операнду.
	int nIncrement = 3;

	// Префиксная форма.
	++nIncrement;

	// Постфиксная форма.
	//nIncrement++;

	// Операция инкрементирования аналогична следующей записи:
	// nIncrement = nIncrement + 1

	cout << "nIncrement = 3" << endl;
	cout << "++nIncrement = " << nIncrement << endl << endl;

	// Оператор декремент (унарный). Операция применения оператора декремент называется 
	// декрементирование. Этот оператор добавляет 1 к своему операнду.
	int nDecrement = 3;

	// Префиксная форма.
	--nDecrement;

	// Постфиксная форма.
	//nDecrement--;

	// Операция декрементирования аналогична следующей записи:
	// nDecrement = nDecrement - 1

	cout << "nDecrement = 3" << endl;
	cout << "--nDecrement = " << nDecrement << endl;

	// Для операций инкрементирования и декрементирования компилятор создает очень быстрый и 
	// эффективный код. Он выполняется намного быстрее, чем код, соответствующий оператору 
	// присваивания. По этой причини операторы инкремент и декремент следует применять всегда, когда
	// это возможно.

	int a = 7, b = 0;
	b = (a++) + 4;
	cout << a << '\t' << b << '\n'; // 8	11
	
	a = 7;
	b = 0;
	b = (++a) + 4;
	cout << a << '\t' << b << '\n'; // 8	12

	int n = 1;
	// n++ = 10; // ошибка
	++n = 10;

	// Сокращенные формы операторов:
	// +=
	// -=
	// *=
	// /=
	// %=


	a += b; // То же самое, что a = a + b.
	a -= b; // То же самое, что a = a - b.
	a *= b; // То же самое, что a = a * b.
	a /= b; // То же самое, что a = a / b.
	a %= b; // То же самое, что a = a % b.

	return 0;
}