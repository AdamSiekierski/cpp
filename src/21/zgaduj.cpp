#include <iostream>
#include <time.h>
#include <cstdlib>

int main()
{

  srand(time(NULL));

  int randomNum = std::rand() % 9;

  std::cout << "Pomysl i wpisz dowolna liczbe od 0 do 9: ";
  int num;
  std::cin >> num;

  std::cout << "Komputer pomyslal " << randomNum << "\n";
  (randomNum == num) ? (std::cout << "Brawo! Zgadles jaka liczbe pomyslal komputer") : (std::cout << "Niestety nie zgadles liczby, ktora pomslal komputer");

  return 0;
}