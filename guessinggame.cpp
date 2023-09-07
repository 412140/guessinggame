#include <iostream>

using namespace std;

// No mouse, global variables, or strings. Use iostream.

int main() {

  srand(time(NULL)); //seed for the random number
int compNumber = rand() % 101; //numbers will be between 0 - 100 (if you wanted 1-100 you would just need to do +1 to this operation)
  int userInput;
  int numOfGuesses = 0;
  bool gameRunning = true;
  int playAgain;
  
  while(gameRunning) {  

    cout << "Please type your guess (0-100): ";
  cin >> userInput;
  numOfGuesses++;
  /*cout << "You guessed: " << userInput;
  cout << "the computer guessed: " << compNumber;*/


if(userInput == compNumber) {

  cout << "You won! It took you " << numOfGuesses << " tries. Play again? 1 = yes/2 = no";
  cin >> playAgain;
  //stiff herwedknfdks
  if (playAgain == 1) {
    gameRunning = true;
    //cout << "Restarting..";
  } else if(playAgain == 2) {
    gameRunning = false;
    //cout << "Thank you for playing";
  }

  
 } else if (userInput > compNumber) {
      cout << "Your number is too high. That was your " << numOfGuesses << " try."; 
    } else {
  cout << "your number is too low. That was your " << numOfGuesses << " try.";
  }
 }
} 
