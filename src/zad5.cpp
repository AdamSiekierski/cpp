#include <iostream>

int main()
{
  int n;
  int sum = 0;

  std::cout << "Podaj n > 0 będące liczbą naturalną: ";
  std::cin >> n;

  for (int i = 1; i <= n; i++)
  {
    sum += i;
  }

  std::cout << "Suma: " << sum;

  return 0;
}