//  Name:   Michael Nguyen
//  Class:  CSE 3318 Data Structures and Algorithms
//  Lab:    1


#include<stdio.h>

int main(void)
{
    int num = 4;

    int total = 0;

    printf("\ntesting testing. I hope this works to o and how about now\n");

    printf("\nWhat is the number stored in computer? ");

    scanf("%d", &total);

    printf("\nThe stored number is %d", num);

    if(total == num)
    {
        printf("\nThe number you guessed %d is correct\n\n", total);
    }
    else
    {
        printf("\nSorry, the number you guessed, %d, is not the same as the number in the computer, %d\n\n,", total, num);
    }

printf("\n\nTry again later\n");


    return 0;
}
