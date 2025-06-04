/*
    Accept N numbers from user and return product of all odd element.

    Input   :   N   :    6
             
                Elements : 15   66   3   70   10   88
    
    Output  :   45      

    Input   :   N   :    6
              
                Elements : 44   66   72   70   10   88
    
    Output  :  0
*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMulti = 1;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2)  != 0 )
        {
            iMulti = iMulti * Arr[iCnt];   
        }
    }
    return iMulti;
}

int main()
{
    int iLenght = 0;
    int *Ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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

  iRet = Product(Ptr,iLenght);

  printf("Product of odd element is : %d", iRet);

    free(Ptr);

    return 0;
}