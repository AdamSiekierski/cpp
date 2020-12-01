#include <iostream>

using namespace std;

int main()
{
  int n;

  cout << "podaj n: ";

  cin >> n;

  if (n == 1)
  {
    cout << "poniedzialek" << endl;
  }
  else if (n == 2)
  {
    cout << "wtorek" << endl;
  }
  else if (n == 3)
  {
    cout << "sroda" << endl;
  }
  else if (n == 4)
  {
    cout << "czwartek" << endl;
  }
  else if (n == 5)
  {
    cout << "piatek" << endl;
  }
  else if (n == 6)
  {
    cout << "sobota" << endl;
  }
  else if (n == 7)
  {
    cout << "niedziela" << endl;
  }
  else
  {
    cout << "podano bledna wartosc" << endl;
  }

  return 0;
}