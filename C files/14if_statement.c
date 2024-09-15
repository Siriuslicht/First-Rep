#include <stdio.h>
int sapport(int zor1, int zor2){
    int outcome;                    //variable and it's name
    if (zor1 > zor2){               // comparing two parameters
        outcome = zor1;
    } else {
        outcome = zor2;
    }
    return outcome; 
}   
int main (){

    printf("%d", sapport(222, 444));

    return 0;
}

/*#include <stdio.h>
int surgery(int num1, int num2){

    int anato;

    if(num1 > num2){
        anato = num1;
    } else {
        anato = num2;
    }  return anato;

}
int main(){
    printf("%d", surgery(20, 22));

    return 0;
}*/