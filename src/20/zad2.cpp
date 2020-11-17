#include <iostream>
#include <cstdlib>
#include <ctime>

int random(int min, int max)
{
  return (rand() % (max - min)) + min;
}

int main()
{
  srand(time(NULL));

  int num = random(-112, 275);

  std::cout << "Wylosowana liczba: " << num << "\n";

  if ((abs(num) % 2) == 0)
  {
    std::cout << "Liczba jest parzysta";
  }
  else
  {
    std::cout << "Liczba jest nieparzysta";
  }

  return 0;
}