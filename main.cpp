#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0)); // Різні випадкові числа при кожному запуску

  short user_choice;
  cout << "Ласкаво просимо в гру 'Камінь, ножиці, папір'. Варіанти:" << endl;
  cout << "1. Камінь" << endl;
  cout << "2. Ножиці" << endl;
  cout << "3. Папір" << endl;
  cout << "Виберіть свій варіант: ";

  while (!(cin >> user_choice) || user_choice < 1 || user_choice > 3) {
    cout << "Невірно. Введіть число від 1 до 3: ";
    cin.clear();
    cin.ignore(10000, '\n');
  }

  // Випадкове число від 1 до 3 (1 - Камінь, 2 - Ножиці, 3 - Папір)
  short rand_choice = 1 + rand() % 3;

  cout << "Вибір комп'ютера: " << rand_choice << endl;

  if (rand_choice == user_choice) {
    cout << "Нічия!" << endl;
  } else if ((user_choice == 1 && rand_choice == 2) || // Камінь б'є ножиці
             (user_choice == 2 && rand_choice == 3) || // Ножиці ріжуть папір
             (user_choice == 3 && rand_choice == 1)) { // Папір накриває камінь
    cout << "Ви виграли!" << endl;
  } else {
    cout << "Ви програли!" << endl;
  }

  return 0;
}
