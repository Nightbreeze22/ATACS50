#include <stdio.h>
#include <cs50.h>

int main(void){
    int n = 0;
    bool isValid = false;
    while (!isValid){
        printf("Please enter a positive integer: ");
        n = get_int();
        if(n > 0){
            isValid = true;
        }
    }

    for (int i = 1; i <= n; i++){
        if(i % 3 == 0  && i % 5 == 0){
            printf("FizzBuzz!, ");
        }
        else if(i % 3 == 0){
            printf("Fizz, ");
        }
        else if(i % 5 == 0){
            printf("Buzz, ");
        }
        else{
            printf("%i, ", i);
        }
    }

    printf("\n");
}
