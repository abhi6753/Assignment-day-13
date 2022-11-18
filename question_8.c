//8. Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
#include<conio.h>
int Fib(int);
//int t0 =-1;
//int t1 = 1;  //Global declaration
//int t2;
int main()
{
    int term,i;
    
    printf("Enter number of terms to print first N terms of Fibonacci series:\n");
    scanf("%d",&term);
    printf("%d first term of Fibonacci series are:\n",term);
    for(i=0;i<term;i++)
    {
      printf("%d ",Fib(i));
    }
    getch();
    return 0;
}
int Fib(int term)
{
  if(term==0||term==1)
  {
    return term;
  }
  return Fib(term-1)+Fib(term-2);
  /*if(term>=1)
  {
    Fib(term-1);
    t2 = t0+t1;
    printf("%d ",t2);   //My Logic
    t0 = t1;
    t1 = t2;
  }*/

}