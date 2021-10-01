#include <stdio.h>
#include <stdlib.h> //used for calloc
//#define is used to name a constant in a block of code before the code is compiled.
#define SIXTY_FOUR 64


//This is NOT a binary search, this is a brute force search which naively looks
//for a target value in the array until found. This makes search space easy to predict
int mySearch(int* ary, int search, int len) {
    int ret = -1;
    //"for" is a loop that repeats a specific amount of times for a block of code under a specific condition.
    for (int i = 0; i < len; ++i) {
        //"if" is part of a loop block that asks a question to the code to check a statement.
        if (ary[i] == search) {
            return i;
        }
    }
    return ret;
}

int main()
{
    int x, y;

    //calloc routine allocates n amount of items of size s, and sets each
    //item to zero
    int* ary = (int*)calloc(SIXTY_FOUR, sizeof(int));

    ary[24] = 1; //assign enemy location to 1D  transformed map, remember values
    //go from 0-63

    int _1dPosition = mySearch(ary, 1, SIXTY_FOUR);
    x = _1dPosition / 8;
    y = _1dPosition % 8;

    if (_1dPosition != -1) {
        printf("found at %d in 1D\n", mySearch(ary, 1, SIXTY_FOUR));
        printf("or  at [%d, %d] in 2D", x, y);
    }
    else {
        printf("Enemy Not Found\n");
    }




    return 0;
}