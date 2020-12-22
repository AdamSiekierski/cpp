#include <iostream>

int main()
{
  unsigned int n;
  double sum = 0;

  std::cout << "Podaj n: ";
  std::cin >> n;

  if (n != 0)
  {
    while (n)
    {
      sum += (1 / (2 * (double)n));
      n--;
    }

    std::cout << "Wynik: " << sum;
  }
  else
  {
    std::cout << "Błędne dane";
  }

  return 0;
}