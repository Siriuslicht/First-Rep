#include<stdio.h>
int main (){
    int     roomnum    = 9;
    double  velocity = 25.54;
    char    currency[] = "sums";
    char    place[]  = "Ohio";

    printf("it's afternoon already. always wanted to go to %s\n", place);
    printf("finally, i got there after two weeks. the speed of the cars are significantly slower than those of my country's. about %fkm/h\n", velocity );
    printf("after we stopped at a small hotel called Barny's, i took a room numbered %d.\nof course i paid for room in %s\n", roomnum, currency);


    return 0;
}
