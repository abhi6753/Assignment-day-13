//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
#include<conio.h>
int i;
int power(int ,int);
int main()
{
    int num,expo;
    printf("Enter a base number and exponent\n");
    scanf("%d %d",&num,&expo);
    printf("[%d]^%d = %d",num,expo,power(num,expo));
    getch();
    return 0;
}
int power(int num,int expo)
{
    i++;
    if(i==expo)
    {   
        return num;
    }
    else
    {
        return num*power(num,expo);
    }
}
    
