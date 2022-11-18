//5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
#include<conio.h>
int Sum_Of_Digit(int);
int main()
{
    int num;
    printf("Enter number to calculate sum of digits:\n");
    scanf("%d",&num);
    printf("Sum of %d is %d",num,Sum_Of_Digit(num));
    getch();
    return 0;
}

int Sum_Of_Digit(int num)
{
    if(num==0)
      return 0;
    return num%10 + Sum_Of_Digit(num/10);
}