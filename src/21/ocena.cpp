#include <iostream>

void showMark(int mark)
{
  std::cout << "Ocena: " << mark;
}

int main()
{
  std::cout << "Podaj wynik testu: ";
  int result;
  std::cin >> result;

  switch (result)
  {
  case 99 ... 100:
    showMark(6);
    break;
  case 85 ... 98:
    showMark(5);
    break;
  case 70 ... 84:
    showMark(4);
    break;
  case 55 ... 69:
    showMark(3);
    break;
  case 40 ... 54:
    showMark(2);
    break;
  case 0 ... 39:
    showMark(1);
    break;
  }

  return 0;
}