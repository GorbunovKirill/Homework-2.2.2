# include <iostream>

struct bank
{
	int num;
	std::string name;
	double money;

};

void new_balance(bank* person) {
	
	std::cout << "������� ����� �����: ";
	std::cin >> person->num;
	std::cout << "������� ��� ���������: ";
	std::cin >> person->name;
	std::cout << "������� ������: ";
	std::cin >> person->money;
	std::cout << "������� ����� ������: ";
	std::cin >> person->money;
	std::cout << "��� ����: ";
	std::cout << person->num << ", " << person->name << ", " << person->money<< std::endl;


}

int main() {

	setlocale(LC_ALL, "Russian");

	bank person1{};

	new_balance(&person1);


	return 0;
}