#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int input_num = 0;
	std::cout << "Введите целое число: ";
	std::cin >> input_num;
	for(int i = 1; i < input_num + 1; i++) 
	{
		std::cout << i << ". " << "Hello underworld!\n";
	};
	return 0;
}