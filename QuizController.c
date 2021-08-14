#include "QuizController.h"

void QuizController(){
    
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
                cleanScreen();
            break;

            default:
                printf("Opps!!! Voce deve ter digitado algo errado!");
                cleanScreen();
        }
    }while(Exit==false);


  
}