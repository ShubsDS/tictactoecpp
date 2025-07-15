#include <iostream>   // For std::cout and std::cin
#include <string>     // For std::string
#include <vector>     // For std::vector
#include <unordered_map> 

char boardState[9];
bool playerTurn = false;

// Function declaration (prototype)
void printBoardState() {
  std::cout << "   1    2    3" << "\n";
  std::cout << "A  " << boardState[0] << " | " << boardState[1] << " | " << boardState[2] << "\n";
  std::cout << "B  " << boardState[3] << " | " << boardState[4] << " | " << boardState[5] << "\n";
  std::cout << "C  " << boardState[6] << " | " << boardState[7] << " | " << boardState[8] << std::endl;
}


bool checkIfGameWon() {
  int winningCombinations[][3] = {{0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6}};
  for(int i = 0; i < 8; i ++) {
    int* combo = winningCombinations[i];
    if(boardState[winningCombinations[i][0]] == boardState[winningCombinations[i][1]] && boardState[combo[1]] == boardState[winningCombinations[i][2]] && boardState[winningCombinations[i][0]] != ' ') {
      std::cout << "printing here" << combo[0] << combo[1] << combo[2] << "\n";
      std::cout << boardState[combo[0]] << boardState[combo[1]] << boardState[combo[2]] << std::endl;
      return true;
      }
  }

  return false;
}

int main() {
  std::unordered_map<std::string, int> umap = {{"A1", 0}, {"A2", 1}, {"A3", 2}, {"B1", 3}, {"B2", 4}, {"B3", 5}, {"C1", 6}, {"C2", 7}, {"C3", 8}};
  for(int i = 0; i < 9; i++) {
    boardState[i] = ' ';
  }
  for(int i = 0; i < 9; i++) {
    printBoardState();
    int player = playerTurn;
    player ++;

    std::cout << "player " << player << "'s turn" << "\n";
    std::string moveIndex;
    std::cout << "Choose your move index (letter first): ";
    std::cin >> moveIndex;
    int indexToChange = umap.at(moveIndex);

    if(player == 1) {
      boardState[indexToChange] = 'X';
    }
    else {
      boardState[indexToChange] = 'O';
    }
    if(checkIfGameWon()) {
      std::cout << "player " << player << " has won the game!" << "\n";
      std::cout << "Final board state: " << "\n";
      printBoardState();
      return 0;
    }
    playerTurn =  !playerTurn;

  }

  std::cout << "The game ends in a draw" << "\n";
  std::cout << "Final board state: " << "\n";
  printBoardState();

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

