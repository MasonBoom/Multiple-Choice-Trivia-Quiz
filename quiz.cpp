#include <iostream>
#include <string>
#include <vector>

struct Question
{
    std::string question;
    std::vector<std::string> answers;
    int correct;
};

// question vector defines list of questions and answers

std::vector<Question> questions = 
{
    { "What is Python", {"A large snake", "a high-level general-purpose programming language", "Both A and B", "None of the above"}, 'C' },
    { "How many blue stripes are on the USA flag", {"13", "0", "11", "7"}, 'B'}
};

int main()
{
    int correctCount = 0;
    for (const auto& q: questions)
    {
        std::cout << q.question << "?\n";
        char option = 'A';
        for (const auto& a: q.answers)
        {
            std::cout << option << ") " << a << '\n';
            option += 1;
        }

        while(option != 'A' && option != 'B' && option != 'C' && option != 'D')
        {
            std::cout << "Please enter a valid option: ";
            std::cin >> option;
        }

        if (option == q.correct) {
            std::cout << "Correct!\n";
            correctCount += 1;
        }
        else if (option == 'A' || option == 'B' || option == 'C' || option =='D') {
            std::cout << "Incorrect!\n";
        }
        else {
            std::cout << "Invalid option!\n";
        }
    }
    std::cout << "You got " << correctCount << " out of " << questions.size() << " correct!\n";
    std::cout << "Score: " << (double)correctCount / questions.size() * 100 << "%\n";
}