#include <stdio.h>
int main(){
    int main;
    int man;
    char cross;

    printf("Enter a number:");
    scanf("%d", &main);
    printf("Enter an operator:");
    scanf(" %c", &cross);
    printf("Enter a number:");
    scanf("%d", &man);
    
    if (cross == '-')
    {
        printf("%d", main - man);
    } 
    else if (cross == '+')
    {
        printf("%d", main + man);
    } 
    else if (cross == '/')
    {
        printf("%d", main / man);
    } 
    else if (cross == '*')
    {
        printf("%d", main * man);
    } 
    else
    {
        printf("Invalid operator");
    }

    return 0;
}
