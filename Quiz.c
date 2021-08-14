#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define Question 3
#define NUMBER_THEME 3

typedef struct theme{
    char Math[2];
    char Physics[2];
    char GK[2];
}Answers;

int verication(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
int points(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void ChooseTheme(Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void questionMath(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void questionPhysic(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void questionGK(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]);
void cleanBuffer();
void Menu();
void setupAnswers(Answers Ans[3][Question]);
void manssage_Score(int ver, int Score);



int main() {

    int option, score=0, sum_score=0;
    bool Exit=false;
    Answers Ans[3][Question];//Matrix[Temas][Quant. de Perguntas]
    char optionQuestion[Question][2], theme[NUMBER_THEME][2];

    setupAnswers(Ans);

    do{
        Menu();
        scanf("%d", &option);

        switch(option) {
            case 1:
                questionMath(optionQuestion,  Ans, option, theme);
                sum_score=points(optionQuestion,  Ans, option, theme);
                score=score+sum_score;
            break;
                
            case 2:
                questionPhysic(optionQuestion,  Ans, option, theme);
                sum_score=points(optionQuestion,  Ans, option, theme);
                score=score+sum_score;
            break;
            
            case 3:
                questionGK(optionQuestion,  Ans, option, theme);
                sum_score=points(optionQuestion,  Ans, option, theme);
                score=score+sum_score;
            break;

            case 4:
                Exit=true;
            break;

            case 5:
                printf("\t\t  *******************************");
                printf("\n\t\t        SCORE: %d points", score);
                printf("\n\t\t  *******************************");
                cleanBuffer();
            break;

            default:
                printf("Opps!!! Voce deve ter digitado algo errado!");
                cleanBuffer();
        }
    }while(Exit==false);



    return 0;
}
//GK=General Knowledge
void questionGK(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int ver, Results;
    char op;

    system("clear");

    printf("Which hardware was used in the First Generation Computer?");
	printf("\n\nA.Transistor\nB.Valves\nC.I.C\nD.S.S.I");

    printf("\n\t\tOPTION 1: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[0], 2, stdin);
    system("clear");

    printf("Which city in the world is popularly known as The City of Temple?");
	printf("\n\nA.Delhi\nB.Bhaktapur\nC.Kathmandu\nD.Agra\n\n");

    printf("\n\t\tOPTION 2: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[1], 2, stdin);
    system("clear");

    printf("Wind speed is measure by__________?");
	printf("\n\nA.Lysimeter\nB.Air vane\nC.Hydrometer\nD.Anemometer\n\n");

    printf("\n\t\tOPTION 3: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[2], 2, stdin);
    system("clear");

    printf("\n\t-=-=-=-=-=-=-ANSWERS-=-=-=-=-=-=-=");

    printf("\n\t\tOPTION 1: %c", optionQuestion[0][0]); 
    printf("\n\t\tOPTION 2: %c", optionQuestion[1][0]);
    printf("\n\t\tOPTION 3: %c", optionQuestion[2][0]);

    printf("\n\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    ver=verication(optionQuestion,  Ans, option, theme);
    Results=points(optionQuestion,  Ans, option, theme);

    if(ver==1){
        printf("\nCongrats!!! :D");
        printf("\nYou reached %d points", Results);
        cleanBuffer();
    }    
    else {
        printf("\nYou may answered some questions wrong. Well, you failed!!");
        printf("\nYou reached %d points", Results);
        cleanBuffer();
    }    
}

void questionMath(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int verMath, Results;
    char op;

    system("clear");
    printf("1-Look at this series: 12, 11, 13, 12, 14, 13, … What number should come next?\n");
    printf("\nA. 10\n");
    printf("B. 16\n");
    printf("C. 13\n");
    printf("D. 15\n");

    printf("\n\t\tOPTION 1: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[0], 2, stdin);
    system("clear");

    printf("\n2-What are the roots of this expression:");
    printf("\n\t\tx²=16x-8\n");
    printf("\nA. 5.2, 7\n");
    printf("B. 1/3, 27\n");
    printf("C. 2, 1\n");
    printf("D. 2, 4\n");

    printf("\t\tOPTION 2: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[1], 2, stdin);
    system("clear");

    printf("\n3-If we roll a perfect die, what is the probability\nthat a number less than 3 will roll?\n");
    printf("\nA. 3\n");
    printf("B. 3/4\n");
    printf("C. 1/2\n");
    printf("D. 2/3\n");

    printf("\t\tOPTION 3: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[2], 2, stdin);
    system("clear");

    printf("\n\t-=-=-=-=-=-=-ANSWERS-=-=-=-=-=-=-=");

    printf("\n\t\tOPTION 1: %c", optionQuestion[0][0]); 
    printf("\n\t\tOPTION 2: %c", optionQuestion[1][0]);
    printf("\n\t\tOPTION 3: %c", optionQuestion[2][0]);

    printf("\n\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    Results=points(optionQuestion,  Ans, option, theme);
    verMath=verication(optionQuestion,  Ans, option, theme);

    if(verMath==1){
        printf("\nCongrats!!! :D");
        printf("\nYou reached %d points", Results);
        cleanBuffer();
    }    
    else {
        printf("\nYou may answered some questions wrong. Well, you failed!!");
        printf("\nYou reached %d points", Results);
        cleanBuffer();
    }    
}

void questionPhysic(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int ver, Results;
    char op;
	
	system("clear");
	
	printf("1-What is the speed of light and sound through air?\n");
	printf("\nA. 350 million meters per second and 400 meters per second .\n");
    printf("B. 300 million meters per second and 340 meters per second\n");//
    printf("C. 100 million kilometers per hour and 350 kilometers per hour\n");
    printf("D. 350 million kilometers per hour and 200 kilometers per hour\n");

    printf("\t\tOPTION 1: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[0], 2, stdin);
    system("clear");
	
	printf("\n2-how long does it take for sunlight to reach Earth");
	printf("\n\nA. 10 minutes\n");
    printf("B. 5 minutes and half\n");
    printf("C. 13 minutes and 30 seconds\n");
    printf("D. 8 minutes and 20 seconds\n");

    printf("\t\tOPTION 2: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[1], 2, stdin);
    system("clear");
	
	printf("\n\n3-What happens to your body temperature in space\n");
	printf("\n\nA. during the first two and a half months of a stay in space, the body's core temperature gradually rises until stabilizing at about 100.4 degrees\n");
    printf("\n\nB. during the first two and a half months of a stay in space, the body's core temperature gradually decreases until stabilizing at about -80.5 degrees");
    printf("\n\nC. during the first four and a half years of a stay in space, the core body temperature gradually decreases until it stabilizes at about 100.4 degrees.\n");
    printf("\n\nD. during the first two and a half months of a stay in space, the body's core temperature gradually rises until stabilizing at about 1000.4 degrees.\n");
	
    printf("\t\tOPTION 3: ");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {};
    fgets(optionQuestion[2], 2, stdin);
    system("clear");

    printf("\n\t-=-=-=-=-=-=-ANSWERS-=-=-=-=-=-=-=");

    printf("\n\t\tOPTION 1: %c", optionQuestion[0][0]); 
    printf("\n\t\tOPTION 2: %c", optionQuestion[1][0]);
    printf("\n\t\tOPTION 3: %c", optionQuestion[2][0]);

    printf("\n\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    Results=points(optionQuestion,  Ans, option, theme);
    ver=verication(optionQuestion,  Ans, option, theme);

    manssage_Score(ver, Results);
}

int verication(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int count=0;

    ChooseTheme(Ans,option, theme);

    for(int i=0; i<Question; i++){
        if(optionQuestion[i][0]==theme[i][0])
            count=1+count;
    }

    if(count==3)
        return 1;
    else
        return 0;
}

void cleanBuffer(){
    char op;
    printf("\n\n................Press <ENTER> to continue...................");
    while( (op = fgetc(stdin)) != EOF && op != '\n') {}
    getchar( );
    system("clear");
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

void Menu() {
    
    printf("\t\t      *********************");
    printf("\n\t\t\t     WELCOME");
    printf("\n\t\t\t       to");
    printf("\n\t\t\t     MY GAME");
    printf("\n\t\t      *********************\n");

    printf("\n\t\t\t  -=--=QUIZ=--=-\n");
    printf("\t\t _________________________________\n");
    printf("\t\t  >Press  <1> to MATH");
    printf("\n\t\t  >Press  <2> to PHYSICS");
    printf("\n\t\t  >Press  <3> to General knowlodge");
    printf("\n\t\t  >Press  <4> to EXIT!");
    printf("\n\t\t  >Press  <5> to SCORE");
    printf("\n\t\t __________________________________");
    printf("\n\nChoose a theme");
    printf("\nOption: ");
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

void manssage_Score(int ver, int Score){
    
    if(ver==1){// Para todas a repostas corretas
        printf("\nCongrats!!! :D");
        printf("\nYou reached %d points", Score);
        cleanBuffer();
    }    
    else {
        printf("\nYou may answered some questions wrong. Well, you failed!!");
        printf("\nYou reached %d points", Score);
        cleanBuffer();
    }    
}