#include <stdio.h>
int main (){
    double result = 12.0; // gave a variable
    while(result >= 1){   // defined our condition for executing the code
        printf("%.1f\n", result); //printf thing 
        result--;    // meaning that the variable will be substracted by 1 each time the code loops
    }

    return 0;
}
/*#include <stdio.h>
int main(){
    int ras;
    for(ras = 10; ras <= 13; ras++){
        printf("%d\n", ras);
    } return 0;
}
//note that we use semicolon to separate arguments unlike in while loops 
/* int main(){
    int ras = 12;
    while(ras <= 30){
    printf("%d", ras);
    ras++;
    }
return 0;
}*/