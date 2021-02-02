#include <iostream>

int main()
{
  std::cout << "podaj 20 liczb: \n";
  int even = 0;
  int uneven = 0;

  for (int i = 0; i < 20; i++)
  {
    int n;
    std::cin >> n;

    if ((n % 2) == 0)
    {
      even++;
    }
    else
    {
      uneven++;
    }
  }

  std::cout << "ilosc liczb parzystych: " << even << "\nilosc liczb nieparzystych: " << uneven << std::endl;

  return 0;
}