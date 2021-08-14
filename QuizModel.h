#ifndef QUIZMODEL_H_
#define QUIZMODEL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Question 3
#define NUMBER_THEME 3

typedef struct theme{
    char Math[2];
    char Physics[2];
    char GK[2];
}Answers;

int verification(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
int points(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void ChooseTheme(Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void Menu();
void setupAnswers(Answers Ans[3][Question]);
void cleanBuffer();


#endif