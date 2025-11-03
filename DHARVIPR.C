#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main () {
clrscr();
int number, Guess, attempts = 0;
srand(time(NULL));
number = (rand() % 100)+1;
printf("Welcome to the number guessing game: \n");
printf("Guess a number between 1 to 100: \n");
do{
printf("Enter your Guess");
scanf("%d",&Guess);
attempts++;
if(Guess > number){
printf("Too High! Try Again: \n");
}
else if(Guess < number){
printf("Too Low! Try Again: \n");
}else{
printf("Congratulations!You guessed the righ number %d in %d attempts: \n",number, attempts);
}
}while(Guess != number);
getch();
return 0;
}