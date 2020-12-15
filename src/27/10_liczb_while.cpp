#include <iostream>

using namespace std;

int main()
{
  int a, s1 = 0, s2 = 0;
  cout << "Podaj dziesiec liczb calkowitych " << endl;

  int i = 0;
  while (i < 10)
  {
    cin >> a;
    if (a < 0)
      s1++;
    else
      s2++;

    i++;
  }

  cout << "Liczba podanych liczb ujemnych wynosi: " << s1 << endl;
  cout << "Liczba podanych liczb nieujemnych wynosi: " << s2 << endl;

  return 0;
}
