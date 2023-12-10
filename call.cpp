#include <bits/stdc++.h>
using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;

public:
    TicTacToe() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                board[i][j] = ' ';
            }
        }
        currentPlayer = 'X';
    }

    void printBoard() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j];
                if (j < 2) {
                    cout << " | ";
                }
            }
            cout << "\n---------\n";
        }
    }

    bool makeMove(int row, int col) {
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            return false;
        }

        board[row][col] = currentPlayer;
        return true;
    }

    bool checkWinner() const {
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
                return true;
            }
            if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
                return true;
            }
        }
        if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
            return true;
        }
        if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
            return true;
        }
        return false;
    }

    bool boardFull() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (board[i][j] == ' ') {
                    return false;
                }
            }
        }
        return true;
    }

    char getCurrentPlayer() const {
        return currentPlayer;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
};



class RockPaperScissors {
public:
    enum class Choice { ROCK, PAPER, SCISSORS };

    void play() {
        while (true) {
            cout << "Enter your choice (0: Rock, 1: Paper, 2: Scissors, 3: Quit): ";
            int playerChoice;
            cin >> playerChoice;

            if (playerChoice == 3) {
                cout << "Thanks for playing! Goodbye!";
                break;
            }

            Choice computerChoice = static_cast<Choice>(rand() % 3);
            cout << "Computer chose: ";
            displayChoice(computerChoice);

            Choice user = static_cast<Choice>(playerChoice);
            cout << "You chose: ";
            displayChoice(user);

            determineWinner(user, computerChoice);
        }
    }

private:
    void displayChoice(Choice choice) {
        switch (choice) {
            case Choice::ROCK:
                cout << "Rock\n";
                break;
            case Choice::PAPER:
                cout << "Paper\n";
                break;
            case Choice::SCISSORS:
                cout << "Scissors\n";
                break;
        }
    }

    void determineWinner(Choice user, Choice computer) {
        if (user == computer) {
            cout << "It's a tie!\n";
        } else if ((user == Choice::ROCK && computer == Choice::SCISSORS) ||
                   (user == Choice::PAPER && computer == Choice::ROCK) ||
                   (user == Choice::SCISSORS && computer == Choice::PAPER)) {
            cout << "You win!\n";
        } else {
            cout << "Computer wins!\n";
        }
    }
};






class NumberGuessingGame {
private:
    int secretNumber;
    int attempts;
    int maxAttempts;

public:
    NumberGuessingGame(int maxAttempts = 5) : maxAttempts(maxAttempts) {
        srand(static_cast<unsigned int>(time(nullptr)));
        secretNumber = rand() % 100 + 1; // Generating a random number between 1 and 100
        attempts = 0;
    }

    void play() {
        cout << "Welcome to the Number Guessing Game!\n";
        cout << "Try to guess the secret number between 1 and 100.\n";

        while (attempts < maxAttempts) {
            int guess;
            cout << "Attempt #" << attempts + 1 << " - Enter your guess: ";
            cin >> guess;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Please enter a valid number.\n";
                continue;
            }

            if (guess == secretNumber) {
                cout << "Congratulations! You guessed the correct number (" << secretNumber << ") in " << attempts + 1 << " attempts!\n";
                return;
            } else if (guess < secretNumber) {
                cout << "Too low! Try a higher number.\n";
            } else {
                cout << "Too high! Try a lower number.\n";
            }

            attempts++;
        }

        cout << "Sorry, you've used all your attempts. The secret number was: " << secretNumber << "\n";
    }
};





int main()
{
    system("cls");1
    system("C:\\Users\\kunal\\Videos\\project\\p.py");
    
    int x;
    int y;
    string temp,condition;
    ifstream read;
    read.open("data.txt");
    getline(read,temp);
    getline(read,condition);
    cout<<temp<<endl;
    cout<<condition<<endl;
    
    cout<<"Press 1 to play game "<<endl;
    cout<<"Press 2 to exit"<<endl;
    cin>>x;
   if(x==1){
    system("cls");
      cout<<"Press 1 to play tic tac toe"<<endl;
      cout<<"Press 2 to play Rock paper Scissor"<<endl;
      cout<<"Press 3 to play Number guessing game"<<endl;
      cin>>y;
      if(y==1){system("cls");
                 TicTacToe game;
    int row, col;

    cout << "Tic Tac Toe Game!\n";

    while (true) {
        game.printBoard();

        cout << "Player " << game.getCurrentPlayer() << ", enter row and column (0-2): ";
        cin >> row >> col;

        if (!game.makeMove(row, col)) {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        if (game.checkWinner()) {
            game.printBoard(); // Print the final board before announcing the winner
            cout << "Player " << game.getCurrentPlayer() << " wins!\n";
            break;
        }

        if (game.boardFull()) {
            game.printBoard(); // Print the final board before announcing the draw
            cout << "It's a draw!\n";
            break;
        }

        game.switchPlayer(); // Switch player after checking for a winner or draw
    }


         }
        else if(y==2){system("cls");
             srand(static_cast<unsigned int>(time(nullptr)));

          RockPaperScissors game;
              game.play();
        } 

        else if(y==3){system("cls");
            NumberGuessingGame game;
             game.play();

        }


         
         
         }



    else{
        exit(0);
    }
    
 

    return 0;
}