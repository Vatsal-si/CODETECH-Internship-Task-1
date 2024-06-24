#include <iostream>
#include <string>

using namespace std;

struct Question
{
    string prompt;
    string options[4];
    int correctOption;
};

int main()
{
    Question questions[] = {{"What was the most downloaded app of the 2010s?", {"Instagram", "Facebook", "Twitter", "Candy Crush"}, 1},
        {"What programming language is named after a type of Indonesian coffee?", {"Python", "C++", "Java", "HTML"}, 2},
        {"A blue wavy line in Microsoft Word indicates which error?", {"Formatting Error", "Grammatical Mistake", "Suggestion", "Word Mispelled"}, 0},
        {"What was Google’s fourth retired attempt at launching a social media platform?", {"Hangout", "Google Meet", "Google Chat", "Google +"}, 3},
        {"What does the acronym URL stand for?", {"Unified Reading Language", "Uniform Resource Locator", "Union of Researching Labs", "Urban Radiation Law"}, 1},
        {"What is the best-selling video game ever as of 2023?",{"Minecraft","PUBG","GTA V","Cyberpunk 2055"},0},
        {"Which company has a ‘no smoking’ ban regarding their computers. If you smoke while using their computer, you void the warranty.",{"Microsoft","hp","Dell","Apple"},3}
        };
    int numQuestions = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    for (int i = 0; i < numQuestions; i++)
    {
        cout << "Question " << (i + 1) << ": " << questions[i].prompt << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << (j + 1) << ". " << questions[i].options[j] << endl;
        }
        int answer;
        cout << "Your choice : ";
        cin >> answer;
        if (answer - 1 == questions[i].correctOption)
        {
            cout << "Correct!" << endl;
            score++;
        }
        else
        {
            cout << "Incorrect. The correct answer is " << questions[i].options[questions[i].correctOption] << "." << endl;
        }
        cout << endl;
    }

    cout << "Your final score is " << score << " out of " << numQuestions << "." << endl;
    if (score >= numQuestions * 0.8) {
        cout << "Well done! You passed the quiz." << endl;
    } else {
        cout << "Better luck next time. You failed the quiz." << endl;
    }

    return 0;
}