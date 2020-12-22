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
      sum += n;
      n--;
    }

    std::cout << "Wynik: " << (2.0 * (double)n) / sum;
  }
  else
  {
    std::cout << "Błędne dane";
  }

  return 0;
}