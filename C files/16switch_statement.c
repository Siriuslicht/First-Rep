#include <stdio.h>
int main(){
    int chart = '3';

    switch(chart){
    case '1' :
        printf("Norm!");
        break;
    case '2' :
        printf("Great!");
        break;
    case '3' :
        printf("Splendid!");
        break;
    default  :
        printf("Default");}

    return 0;
}