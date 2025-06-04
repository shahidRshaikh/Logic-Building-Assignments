// Input : 5
// Output : 5 # 4 # 3 # 2 # 1# 
#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 0; i >= iNo; i--)
    {
        printf("%d #", i);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number of elements :");
    scanf("%d %d",&iValue);

    Pattern(iValue);
    return 0;
}