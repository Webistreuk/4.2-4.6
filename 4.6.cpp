#include <iostream>
#include <list>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int input_count_number;
	int number;
	std::list<int> list_number;
	int sum = 0;
	std::cout << "Введите количество чисел: ";
	std::cin >> input_count_number;
	for (int i = 0; i < input_count_number; i++) {
		std::cin >> number;
		list_number.push_back(number);
	};
	auto maxNumber = std::max_element(list_number.begin(), list_number.end());
	auto minNumber = std::min_element(list_number.begin(), list_number.end());
	sum = *maxNumber - *minNumber;
	std::cout << "\nМаксимальное: " << *maxNumber;
	std::cout << "\nМинимальное: " << *minNumber;
	if (sum < 0) {
		std::cout << "\nРазница между ними: " << 0;
	}
	else {
		std::cout << "\nРазница между ними: " << sum;
	}
}