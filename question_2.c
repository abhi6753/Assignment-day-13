//2. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
int Odd_SumNatural(int);
int main()
{
    int N;
    printf("Enter number to calculate sum of first N odd natural numbers:\n");
    scanf("%d",&N);
    printf("Sum of first %d odd natural number is: %d",N,Odd_SumNatural(2*N-1));
    getch();
    return 0;
}
int Odd_SumNatural(int num)
{
    if(num==1)
    {
        return 1;
    }
    return num + Odd_SumNatural(num-2);
}