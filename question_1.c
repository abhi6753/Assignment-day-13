//1. Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
int NaturalSum(int);
int main()
{
    int N;
    printf("Enter number to calculate sum of first N natural numbers:\n");
    scanf("%d",&N);
    printf("sum of first %d natural number is: %d",N,NaturalSum(N));
    getch();
    return 0;
}
int NaturalSum(int N)
{
    if(N==1)
     return 1;
    return N + NaturalSum(N-1);
}