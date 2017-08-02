#include <stdio.h>
#include <cs50.h>

int main(void){

    bool isPositive = false;
    float amount = 0;

    printf("Oh hai! ");
    while(!isPositive){
        printf("How much change is owed?: ");
        amount = get_float();
            if (amount > 0){
                isPositive = true;
            }
    }

    int total = amount * 100;
    int cents = total % 100;
    int changeCount = 0;
    bool div25 = false;
    bool div10 = false;
    bool div5 = false;
    bool isZero = false;

    while (!div25){
        if(cents - 25 >= 0){
            cents = cents - 25;
            changeCount = changeCount + 1;
        }
        else {
            div25 = true;
        }
    }

    while (!div10){
        if(cents - 10 >= 0){
            cents = cents - 10;
            changeCount = changeCount + 1;
        }
        else {
            div10 = true;
        }
    }

    while (!div5){
        if(cents - 5 >= 0){
            cents = cents - 5;
            changeCount = changeCount + 1;
        }
        else {
            div5 = true;
        }
    }

    while (!isZero){
        if(cents - 1 >= 0){
            cents = cents - 1;
            changeCount = changeCount + 1;
        }
        else {
            isZero = true;
        }
    }
    printf("%i\n", changeCount);

}
