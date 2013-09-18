/*
  I opted to use a switch case here, because that's what adults do :)
  I imagine we may revisit something like this later in the book and the
  switch case statement is more scalable.
*/
#include <iostream>
#include <string>

using namespace std;

int main(){

  int menuOption;
  string msg;

  cout << "\tGame Menu" << endl;
  cout << "\n1. One Player";
  cout << "\n2. Two Players";
  cout << "\n3. Quit" << endl;

  cout << "\nEnter menu option: ";
  cin >> menuOption;

  switch(menuOption){
    case 1:
      msg = "Starting a new one player game...";
      break;
    case 2:
      msg = "Starting a new two player game...";
      break;
    default:
      msg = "Goodbye you old fool!";
      break;
  }

  cout << "\n\n" << msg << endl;

  return 0;

}