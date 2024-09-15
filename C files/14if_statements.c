#include <stdio.h>
int surgery(int c1, int c2, int c3){
    int outcome;
    if (c1 >= c2 && c1 >= c3){
        outcome = c1;
    } else if(c2 >= c1 && c2 >= c3){
        outcome = c2;
    } else{
        outcome = c3;
    }     return outcome;
}
int main(){
    printf("%d", surgery(223, 123, 9));

    return 0;
}

 /* int main(){
    if (34 <= 10){
        printf("False")
    }
    return 0;
}
    int main(){
    if (!(23 < 1));
    printf("True");
    return 0;
}*/ 