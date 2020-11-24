#include <iostream>
#include <time.h>
#include <cstdlib>

int main()
{
  srand(time(NULL));

  int num = (std::rand() % (925 + 547 + 1)) - 547;

  std::cout << "Wylosowana liczba: " << num << "\n";

  (num % 11) == 0 ? (std::cout << "Wylosowana liczba jest podzielna przez 11") : (std::cout << "Wylosowana liczba nie jest podzielna przez 11");

  return 0;
}