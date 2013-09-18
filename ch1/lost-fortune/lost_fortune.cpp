#include <iostream>
#include <string>

using namespace std;

int main(){
  const int GOLD_PIECES = 900;

  string leader;    // Name of Leader

  int adventurers;  // Number of adventurers
  int killed;       // Total killed in party

  // Extra variables to spice up the story!
  string monsterType = "ogres";

  // Variables used post-calculation
  int survivors;
  int extraGoldPieces;

  cout << "\tWelcome to Lost Fortune" << endl << endl;
  cout << "Please enter the following for a personalized adventure:\n\n";

  cout << "Enter your name: ";
  cin >> leader;

  cout << "How many people in your party? ";
  cin >> adventurers;

  cout << "Enter a positive number, less than the amount of people in your party: ";
  cin >> killed;

  // Perform post-input calculations
  survivors = adventurers - killed;
  extraGoldPieces = GOLD_PIECES % survivors;

  cout << "\nThe brave " << leader << " led a group of " << adventurers << " on a quest for fame and glory.";
  cout << "\nThey fought a band of " << monsterType << " and lost " << killed << " fellow adventurers...";
  cout << "Only " << survivors << " brave heroes survived." << endl;

  cout << "\nThe party was about to give up when they stumbled upon a buried fortune of " << GOLD_PIECES << " gold pieces.";
  cout << "They split the loot and " << leader << " kept the extra " << extraGoldPieces << " gold pieces - fair is fair." << endl;

  return 0;

}