#include <iostream>

int main()
{
  int max = INT_MIN;
  int min = INT_MAX;

  std::cout << "Podaj 10 liczb calkowitych:\n";

  for (int i = 0; i < 10; i++)
  {
    int n;
    std::cin >> n;

    if (max < n)
    {
      max = n;
    }

    if (min > n)
    {
      min = n;
    }
  }

  std::cout << "najwieksza: " << max << "\nnajmniejsza: " << min << std::endl;

  return 0;
}