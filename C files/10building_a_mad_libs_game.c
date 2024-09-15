#include <stdio.h>
int main(){

    char name1[20];
    char name2[20];
    char name3[20];
    char name4[20];

    printf("Enter a countryname: ");
    scanf("%s", name1);
    printf("Enter a cityname:");
    scanf("%s", name2);
    printf("Enter villagename:");
    scanf("%s", name3);
    printf("Enter a place:");
    scanf("%s", name4);

    printf("Grindelwald is located in %s\n", name1);
    printf("the video of %s is taken and uploaded on youtube\n", name2);
    printf("you must have been in %s for 2 weeks\n", name3);
    printf("and eventually, %s had got me into my dreams", name4);


    return 0;

}