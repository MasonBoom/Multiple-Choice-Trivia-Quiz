#include <iostream>
#include <string>
#include <vector>

struct Question
{
    std::string question;
    std::vector<std::string> answers;
    int correct;
};

std::vector<Question> questions = 
{
    { "What is the moon", {"Cheese", "Fake", "In the sky", "By the sun"}, 0 },
    { "Where's Waldo", {"Over here", "Over there"}, 1}
};

int main()
{
    
}