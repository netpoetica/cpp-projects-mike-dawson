#include <iostream>
#include <string>

using namespace std;

int main(){
  string lastName;
  string incantation;   // Noun

  int hoursPerSpell;
  int totalSpells;

  cout << "Welcome to the Wizard Test..." << endl;
  cout << "Please enter the following information for a personalized story:" << endl;

  cout << "What is your last name? ";
  cin >> lastName;

  cout << "Enter a positive number: ";
  cin >> totalSpells;

  cout << "Enter another positive number: ";
  cin >> hoursPerSpell;

  cout << "Enter a noun: ";
  cin >> incantation;

  cout << "\n\nApprentice Wizard " << lastName << " hesitantly approached The Temple for the final test. ";
  cout << "The apprentice had studied " << totalSpells << " for " << hoursPerSpell << " hours each, toiling for a total of " << totalSpells * hoursPerSpell << " hours. ";
  cout << lastName << " only hoped that the Masters would ask for The Apprentice's favorite incantation, The Summoning of the " << incantation << endl;

  return 0;
}