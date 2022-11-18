//3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
int Even_sum(int);
int main()
{
    int num;
    printf("Enter number to calculate sum of first N even natural numbers:\n");
    scanf("%d",&num);
    printf("Sum of first %d even natural number is: %d",num,Even_sum(2*num));
    getch();
    return 0;
}
int Even_sum(int num)
{
   if(num==2)
   {   
       return 2;
   }
   return num + Even_sum(num-2);
}