#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string name;
    std::cout << "������� ���: ";
    std::cin >> name;
    std::cout << "������������, " << name << "!" << std::endl;
}
