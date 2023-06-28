/**********************************    PROJECT 2 (Snake Water Gun)         ***********************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakeWaterGun(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // gg
    // ww
    if(you == comp){
        return 0;   //match draw
    }

    // Non-draw conditions
    // Cases covered:
    // sg
    // gs
    // sw 
    // ws
    // gw
    // wg
    

    if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }


    if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }


    if(you=='g' && comp=='w'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }

}
int main(){

    char you, comp;

    //random number generator
    srand(time(0));

    int number = rand()%100 + 1;


    if(number<33){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
      printf("\n\nSnake Vs Gun : Winner: Gun\n");
    printf("Snake Vs Water : Winner: Snake\n");
    printf("Water Vs Gun : Winner: Water\n\n");
    printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
  

    scanf("%c", &you);

    int result = snakeWaterGun(you, comp);


    if(result ==0){
        printf("Game draw!\n\n");
    }

    else if(result==1){
        printf("You win!\n\n");
    }

    else{
        printf("You Lose!\n\n");
    }


    printf("You chose %c and computer chose %c. \n\n", you, comp);
    return 0;
}