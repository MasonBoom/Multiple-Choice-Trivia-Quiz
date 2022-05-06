# Multiple Qhoice Trivia quiz

### Description

This is a multiple choice trivia quiz that asks the user 15 trivia questions. I came up with the majority of the questions myself, but I also used google to find some basic trivia questions to ask the user. Once the user answers all 15 multiple choice questions, they would be able to see their score (In a fraction and in a percentage). They will then have a choice to have their score saved in a text file, and they can also choose to review the correct answers for the quiz before taking it again.

### How to use locally

If you want to run this project on your local machine, you must have g++ installed on your computer. 

In the project directory, run `g++ quiz.cpp` in the project directory to compile the code. After that, run `./a.exe` in the terminal.

### Technologies/Libraries used
- C++
  - iostream
  - vector
  - fstream

### Functionality

If the user guesses a correct answer, the terminal will respond with "Correct!" before moving onto the next question. If the user guesses an incorrect answer, the terminal will respond with "Incorrect!".

![](https://github.com/MasonBoom/Multiple-Choice-Trivia-Quiz/blob/0b3c184f27894f77a84aff6105ea05578e30f0ff/images/2022-05-04%20(3).png)

After the user finishes the quiz, their score will be displayed in the terminal and the user will be asked whether or not they want to save their score.

![](https://github.com/MasonBoom/Multiple-Choice-Trivia-Quiz/blob/a99dffe95d2f7009a226f8537cdd54b058bf0f29/images/2022-05-04%20(4).png)

After the user is asked if they want to save their score, they will be asked if they want to review the questions with the correct answers. If they select yes (y), they will be able to see all the questions and the correct answers. If not, the game ends.

![](https://github.com/MasonBoom/Multiple-Choice-Trivia-Quiz/blob/811742022347e337376fbd88fc94ae9c7c1a892f/images/2022-05-04%20(5).png)
