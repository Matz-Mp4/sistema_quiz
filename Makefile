all: QuizView QuizController QuizModel QuizApp
	
QuizView: QuizView.c QuizView.h
	gcc -c QuizView.c
QuizController: QuizController.c QuizController.h
	gcc -c QuizController.c
QuizModel: QuizModel.c QuizModel.h
	gcc -c QuizModel.c
QuizApp: QuizApp.c QuizView.o QuizController.o QuizModel.o
	gcc -o Quiz QuizApp.c QuizView.o QuizController.o QuizModel.o
	



