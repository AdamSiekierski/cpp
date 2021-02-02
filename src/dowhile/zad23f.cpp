#include <iostream>

long factorial(int n)
{
  long f = 1;
  int i = 1;

  do
  {
    f = f * i;
    i++;
  } while (i <= n);

  return f;
}

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

  int x = 1;
  float y = -0.2;

  long numerator = 0;
  float denominator = 0;

  do
  {
    numerator += isEven(x) ? -factorial(x) : factorial(x);
    x++;

    denominator += y;
    y += 0.3;
  } while (x <= n);

  float result = (float)numerator / (float)denominator;

  std::cout << "Wynik: " << result << std::endl;

  return 0;
}