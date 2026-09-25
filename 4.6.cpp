#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int input_count_number;
	int number;
	int sum = 0;
	std::cout << "Введите количество чисел: ";
	std::cin >> input_count_number;
	for (int i = 0; i < input_count_number; i++) {
		std::cin >> number;
		list_number[i] = number;
	};
	std::cout << maxNumber;
	std::cout << minNumber;
	std::cout << sum / 2;
}