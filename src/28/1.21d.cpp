#include <iostream>

int main()
{
  int sum = 0, n, i = 1, j = 1;
  std::cout << "Podaj n: ";
  std::cin >> n;

  if (n != 0)
  {

    while (j <= n)
    {
      sum += (2 * i * 3) / j;
      i *= 2;
      j++;
    }

    std::cout << "Suma: " << sum;
  }
  else
  {
    std::cout << "Bledne dane";
  }

  return 0;
}