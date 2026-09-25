#include <iostream>
#include <list>

int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Задание 1: ";
	for(int i = 0; i < 10; i++) {
		std::cout << i << " ";
	}
	
	std::cout << "\nЗадание 2: ";
	for (int i = -10; i < 10; i++) {
		std::cout << i << " ";
	}

	std::cout << "\nЗадание 3: ";
	std::list<int> list1 = {};
	for (int i = -25; i < 16; i++) {
		list1.push_back(i);
	}
	list1.reverse();
	for (int x : list1) {
		std::cout << x << " ";
	}

	std::cout << "\nЗадание 4: ";
	for (int i = 0; i < 100; i+= 15) {
		std::cout << i << " ";
	}

	std::cout << "\nЗадание 5: \nВыберите максимальное число  ";
	int select_user_for_number;
	std::cin >> select_user_for_number;
	for (int i = 0; i < select_user_for_number; i++) {
		std::cout << i << " ";
	}

	std::cout << "\nЗадание 6: \nВыберите минимальное число  ";
	int select_user_for_number2;
	std::cin >> select_user_for_number2;
	for (int i = select_user_for_number2; i < 100; i++) {
		std::cout << i << " ";
	}

	std::cout << "\nЗадание 7: \nВыберите минимальное число  ";
	int select_user_for_number_min;
	std::cin >> select_user_for_number_min;
	std::cout << "\nВыберите максимальное число  ";
	int select_user_for_number_max;
	std::cin >> select_user_for_number_max;
	for (int i = select_user_for_number_min; i < select_user_for_number_max; i++) {
		std::cout << i << " ";
	}

}