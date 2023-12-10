# Weather-and-games

**Weather Calling **

City Input:

Run the script, and it will prompt you to enter the name of the city for which you want to get weather information.
Provide the city name as input.
API Request:

The script then sends a GET request to the Visual Crossing Weather API with the provided city name.
The API key used for the request is embedded in the URL.
Response Handling:

If the API request is successful (status code 200), the script parses the JSON response.
If the request is not successful, an error message is displayed, and the script exits.
Data Extraction and Output:

The script extracts the current temperature and weather conditions from the JSON response.
It then writes this information to a file named "data.txt."
Output File:

The "data.txt" file contains two lines: one for temperature and one for weather conditions.
Example:

Temperature: 25.6 C
Weather status: Clear
Additional Notes:

The API key used in the script is a sample key and may have limitations. Please replace it with your own key for extended usage.
The temperature is provided in degrees Celsius, and the weather status represents the current conditions.
Running the Script:

Ensure you have the required Python libraries installed (requests).
Run the script and follow the on-screen instructions.


Games Included:

1. Tic Tac Toe
  How to Play:
  Run the program and select option 1 to play Tic Tac Toe.
  Enter the row and column (both in the range 0-2) to make your move.
  The game will alternate between 'X' and 'O'.
  The player who successfully fills a row, column, or diagonal with their symbol wins.
  If the board is full and no player has won, the game ends in a draw.
2. Rock Paper Scissors
  How to Play:
  Select option 2 to play Rock Paper Scissors.
  Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors) or 3 to quit.
  the computer will randomly choose Rock, Paper, or Scissors.
  The winner is determined by the traditional Rock Paper Scissors rules.
  Repeat until you choose to quit.
3. Number Guessing Game
  How to Play:
  Choose option 3 to play the Number Guessing Game.
  You have a limited number of attempts to guess the secret number between 1 and 100.
  After each guess, you will be informed if your guess is too high or too low.
  The game ends when you correctly guess the number or run out of attempts.
  Additional Features:
  The program reads initial settings (if any) from a file named "data.txt."
  You can customize game settings by editing "data.txt," where the first line represents a temporary value, and the second line represents a condition.
  To exit the program, choose option 2 when prompted.
Running the Program:
  Compile the code using a C++ compiler.
  Execute the compiled program.
  Follow the on-screen instructions to navigate through the menu and play the desired game.
Feel free to explore and enjoy this collection of classic games!
