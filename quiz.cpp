#include <iostream>
#include <vector>
#include <string>

// defines how questions vector will be structured

struct Question
{
    std::string question;
    std::vector<std::string> answers;
    int correct;
};

// list of questions and answers

std::vector<Question> questions = 
{
    { "What is Python", {"A large snake", "a high-level general-purpose programming language", "Both A and B", "None of the above"}, 'C'},  // 1
    { "How many blue stripes are on the USA flag", {"13", "0", "11", "7"}, 'B'},
    { "What is the capital of the USA", {"Washington D.C.", "New York", "Chicago", "London"}, 'A'},
    { "What is the name of the company that published the Mario Kart video game", {"SEGA", "Nintendo", "Microsoft", "Sony"}, 'B'},
    { "Brazil is the biggest producer of", {"Coca Cola", "Rice", "Coal", "Coffee"}, 'D'},  //5
    { "Which continent has Metallica not performed in yet", {"Antarctica", "Asia", "Africa", "None of the above"}, 'D'},
    { "What is the currency of India", {"Dollar", "Rupee", "Riyal", "Euro"}, 'B'},
    { "What is the best selling game of all time as of 2/8/2022", {"Wii Sports", "Grand Theft Auto V", "Minecraft", "Super Mario Bros."}, 'C'},
    { "What is a tomato classified as", {"Fruit", "Vegatable", "Herb", "Spice"}, 'A'},
    { "Which is the most common drink in Europe", {"Water", "Espresso", "Tea", "Wine"}, 'B'}, //10
    { "What is the capital city in Pakistan", {"Islamabad", "Lahore", "Karachi", "Riyadh"}, 'A'},
    { "Which planet is the largest planet", {"Saturn", "Uranus", "Jupiter", "Neptune"}, 'C'},
    { "Which planet is the seventh planet from the sun", {"Neptune", "Saturn", "Pluto", "Uranus"}, 'D'},
    { "Which video game/franchise is not considered a first person shooter game", {"Rocket League", "Call of Duty", "Battlefield series", "PUBG"}, 'A'},
    { "What is the most popular mobile app as of 4/27/2022", {"Facebook", "Snapchat", "Instagram", "TikTok"}, 'D'}  //15
};

int main() {
    int correctCount = 0;  // var used to return total amount correct
    for (const auto& q: questions) {
        std::cout << q.question << "?\n";
        char option = 'A';

        // Creates A) B) C) D) up to Z) depending on the amount of options

        for (const auto& a: q.answers){
            std::cout << option << ") " << a << '\n';
            option += 1;
        }

        // While loop will not let user proceed until a valid answer is given for every question

        while (option != 'A' && option != 'B' && option != 'C' && option != 'D') {
            std::cout << "Please enter a valid option: ";
            std::cin >> option;
        }

        // score increased by 1 for every right answer

        if (option == q.correct) {
            std::cout << "Correct!\n";
            correctCount += 1;
        } else {
            std::cout << "Incorrect!\n";
        }

    }

    // Displays user score in a fraction and a percentage

    std::cout << "You got " << correctCount << " out of " << questions.size() << " correct!\n";
    std::cout << "Score: " << (double)correctCount / questions.size() * 100 << "%\n\n";

    // Gives user the option to review incorrect questions after the quiz

    std::cout << "Would you like to review the questions you got wrong? (y/n): ";
    char yesOrNo;
    std::cin >> yesOrNo;

    if (yesOrNo == 'y'){

        // Displays questions with the correct answers

        for (const auto& q: questions) {
            char option = 'A';
            for (const auto& a: q.answers) {
                if (option == q.correct) {
                    std::cout << q.question << "?\n";
                    std::cout << option << ") " << a << '\n';
                }
                option += 1;
            }
        }
    } else if (yesOrNo == 'n') {
        std::cout << "Thank you for playing!\n";
    } else {
        std::cout << "Please enter a valid option: ";
        std::cin >> yesOrNo;
    }

}