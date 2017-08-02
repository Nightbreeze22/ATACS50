#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //provisioning h as global variable to track pyramid height
    int h = 0;

    //check to determine that the user entered a non-negative number for pyramid height
    bool isLess = false;
    while (!isLess){
        printf("Please enter a height for your pyramid that doesn't exceed 23: \n");
        h = get_int();
        if (h <= 23 && h >= 0){
            isLess = true;
        }
    }
    //confirming for the user the value they entered
    printf("You entered:  %i\n", h);

    //loop that determines the height of the pyramid by controlling the number of interations of the nested loops
    for (int j = 0; j < h; j++){
        //loop to pad the front of the pyramid with spaces
        for (int k = j+1; k < h; k++){
            printf(" ");
        }
        //loop to construct hastag blocks for the pyramid rows
        for (int i = (h-j); i < h + 2; i++){
            printf("#");
        }
        printf("\n");
    }


    printf("\n");
}
