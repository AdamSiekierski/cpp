#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
  bool finish = false;

  time_t now;

  srand(time(NULL));
  int num;

  do
  {
    std::cout << "\n1. Dane ucznia\n2. Obecna data i godzina\n3. Losowa liczba od 1 do 100\n4. Zakończenie programu\nWybierz opcję: ";

    int opt;
    std::cin >> opt;

    std::cout << "\n";

    switch (opt)
    {
    case 1:
      std::cout << "Dane ucznia\nImię:      Adam\nNazwisko:  Siekierski\nKlasa:     2C\n";
      break;
    case 2:
      now = time(0);
      std::cout << "Obecna data i godzina: " << ctime(&now) << std::endl;
      break;
    case 3:
      num = std::rand() % 100;
      std::cout << "Losowa liczba od 1 do 100: " << num << "\n";
      break;
    case 4:
      std::cout << "Zamykam...\n";
      finish = true;
      break;
    default:
      std::cout << "Nieznana opcja: " << opt << "\n";
    }
  } while (finish != true);

  return 0;
}