#include <iostream>

int main()
{
  int i = 2;

  while (i <= 16)
  {
    if (i % 3 == 0)
    {
      std::cout << i << " ";
    }
    i++;
  }

  return 0;
}