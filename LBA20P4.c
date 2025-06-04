/*
    Accept N numbers from user and accept range,
    Display all elements from that range.

    Input   :   N   :    6
                Start  :    60
                End    :    90
                Elements : 85   66   3   76   93   88
    
    Output  :   66   76   88

    Input   :   N   :    6
                Start  :    30
                End    :    50
                Elements : 85   66   3   66   93   88
    
    Output  :  
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iStart < Arr[iCnt] && Arr[iCnt] < iEnd)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLenght = 0;
    int *Ptr = NULL;
    int iCnt = 0;
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of Element : \n");
    scanf("%d", &iLenght);

    Ptr =(int*)malloc(iLenght * sizeof(int));

    if(Ptr == NULL)
    {
        printf("Unable  to allocate Memory\n");
        return -1;
    }

    printf("Enter %d element \n",iLenght);
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        printf("Enter element : %d : ", iCnt+1);
        scanf("%d", &Ptr[iCnt]);
    }

    printf("\nEnter Start Range : \n");
    scanf("%d", &iValue1);

    printf("\nEnter End Range : \n");
    scanf("%d", &iValue2);

    Range(Ptr,iLenght,iValue1,iValue2);

    free(Ptr);

    return 0;
}