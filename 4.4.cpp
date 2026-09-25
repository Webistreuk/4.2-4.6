#include <iostream>

int main() {
	setlocale(LC_ALL, "ru-RU");
	int input_number = 1;
	std::cout << "Вводите числа (введите отрицательное для остановки): ";
	int i = 0;
	int count = 0;
	int sum = 0;
	while (++i > 0)
	{
		if (input_number > 0) {
			std::cin >> input_number, "\n";
			sum = sum + input_number;
			count += 1;
		}
		else if (input_number < 0) {
			break;
		}
	}
	std::cout << "\nКоличество\n";
	std::cout << count;
	std::cout << "\nСумма\n";
	if (sum < 0) {
		int positive_sum = sum * (-1);
		std::cout << positive_sum;
	}
	else {
		std::cout << sum;
	}
}