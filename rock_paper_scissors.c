#include<stdio.h>
void inputs(int x,int y);

int main (){
   int a,b;

    printf ("\n\n");
    printf ("LET'S PLAY ROCK PAPER SCISSORS!\n\n");
    printf ("A player must choose a number for a character as given below :\n \n");
    printf ("rock : 1  paper: 2  scissors: 3 \n\n");
   
   inputs(a,b);
 
}
    
void inputs(int x,int y){
    
    printf ("Let us get the inputs for player 1 and player 2 respectively :\n");
     scanf ("%d",&x);
    scanf (" %d",&y);
   
    if (x==1){
        printf ("player 1 entered 'ROCK' \n");
    }
    else if(x==2){
        printf ("player 1 entered 'PAPER'\n");

    }
    else if (x==3){
        printf ("player 1 entered 'SCISSORS'\n");

    }
    else {
        printf ("enter the assigned number");
    }
    
    if(y==1){
         printf ("player 2 entered 'ROCK' \n");
    }
    else if(y==2){
         printf ("player 2 entered 'PAPER'\n");

    }
    else if (y==3){
        printf ("player 2 entered 'SCISSORS'\n");

    }
    else {
        printf ("enter the assigned number");
    }



    if (x==1 && y==3 || x==2 && y==1 || x==3 && y==2){
        printf ("        \n                         PLAYER 1 IS THE WINNER!!!     ");

        }
    else if  (y==1 && x==3 || y==2 && x==1 || y==3 && x==2){
    
     printf  ("        \n                          PLAYER 2 IS THE WINNER!!!      ");
    }
    
    else {
        printf ("           \n                RESULT  :::   DRAW          ");
    }
   
    
}