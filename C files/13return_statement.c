#include <stdio.h>

int sugar(int suffer){
    int result = suffer + suffer + suffer;
    return result;
}

int main(){

    printf("Answer: %d", sugar(5));

    return 0;
}