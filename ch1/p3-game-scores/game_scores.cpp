#include <iostream>
#include <string>

using namespace std;

int main(){
  int player1Score = 0;
  int player2Score = 0;
  int player3Score = 0;

  float averageScore;

  cout << "\n\tEnter the scores of 3 different players from your game:" << endl;

  cout << "Player 1 Score: ";
  cin >> player1Score;

  cout << "Player 2 Score: ";
  cin >> player2Score;

  cout << "Player 3 Score: ";
  cin >> player3Score;
  
  // Compute average score.
  averageScore = ((float)(player1Score + player2Score + player3Score)) / 3;

  cout << "\nThanks amigo. I wanted to do some math and needed some data. Here is the average score: \n\n\t\t" << averageScore << endl;

  return 0;
}