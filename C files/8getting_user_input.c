#include<stdio.h>
int main(){

    int num1;
    double score;
    char punct;
    char level[20];

    printf("choose the punct you want to study in:");
    scanf("%c", &punct);
    printf("what number of room you want to study in:");
    scanf("%d", &num1);
    printf("what score do you want to attain:");
    scanf("%lf", &score);
    printf("what level are you in:");
    scanf("%s", level);
    printf("you are assigned to the course.");

    
    return 0;
}