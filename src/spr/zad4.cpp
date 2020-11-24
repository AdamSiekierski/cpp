#include <iostream>

int main()
{
  std::cout << "Podaj wspolrzedne X i Y:\n";
  float X, Y;
  std::cin >> X >> Y;

  std::string cwiartka;

  if (X == 0 || Y == 0)
  {
    cwiartka = X == Y ? "0" : X == 0 ? "Punkt lezy na osi OX" : "Punkt lezy na osi OY";
  }
  else if (X > 0)
  {
    cwiartka = Y > 0 ? "1" : "4";
  }
  else if (X < 0)
  {
    cwiartka = Y > 0 ? "2" : "3";
  }

  std::cout << "Cwiartka: " << cwiartka;

  return 0;
}