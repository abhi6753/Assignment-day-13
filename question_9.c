//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
#include<conio.h>
int count_digit(int);
int main()
{
    int num;
    printf("Enter number to count its digit:\n");
    scanf("%d",&num);
    printf("%d digit",count_digit(num));
    getch();
    return 0;
}
int count_digit(int num)
{
   if(num/10!=0)
   {
     return 1 + count_digit(num/10);
   }
   else
   return 1;   
}