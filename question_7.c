//7. Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
#include<conio.h>
int HCF(int,int);
int main()
{
    int a,b;
    printf("Enter two number to calculate its HCF:\n");
    scanf("%d%d",&a,&b);
    printf("HCF of %d and %d is %d",a,b,HCF(a,b));
    getch();
    return 0;
}
int HCF(int a, int b)
{   
    if(a>b)
    {
        if(a%b==0)
        {
            return b;
        }
        HCF(a%b,b);
    }
    else
    {
        if(b%a==0)
        {
            return a;
        }
        HCF(a,b%a);
    }
       
}
