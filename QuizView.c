#include "QuizModel.h"
#include "QuizView.h"


void cleanScreen(){
    printf("\n\n................Press <ENTER> to continue...................");
    cleanBuffer();
    getchar( );
    system("clear");
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

void questionGK(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int verGK, Score;
    char op;

    system("clear");

    printf("Which hardware was used in the First Generation Computer?");
	printf("\n\nA.Transistor\nB.Valves\nC.I.C\nD.S.S.I");

    printf("\n\t\tOPTION 1: ");
    cleanBuffer();
    fgets(optionQuestion[0], 2, stdin);
    system("clear");
    printf("Which city in the world is popularly known as The City of Temple?");
	printf("\n\nA.Delhi\nB.Bhaktapur\nC.Kathmandu\nD.Agra\n\n");

    printf("\n\t\tOPTION 2: ");
    cleanBuffer();
    fgets(optionQuestion[1], 2, stdin);
    system("clear");

    printf("Wind speed is measure by__________?");
	printf("\n\nA.Lysimeter\nB.Air vane\nC.Hydrometer\nD.Anemometer\n\n");

    printf("\n\t\tOPTION 3: ");
    cleanBuffer();
    fgets(optionQuestion[2], 2, stdin);
    system("clear");

    printf("\n\t-=-=-=-=-=-=-ANSWERS-=-=-=-=-=-=-=");

    printf("\n\t\tOPTION 1: %c", optionQuestion[0][0]); 
    printf("\n\t\tOPTION 2: %c", optionQuestion[1][0]);
    printf("\n\t\tOPTION 3: %c", optionQuestion[2][0]);

    printf("\n\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    verGK=verification(optionQuestion,  Ans, option, theme);
    Score=points(optionQuestion,  Ans, option, theme);

    message_Score(verGK,  Score);
}

void questionMath(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int verMath, Score;
    char op;

    system("clear");
    printf("1-Look at this series: 12, 11, 13, 12, 14, 13, … What number should come next?\n");
    printf("\nA. 10\n");
    printf("B. 16\n");
    printf("C. 13\n");
    printf("D. 15\n");

    printf("\n\t\tOPTION 1: ");
    cleanBuffer();
    fgets(optionQuestion[0], 2, stdin);
    system("clear");

    printf("\n2-What are the roots of this expression:");
    printf("\n\t\tx²=16x-8\n");
    printf("\nA. 5.2, 7\n");
    printf("B. 1/3, 27\n");
    printf("C. 2, 1\n");
    printf("D. 2, 4\n");

    printf("\t\tOPTION 2: ");
    cleanBuffer();
    fgets(optionQuestion[1], 2, stdin);
    system("clear");

    printf("\n3-If we roll a perfect die, what is the probability\nthat a number less than 3 will roll?\n");
    printf("\nA. 3\n");
    printf("B. 3/4\n");
    printf("C. 1/2\n");
    printf("D. 2/3\n");

    printf("\t\tOPTION 3: ");
    cleanBuffer();
    fgets(optionQuestion[2], 2, stdin);
    system("clear");

    printf("\n\t-=-=-=-=-=-=-ANSWERS-=-=-=-=-=-=-=");

    printf("\n\t\tOPTION 1: %c", optionQuestion[0][0]); 
    printf("\n\t\tOPTION 2: %c", optionQuestion[1][0]);
    printf("\n\t\tOPTION 3: %c", optionQuestion[2][0]);

    printf("\n\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    Score=points(optionQuestion,  Ans, option, theme);
    verMath=verification(optionQuestion,  Ans, option, theme);
    
    message_Score(verMath,  Score);
}

void questionPhysic(char optionQuestion[Question][2], Answers Ans[3][Question], int option, char theme[NUMBER_THEME][2]) {
    int verPhysic, Score;
    char op;
	
	system("clear");
	
	printf("1-What is the speed of light and sound through air?\n");
	printf("\nA. 350 million meters per second and 400 meters per second .\n");
    printf("B. 300 million meters per second and 340 meters per second\n");//
    printf("C. 100 million kilometers per hour and 350 kilometers per hour\n");
    printf("D. 350 million kilometers per hour and 200 kilometers per hour\n");

    printf("\t\tOPTION 1: ");
    cleanBuffer();
    fgets(optionQuestion[0], 2, stdin);
    system("clear");
	
	printf("\n2-how long does it take for sunlight to reach Earth");
	printf("\n\nA. 10 minutes\n");
    printf("B. 5 minutes and half\n");
    printf("C. 13 minutes and 30 seconds\n");
    printf("D. 8 minutes and 20 seconds\n");

    printf("\t\tOPTION 2: ");
    cleanBuffer();
    fgets(optionQuestion[1], 2, stdin);
    system("clear");
	
	printf("\n\n3-What happens to your body temperature in space\n");
	printf("\n\nA. during the first two and a half months of a stay in space, the body's core temperature gradually rises until stabilizing at about 100.4 degrees\n");
    printf("\n\nB. during the first two and a half months of a stay in space, the body's core temperature gradually decreases until stabilizing at about -80.5 degrees");
    printf("\n\nC. during the first four and a half years of a stay in space, the core body temperature gradually decreases until it stabilizes at about 100.4 degrees.\n");
    printf("\n\nD. during the first two and a half months of a stay in space, the body's core temperature gradually rises until stabilizing at about 1000.4 degrees.\n");
	
    printf("\t\tOPTION 3: ");
    cleanBuffer();
    fgets(optionQuestion[2], 2, stdin);
    system("clear");

    printf("\n\t-=-=-=-=-=-=-ANSWERS-=-=-=-=-=-=-=");

    printf("\n\t\tOPTION 1: %c", optionQuestion[0][0]); 
    printf("\n\t\tOPTION 2: %c", optionQuestion[1][0]);
    printf("\n\t\tOPTION 3: %c", optionQuestion[2][0]);

    printf("\n\t-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    Score=points(optionQuestion,  Ans, option, theme);
    verPhysic=verification(optionQuestion,  Ans, option, theme);

     message_Score(verPhysic,  Score);
}

void message_Score(int ver, int Score){
    
    if(ver==1){// Para todas a repostas corretas
        printf("\nCongrats!!! :D");
        printf("\nYou reached %d points", Score);
        cleanScreen();
    }    
    else {
        printf("\nYou may answered some questions wrong. Well, you failed!!");
        printf("\nYou reached %d points", Score);
        cleanScreen();
    }    
}
