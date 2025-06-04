// input : 5
// output : A B C D

#include<stdio.h>

void Pattern(int iNo)
{
    char ch = 'A';
    for(int i = 0; i < iNo; i++)
    {
        printf("%c", ch + i);
    }
    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter number of elements :");
    scanf("%d %d",&iValue);

    Pattern(iValue);

    return 0;
}