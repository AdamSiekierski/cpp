#include <iostream>

int main()
{
  int n, p, result = 1;
  std::cout << "Podaj liczbe i potege:\n";
  std::cin >> n >> p;

  if (n == 0 && p == 0)
  {
    std::cout << "Taka potega nie istnieje";
    return 0;
  }

  while (p > 0)
  {
    result = result * n;

    p -= 1;
  }

  std::cout << "Wynik: " << result;

  return 0;
}