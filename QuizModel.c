#include "QuizModel.h"


int verification(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int count=0;

    ChooseTheme(Ans,option, theme);

    for(int i=0; i<Question; i++){
        if(optionQuestion[i][0]==theme[i][0])
            count=1+count;
    }

    //Todas as respostas corretas
    if(count==3)
        return 1;
    ////Alguma(s) respostas incorretas
    else
        return 0;
}


int points(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int count=0;

    ChooseTheme(Ans,option, theme);
    
    for(int i=0; i<Question; i++){
        if(optionQuestion[i][0]==theme[i][0])
            count=1+count;
    }

    //Definindo o pontos de acordo com a quantidade de resposta corretas
    return (count=count*5);

}

//Copia as resposta para o array_theme por questões de praticidade, assim podemos utilizar em qualquer tema escolhido
void ChooseTheme(Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {

    switch(option) {
        case 1:
            for(int i=0; i<3; i++) {
                strcpy(theme[i], Ans[0][i].Math);
            }
        break;

        case 2:
            for(int i=0; i<3; i++) {
                strcpy(theme[i], Ans[1][i].Physics);
            }
        break;

        case 3:
            for(int i=0; i<3; i++) {
                strcpy(theme[i], Ans[2][i].GK);
            }
        break;
    }
}

void setupAnswers(Answers Ans[3][Question]){

    //Definindo as repostas das QUESTOES_MATH
    strcpy(Ans[0][0].Math, "D");
    strcpy(Ans[0][1].Math, "D");
    strcpy(Ans[0][2].Math, "D");

    //Definindo as repostas das QUESTOES_PHYSICS
    strcpy(Ans[1][0].Physics, "B");
    strcpy(Ans[1][1].Physics, "D");
    strcpy(Ans[1][2].Physics, "A");

    //Definindo as repostas das QUESTOES_GK
    strcpy(Ans[2][0].GK, "B");
    strcpy(Ans[2][1].GK, "C");
    strcpy(Ans[2][2].GK, "D");
}

void cleanBuffer(){
    char op;

    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
}

