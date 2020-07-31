/*The problem statement for this is to iterate over a sorted array of integers 
and print out the number of duplicates for each distinct integer
*/

// Includes
#include <stdio.h>
#include <stdlib.h>

//Declarations
int GetArrayLength(int intArray[], int sizeArray);

int main()
{
    // int array to test
    int testArray[] = {0, 1, 1, 2, 4, 5, 5, 5};
    int currVal = testArray[0];
    int currSum = 0;
    int currIndex = 0;
    int testArrayLen = GetArrayLength(testArray, sizeof(testArray)/sizeof(testArray[0]));
    //int tempValues[] = {(int) malloc(testArrayLen)};
    //int tempSums[] = {(int) malloc(testArrayLen)};

    int tempValues[50];
    int tempSums[50];
    for (int i = currIndex; i < 8; i++)
    {
        if (currVal < testArray[i])
        {
            tempValues[currIndex] = currVal;
            tempSums[currIndex] = currSum;
            currSum = 1;
            currIndex++;
            currVal = testArray[i];
        }
        else
        {
            currSum++;
        }
    }

    tempValues[currIndex] = currVal;
    tempSums[currIndex] = currSum;

    for (int i = 0; i < currIndex + 1; i++)
    {
        if (tempSums[i] == 1)
        {
            printf("There is %d instance of %d\n", tempSums[i], tempValues[i]);
        }
        else
        {
            printf("There are %d instances of %d\n", tempSums[i], tempValues[i]);
        }
    }
    //free(tempValues);
    //free(tempSums);
}


int GetArrayLength(int intArray[], int sizeArray)
{
    int i = 0;
    return (int) (sizeArray/sizeof(intArray[0]));
}
