#include <iostream>

int main()
{
  int s, result = 1;

  std::cout << "Podaj silnię: ";
  std::cin >> s;

  if (s == 0)
  {
    std::cout << "0! = 1";

    return 0;
  }

  int i = 1;

  while (i <= s)
  {
    result *= i;

    i++;
  }

  std::cout << s << "! = " << result;

  return 0;
}