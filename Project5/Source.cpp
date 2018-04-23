#include <iostream>
#include "Shape.h"

int main() {
	std::cout << "Zadanie?" << std::endl;
	int nz;
	std::cin >> nz;
	if (nz == 1) {
		int a = 5;
		int b = 10;
		std::cout << a + b << std::endl;

		circle c1(10), c2(5);
		std::cout << c1 + c2/*c1.operator+(c2)*/ << std::endl;

		std::cout << c1 - c2 << std::endl;
		std::cout << c1 * c2 << std::endl;
		std::cout << c1 / c2 << std::endl;

		c2 = c1 + 7.0;
		std::cout << c2.getRadius() << std::endl;
		//std::cout << (c1 + 7.0).getRadius() << std::endl;

		//std::cout << (c1 == c2) << std::endl;

		std::cout << (c1 > c2) << std::endl;
	}
	else if (nz == 2) {
		setlocale(LC_ALL, "rus");
		int r;
		int zn;
		date d,d2;
		d.Get();
		d.print();
		
		std::cout << "\n" << "Введите значение: 0 - Проверка на равенство двух дат(операция = =); 1 - Изменение даты на указанное число дней (операции +=, -=); 2 - Сложение и вычитание двух дат (операции +, -)" << std::endl;
		std::cin >> r;
		if (r == 0)
		{
			d2.Get();
			std::cout << ( d== d2) << std::endl;
		}
		else if (r == 1)
		{
			std::cout << "\nНа сколько дней нужно изменить: ";
			std::cin >> zn;
		}
		else
		{
			d2.Get();
			std::cout << d.getDay()+d2.getDay() << std::endl;
			std::cout << d.getMonth() + d2.getMonth() << std::endl;
			std::cout << d.getYear() + d2.getYear() << std::endl;

		}
		

	}

	system("pause");
	return 0;
}