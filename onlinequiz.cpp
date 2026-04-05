#include <iostream>
using namespace std;

// Structure to store question details
struct Question {
    string questionText;
    string options[4];
    char correctOption;
};

int main() {
    int score = 0;

    // Array of questions
    Question q[3];

    // Question 1
    q[0].questionText = "1. What is the capital of India?";
    q[0].options[0] = "A. Mumbai";
    q[0].options[1] = "B. Delhi";
    q[0].options[2] = "C. Chennai";
    q[0].options[3] = "D. Kolkata";
    q[0].correctOption = 'B';

    // Question 2
    q[1].questionText = "2. Which data structure uses FIFO?";
    q[1].options[0] = "A. Stack";
    q[1].options[1] = "B. Queue";
    q[1].options[2] = "C. Tree";
    q[1].options[3] = "D. Graph";
    q[1].correctOption = 'B';

    // Question 3
    q[2].questionText = "3. Which language is used for web?";
    q[2].options[0] = "A. HTML";
    q[2].options[1] = "B. C++";
    q[2].options[2] = "C. Java";
    q[2].options[3] = "D. Python";
    q[2].correctOption = 'A';

    char answer;

    // Loop through questions
    for (int i = 0; i < 3; i++) {
        cout << "\n" << q[i].questionText << endl;

        for (int j = 0; j < 4; j++) {
            cout << q[i].options[j] << endl;
        }

        cout << "Enter your answer (A/B/C/D): ";
        cin >> answer;

        if (toupper(answer) == q[i].correctOption) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer: " << q[i].correctOption << endl;
        }
    }

    // Display result
    cout << "\n===== RESULT =====\n";
    cout << "Your Score: " << score << " / 3\n";

    if (score == 3)
        cout << "Excellent!";
    else if (score >= 2)
        cout << "Good Job!";
    else
        cout << "Try Again!";

    return 0;
}
