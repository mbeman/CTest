/*The problem statement for this is to iterate over a sorted array of integers 
and print out the number of duplicates for each distinct integer
*/

// Includes
#include <stdio.h>
#include <stdlib.h>

//Declarations
//int GetArrayLength(int intArray[]);

int main()
{
    // int array to test
    int testArray[] = {0, 1, 1, 2, 4, 5, 5, 5};

    int currVal = -1;
    int currSum = 0;
    int currIndex = 0;
    //int testArrayLen = GetArrayLength(testArray);
    //int tempValues[] = {(int) malloc(testArrayLen)};
    //int tempSums[] = {(int) malloc(testArrayLen)};

    int tempValues[50];
    int tempSums[50];
    for (int i = currIndex; i < 8; i++)
    {
        if (currVal < testArray[i] && currIndex == 0)
        {
            currVal = testArray[i];
        }
        if (currVal == testArray[i])
        {
            currSum++;
        }
        else
        {
            tempValues[currIndex] = currVal;
            tempSums[currIndex] = currSum;
            currSum = 0;
            currIndex++;
        }
    }

    for (int i = 0; i < currIndex; i++)
    {
        printf("There are %d instances of %d\n", tempSums[i], tempValues[i]);
    }
    //free(tempValues);
    //free(tempSums);
}

/*
int GetArrayLength(int intArray[])
{
    return (int) (sizeof(intArray)/sizeof(intArray[0]));
}
*/