#include <iostream>
#include <string>

using namespace std;

int main(){

  const int CIVILIAN_SAVED_BONUS = 100;
  const int ALIEN_DESTROYED_BONUS = 50;

  string name;
  int totalPoints = 0;
  int totalAliensKilled = 0;
  int totalCiviliansSaved = 0;

  cout << "ALIENS ATTACKED YOUR HOME TOWN!" << endl;
  cout << "You and your friends have barely survived an alien invasion.";
  cout << "Having fought and won, you are now sharing stories of your victory at a local pub..." << endl;

  cout << endl << "What is your name? ";
  cin >> name; 

  cout << endl << "How many aliens did you kill? ";
  cin >> totalAliensKilled;

  cout << endl << "How many folks did you save, " << name << "? ";
  cin >> totalCiviliansSaved;

  // Calculate total score
  totalPoints = (totalAliensKilled * ALIEN_DESTROYED_BONUS) + (totalCiviliansSaved * CIVILIAN_SAVED_BONUS);

  // Report on it.
  cout << "Well good job, " << name << "! You scored a total of " << totalPoints << "!" << endl;

  return 0;
}