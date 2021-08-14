#ifndef QUIZVIEW_H_
#define  QUIZVIEW_H_

#include "QuizModel.h"

void cleanScreen();
void Menu();
void questionMath(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void questionPhysic(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void questionGK(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void message_Score(int ver, int Score);

#endif