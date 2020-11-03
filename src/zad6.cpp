#include <iostream>

int main()
{
  int n, X, Y, Z, J;

  std::cout << "podaj n < 0: ";
  std::cin >> n;

  X = n / 1000;
  n = n % 1000;

  Y = n / 100;
  n = n % 100;

  Z = n / 10;
  J = n % 10;

  std::cout << X << " tysięcy " << Y << " setek " << Z << " dziesiątek " << J << " jedności\n";

  return 0;
}
