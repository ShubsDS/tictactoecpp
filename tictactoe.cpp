#include <iostream>   // For std::cout and std::cin
#include <string>     // For std::string
#include <vector>     // For std::vector

char boardState[9];
bool playerTurn = false;

// Function declaration (prototype)
void printBoardState() {
  std::cout << boardState[0] << " | " << boardState[1] << " | " << boardState[2] << "\n";
  std::cout << boardState[3] << " | " << boardState[4] << " | " << boardState[5] << "\n";
  std::cout << boardState[6] << " | " << boardState[7] << " | " << boardState[8] << "\n";
}


bool checkIfGameWon() {
  int winningCombinations[][3] = {{0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6}};
  for(int i = 0; i < 8; i ++) {
    int* combo = winningCombinations[i];
    if(boardState[combo[0]] == boardState[combo[1]] && boardState[combo[1]] == boardState[combo[2]] && boardState[combo[0]] != ' ')
      return true;
  }

  return false;
}

int main() {

  for(int i = 0; i < 9; i++) {
    printBoardState();
    int player = playerTurn;
    player ++;
    std::cout << "player " << player << "'s turn" << "\n";
    

  }



return 0;
}

// === Function Definitions ===

// Prints a simple greeting
void printGreeting() {
    std::cout << "Welcome to the C++ basics demo!" << std::endl;
}

// Adds two integers and returns the result
int add(int a, int b) {
    return a + b;
}

// Displays elements of an array
void displayArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

