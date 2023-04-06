# include <iostream>

struct bank
{
	int num;
	std::string name;
	double money;

};

void new_balance(bank* person) {
	
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> person->num;
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> person->name;
	std::cout << "¬ведите баланс: ";
	std::cin >> person->money;
	std::cout << "¬ведите новый баланс: ";
	std::cin >> person->money;
	std::cout << "¬аш счЄт: ";
	std::cout << person->num << ", " << person->name << ", " << person->money<< std::endl;


}

int main() {

	setlocale(LC_ALL, "Russian");

	bank person1{};

	new_balance(&person1);


	return 0;
}