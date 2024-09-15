#include <stdio.h>
int main(){
    
        printf("working with number!\n");
    
    // \n is actually important

        printf("%d\n", 20);
    // or
        int less = 20;
        printf("%d\n", less);
    //both work;


    
        printf("%d\n", 12 / 3);  //%d 
    
        printf("%d\n", 12 / 5);  // %d: and answer is 2 without decimals
    
        printf("%.2f\n", 12 + 5.4); 
    /* note that if you want specific answer with decimal numbers 
     %f works here: 3 + 3.3 */

    
         printf("%.2f\n", pow(12, 2) );
    // note that when you are playing with math symbols, %f has to be used. 

        printf("%.2f\n", sqrt(25) );
    
        printf("%.2f\n", ceil(99.1) );
    // "ceil" stands for ceiling of the number

        printf("%.2f", floor(100.9) ); 
    // "floor" stands for the floor of the number

    


    return 0;
}