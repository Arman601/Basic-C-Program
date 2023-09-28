#include<stdio.h>
int factorial(int n){
    if(n<=1)
    return 1;
    return n*factorial(n-1);
};

//step by step calculatin of factorial(4)
// factorial(4) =  4 * factorial(3);
// factoria(4)  =  4 * 3 * factorial(2);
// factorial(4) =  4 * 3 * 2 * factorial(1);
// facorial(4)  =  4 * 3 * 2 * 1;
// factorial(4) =  24;
int main()
{
    int a;
    printf("Enter the the Number : ");
    scanf("%d",&a);
    printf("the factorial of a   = %d",factorial(a));
    return 0;

}