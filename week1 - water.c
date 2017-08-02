#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt the user to enter how many minutes they shower
    printf("How how many minutes are you in the shower?: ");
    int t = get_int();

    //returns to the user how long their shower took and how many bottles of water it used
    printf("Your shower takes %i minutes\n", t);
    printf("It uses %i bottles of water\n", t * 12);
}
