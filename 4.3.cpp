#include <iostrem>

int main() {
	int num, num1, num2, num3;
	std::cout << "Заполните значения для четырех целых чисел\n";
	std::cin >> num << "\n" << num1 << "\n" << num2 << "\n" << num3 << "\n";
	if (num != int || num1 != int || num2 != int || num3 != int) {
		std::cout << "Одно из чисел является не целочисленым!";
		std::cout << "Завершение программы...";
	}
	else {
		int sum;
		sum =+ num;
		sum = +num1;
		sum = +num2;
		sum = +num3;
		std::cout << "\t" << "Сумма четырех чисел = " << sum;
	}
}