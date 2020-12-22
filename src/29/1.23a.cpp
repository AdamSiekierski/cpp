#include <iostream>

int main()
{
  int n, sum = 0, x = -2;
  std::cout << "Podaj n >> ";
  std::cin >> n;

  if (n != 0)
  {
    while (n)
    {
      sum += x;

      x = x % 2 ? -(x + 3) : -(x - 3);

      n--;
    }

    std::cout << "Suma: " << sum;
  }
  else
  {
    std::cout << "Błędne dane";
  }

  return 0;
}