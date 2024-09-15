#include <stdio.h>

void venture(double first, int second, char third[]){
    printf("the amount of grass brought was %.1f kg\n", first);
    printf("the number of people who came to conference was %d\n", second);
    printf("the name of our CEO was %s\n", third);
}
int main (){
    venture(84.3, 56, "Axmad");
    return 0;
}