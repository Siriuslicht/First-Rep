#include <stdio.h>
int main(){
    int secretnumber = 6;
    int guess; 
    int guessnumber = 0;
    int guesslimit = 3;
    int outofguesses = 0;

    while (guess != secretnumber && outofguesses == 0){
        if(guessnumber < guesslimit){
            printf("Enter a number:");
            scanf("%d", &guess);
            guessnumber++;
        } else {
            outofguesses = 1;
        }
    }  if (outofguesses == 1){
        printf("You Failed!");
    } else {
        printf("You Win!");
    }
    return 0;
}
// not simple
