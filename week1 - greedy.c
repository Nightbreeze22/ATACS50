#include <stdio.h>
#include <cs50.h>

int make_change(int n, int c, int cc);
int count(int n, int c, int cc);

int main(void){
    bool isPositive = false;
    float amount = 0;

    //loop to ensure user enters a positive float
    printf("Oh hai! ");
    while(!isPositive){
        printf("How much change is owed?: ");
        amount = get_float();
            if (amount > 0){
                isPositive = true;
            }
    }

    //global variables to change float into int, and to make sure that any multiple of 100 (whole dollar amt.) is discarded
    int total = amount * 100;
    int cents = total % 100;
    int changeCount = 0;

    //calling function outlined in make_change, passing coin type divisor, change amount, and count of coins for coin type
    int qcents = make_change(25, cents, changeCount);
    int qchangeCount = count(25, cents, changeCount);
    int dcents = make_change(10, qcents, qchangeCount);
    int dchangeCount = count(10, qcents, qchangeCount);
    int ncents = make_change(5, dcents, dchangeCount);
    int nchangeCount = count(5, dcents, dchangeCount);
    int pchangeCount = count(1, ncents, nchangeCount);

    printf("%i\n", pchangeCount);

}

//function to determine the number of coins needed to make change for a given coin type
int count(int n, int c, int cc){

    bool divCheck = false;
    while (!divCheck){
        if(c - n >= 0){
            c = c - n;
            cc = cc + 1;
        }
        else {
            divCheck = true;
        }
    }
    return cc;
}

//function that determines the remaining change amount to be passed to the next coin type
int make_change(int n, int c, int cc){

    bool divCheck = false;
    while (!divCheck){
        if(c - n >= 0){
            c = c - n;
            cc = cc + 1;
        }
        else {
            divCheck = true;
        }
    }
    return c;
}
