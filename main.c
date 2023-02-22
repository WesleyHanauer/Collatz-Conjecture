#include <stdio.h>

int main(void){
    int x;
    while(1){
        printf("Enter an integer number: ");
        if(scanf("%d", &x) != 1){
            printf("Invalid input. Please enter an integer number.\n");
            while(getchar() != '\n');
        }
        else{
            break;
        }
    }

    while(x != 1){
        if(x%2==0){
            x = x/2;
            printf("%i\n", x);
        }
        else{
            x = x*3+1;
            printf("%i\n", x);
        }
    }
}