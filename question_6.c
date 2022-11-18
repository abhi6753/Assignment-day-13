//6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
#include<conio.h>
int Fact(int );
int main()
{
    int num;
    printf("Enter number to calculate its factorial:\n");
    scanf("%d",&num);
    printf("%d! = %d",num,Fact(num));
    getch();
    return 0;
}
int Fact(int num)
{
    if(num==0||num==1)
      return 1;
    return num * Fact(num-1);
}