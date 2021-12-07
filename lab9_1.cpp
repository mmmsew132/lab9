#include <iostream>
using namespace std;

int main() {
  char rank;
  cout << "Input your rank: ";
  cin >> rank;

  int i = 0;
  if (rank == 'S')
    i = 5;
  if (rank == 'A')
    i = 4;
  if (rank == 'B')
    i = 3;
  if (rank == 'C')
    i = 2;
  if (rank == 'D')
    i = 1;

  if (i >= 5)
    cout << "You have received Super Ultra Rare Unit!!!\n";
  if (i >= 4)
    cout << "You have received 5 gems.\n";
  if (i >= 3)
    cout << "You have received 1 gems.\n";
  if (i >= 2)
    cout << "You have received 2000 coins.\n";
  if (i >= 1)
    cout << "You have received very KAK items.\n";
  
  return 0;
}
