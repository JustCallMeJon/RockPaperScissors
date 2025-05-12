#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//Alright, so here's the long and short of what I want to do:
//Have the computer choose either 1, 2, or 3.
//You choose 1 (rock), 2(paper), or 3(scissors).
//Run an if brick to check to see if you or it wins.
//Add 1 to the win count for either, or don't add if both numbers are the same
//Check and see if you want to continue or leave after every game.
//Output the final score at the end.
int main(){


    int userEnteredNumber;
    string UserMove;
    string AIMove;
    int playerScore = 0;
    int AIScore = 0;
    bool playGame = true;
    do {
        int randomNumber = rand() % 3 + 1;
        std::cout << "Let's play Rock, Paper, Scissors!" << std::endl;
        try {
            cout << "Enter a number between 1 and 3! 1 is Rock, 2 is Paper, and 3 is Scissors: ";
            cin >> userEnteredNumber;
            if (userEnteredNumber > 3 || userEnteredNumber < 1) {
                throw std::invalid_argument("Entered value must be between 1 and 3");
            }
            string checkType(); {
                if (userEnteredNumber == 1) {
                    UserMove = "Rock";
                }
                else if (userEnteredNumber == 2) {
                    UserMove = "Paper";
                }
                else {
                    UserMove = "Scissors";
                }
            }
            string checkType(); {
                if (randomNumber == 1) {
                    AIMove = "Rock";
                }
                else if (randomNumber == 2) {
                    AIMove = "Paper";
                }
                else {
                    AIMove = "Scissors";
                }
            }


            cout << "You picked: "<< UserMove  << endl;
        }
        catch (invalid_argument) {
            std::cout << "Enter a number between 1 and 3. Try again!" << std::endl;
        }

        if ((randomNumber == 1 && userEnteredNumber == 3) || randomNumber > userEnteredNumber) {
            cout << "You picked " << UserMove << " and the computer picked " << AIMove << ". You lose, sorry!" << std::endl;
            AIScore++;
        }
        else if ((randomNumber == 3 && userEnteredNumber == 1) || randomNumber < userEnteredNumber) {
            cout << "You picked " << UserMove << " and the computer picked " << AIMove << ". YOU WIN YIPPIE!" << std::endl;
            playerScore++;
        }
        else {
            cout << "You picked " << UserMove << " and the computer picked " << AIMove << ". You tied." << std::endl;
        }
        try {
            cout << "Current Score:" << std::endl;
            cout << "Your Score: " << playerScore << "        AI Score: " << AIScore << std::endl;
            cout << "Want to play again? Y/N ";
            char playerWantsToPlay;
            cin >> playerWantsToPlay;
            if (playerWantsToPlay == 'y' || playerWantsToPlay == 'Y') {
            }
            else
            {
                playGame = false;
            }
        }
        catch (invalid_argument) {
            cout << "Try again.";
        }

    } while (playGame == true);







}
/*
Method syntax:
returnType methodName(parameter)
{}
* 
* 
* 
Condition 1 (Computer wins?): if randomNumber 
if ((randomNumber == 1 && userEnteredNumber == 3) || etc...)

--------------------------------------

Condition 1: 
if (randomNumber == 1 && userEnteredNumber == 3)
{
computer wins
} else if (randomNumber == 3 && userEnteredNumber == 1)
{
user wins
} else if (randomNumber > userEnteredNumber)
{
computer wins
} else if (randomNumber < userEnteredNumber)
{
user wins
} else {
game tie
}


*/


