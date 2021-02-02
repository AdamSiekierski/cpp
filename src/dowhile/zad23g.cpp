#include <iostream>

// template'y (tzw typy generyczne) pozwalają na przekazanie do danej funkcji wartości o dowolnym typie, bez konieczności jej rzutowania
template <typename N>
bool isEven(N num)
{
  return num % 2 == 0;
}

int main()
{
  std::cout << "Wprowadz liczbe iteracji: ";
  int n;
  std::cin >> n;

  int i = 0;

  int x = -2;
  int y = 3;

  int numerator = 0;
  int denominator = 1;

  do
  {
    numerator += isEven(i) ? -x : x;
    x += 5;

    denominator *= isEven(i) ? y : -y;
    y += 4;

    i++;
  } while (i < n);

  float result = (float)numerator / (float)denominator;

  std::cout << "Wynik: " << result << std::endl;

  return 0;
}