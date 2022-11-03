/*Задание 8. Ёлочка* (дополнительное задание)
Что нужно сделать
Напишите программу, которая выводит на экран равнобедренный треугольник, заполненный символами решётки «#». Пусть высота треугольника вводится пользователем. Обеспечьте контроль ввода.

Пример выполнения


Рекомендации по выполнению
Решение можно организовать с помощью двух циклов, один для вывода пробельных символов, второй для вывода символа решётки.
Что оценивается
Между строкой ввода и верхушкой ёлочки не должно быть пустых строк.
Высота ёлочки соответствует значению, введённому с клавиатуры.
Ёлочка рисуется с помощью циклов.*/

#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int maxWidth = 50;

	std::cout << "Введите общую ширину колонтитула: ";
	int widthFooter;
	std::cin >> widthFooter;
	while (widthFooter < 0 || widthFooter > maxWidth) {
		std::cout << "Ширина колонтитула должна быть в пределах от 0 до " << maxWidth << ". Введите снова: ";
		std::cin >> widthFooter;
	}

	std::cout << "Введите количество восклицательных знаков: ";
	int nuberExclamation;
	std::cin >> nuberExclamation;
	while (nuberExclamation < 0 || nuberExclamation > maxWidth) {
		std::cout << "Количество восклицательных знаков должно быть в пределах от 0 до " << maxWidth << ". Введите снова: ";
		std::cin >> nuberExclamation;
	}

	int beginPositionExclamation = (widthFooter / 2) - (nuberExclamation / 2);

	//Выводим левую половину колотитула
	for (int i = 0; i < beginPositionExclamation; i++) std::cout << "~";

	//Выводим восклицательные знаки
	for (int i = 0; i < nuberExclamation; i++) std::cout << "!";

	//Выводим правую половину колотитула
	for (int i = beginPositionExclamation + nuberExclamation + 1; i <= widthFooter; i++) std::cout << "~";

}
