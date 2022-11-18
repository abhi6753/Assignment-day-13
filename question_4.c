//4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
#include<conio.h>
int SquareOfNatural_Sum(int );
int main()
{
    int N;
    printf("Enter number to claculate sum of squares of first n natural numbers:\n");
    scanf("%d",&N);
    printf("Sum of sqaures of first %d natural number is %d ",N,SquareOfNatural_Sum(N));
    getch();
    return 0;
}
int SquareOfNatural_Sum(int N)
{
    if(N==1)
    {
        return 1;
    }
    return N*N+SquareOfNatural_Sum(N-1);
}