#include <iostream>

using namespace std;

int main(){
  const int TOTAL_CARDS = 52;  // In a deck
  int numPlayers = 0;

  cout << "The dealer says, 'How many folks are playing today?' ";
  cin >> numPlayers;

  cout << "Each player gets " << TOTAL_CARDS / numPlayers << " and there are " << TOTAL_CARDS % numPlayers << " left over." << endl;

  return 0;
}