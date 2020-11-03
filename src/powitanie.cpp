#include <iostream>

int main()
{
  std::string name;
  int age;

  std::cout << "Jak masz na imie?\n";
  std::cin >> name;

  std::cout << "Ile masz lat?\n";
  std::cin >> age;

  std::cout << "Witaj, " << name << std::endl;
  std::cout << "Nie wiedzialem ze masz " << age << " lat";

  return 0;
}