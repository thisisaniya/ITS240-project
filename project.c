#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void startGame();
void categoryOne();
void categoryTwo();
void categoryThree();
void correctAnswer(int points);
char answer;
char answerKey[] = {'B', 'C', 'A', 'B', 'A', 'A', 'A', 'B', 'C'};
int score[] = {100, 200, 300, 100, 200, 300, 100, 200, 300};
int totalScore = 0;
int answered[9] = {0};

void startGame() {
    printf("\n1. Education\n");
    printf("2. 2 Truths and a Lie\n");
    printf("3. Triple A (All About Aniya)\n");
    printf("Pick a category: ");
}

void categoryOne() {
    int categoryOneQuestion;
    printf("Education for how much? (100, 200, 300)\n");
    scanf("%d", &categoryOneQuestion);

    if (categoryOneQuestion != 100 && categoryOneQuestion != 200 && categoryOneQuestion != 300) {
        printf("Invalid input, please try again\n");
        return;
    }

    int questionIndex = categoryOneQuestion / 100 - 1;
    if (answered[questionIndex]) {
        printf("This question has already been answered!\n");
        return;
    }

    answered[questionIndex] = 1;

    switch (categoryOneQuestion) {
        case 100:
            printf("\nWhat's my Major?\n");
            printf("A. Computer Science\n");
            printf("B. Cybersecurity\n");
            printf("C. Computer Information Technology\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'b') {
                correctAnswer(100);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[0]);
            }
            break;
        case 200:
            printf("\nWho's my favorite teacher? (don't tell the others)\n");
            printf("A. Chuck\n");
            printf("B. Shaun\n");
            printf("C. Lance, the man, the myth, the legend\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'c') {
                correctAnswer(200);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[1]);
            }
            break;
        case 300:
            printf("\nWhich student organization have I spent the most time with?\n");
            printf("A. Unity Hub/NSBE (National Society of Black Engineers)\n");
            printf("B. WIIT (Women in IT)\n");
            printf("C. SWE (Society of Women Engineers)\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'a') {
                correctAnswer(300);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[2]);
            }
            break;
        default:
            printf("Invalid input, please try again\n");
            break;
    }
}

void categoryTwo() {
    int categoryTwoQuestion;
    printf("2 Truths and a Lie for how much? (100, 200, 300)\n");
    scanf("%d", &categoryTwoQuestion);

    if (categoryTwoQuestion != 100 && categoryTwoQuestion != 200 && categoryTwoQuestion != 300) {
        printf("Invalid input, please try again\n");
        return;
    }

    int questionIndex = 3 + (categoryTwoQuestion / 100 - 1); 
    if (answered[questionIndex]) {
        printf("This question has already been answered!\n");
        return;
    }

    answered[questionIndex] = 1;

    switch (categoryTwoQuestion) {
        case 100:
            printf("\nPick the lie!.\n");
            printf("A. I got my driver's license at 19 years old.\n");
            printf("B. I've been roller skating since the age of 3.\n");
            printf("C. I'm taking classes over the summer.\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'a') {
                correctAnswer(100);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[3]);
            }
            break;
        case 200:
            printf("\nPick the lie!.\n");
            printf("A. I'm living on campus next semester.\n");
            printf("B. I'm from Chicago.\n");
            printf("C. I'm taking 15 credit hours next semester.\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'a') {
                correctAnswer(200);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[4]);
            }
            break;
        case 300:
            printf("\nPick the lie!.\n");
            printf("A. I live in Hammond.\n");
            printf("B. I wear lots of pajamas.\n");
            printf("C. I've been working overnight shifts.\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'a') {
                correctAnswer(300);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[5]);
            }
            break;
        default:
            printf("Invalid input, please try again\n");
            break;
    }
}

void categoryThree() {
    int categoryThreeQuestion;
    printf("Triple A (All About Aniya) for how much? (100, 200, 300)\n");
    scanf("%d", &categoryThreeQuestion);

    if (categoryThreeQuestion != 100 && categoryThreeQuestion != 200 && categoryThreeQuestion != 300) {
        printf("Invalid input, please try again\n");
        return;
    }

    int questionIndex = 6 + (categoryThreeQuestion / 100 - 1); 
    if (answered[questionIndex]) {
        printf("This question has already been answered!\n");
        return;
    }

    answered[questionIndex] = 1; 

    switch (categoryThreeQuestion) {
        case 100:
            printf("\nPick the lie!\n");
            printf("A. I love the sun.\n");
            printf("B. The clouds and moon fascinate me.\n");
            printf("C. Winter is my favorite season.\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'c') {
                correctAnswer(100);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[6]);
            }
            break;
        case 200:
            printf("\nHow tall am I?\n");
            printf("A. I'm 5'5.\n");
            printf("B. I'm 5'3.5.\n");
            printf("C. I'm 5'2.\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'b') {
                correctAnswer(200);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[7]);
            }
            break;
        case 300:
            printf("\nWhat is my movie genre preference?.\n");
            printf("A. Horror movies.\n");
            printf("B. Sci-fi movies.\n");
            printf("C. Action movies.\n");
            printf("Enter your answer (A, B, C): ");
            scanf(" %c", &answer);
            if (tolower(answer) == 'c') {
                correctAnswer(300);
            } else {
                printf("Incorrect! The correct answer is %c\n", answerKey[8]);
            }
            break;
        default:
            printf("Invalid input, please try again\n");
            break;
    }
}
void correctAnswer(int points) {
    printf("Correct! You earned %d points!\n", points);
    totalScore += points;
}

int main() {
    int choice;
    int allAnswered = 0; 
    
    printf("Welcome to my Jeopardy game!\n");
    printf("One chance to pick the correct answer\n");
    printf("Try your best\n");

    while (!allAnswered) { 
        startGame();
        scanf("%d", &choice);

        if (choice != 1 && choice != 2 && choice != 3) {
            printf("Invalid input, please try again\n");
            continue; 
        }

        switch (choice) {
            case 1:
                categoryOne();
                break;
            case 2:
                categoryTwo();
                break;
            case 3:
                categoryThree();
                break;
            default:
                printf("Invalid choice. Exiting program.\n");
                return 0;
        }

        allAnswered = 1; 
        for (int i = 0; i < 9; i++) {
            if (!answered[i]) {
                allAnswered = 0; 
                break;
            }
        }
    }

    printf("Your total score is: %d\n", totalScore);

    switch (totalScore / 400) { 
        case 4: 
            if (totalScore == 1600) {
                printf("You got a perfect!! We're basically besties! Congrats!\n");
            } 
            break;
        case 3: 
            printf("You did a pretty good job\n");
            break;
        case 2: 
            printf("Nice try\n");
            break;
        default: 
            printf("You should get to know me better :)\n");
            break;
    }

    printf("Thanks for playing!\n");

    return 0;
}