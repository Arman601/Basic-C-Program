#include<stdio.h>
int sum(int a,int b){
    int c = a+b;
    return c;    
}

int main()
{
    int num1,num2;
    printf("Enter  The first number: ");
    scanf("%d",&num1);
    printf("Enter The second number: ");
    scanf("%d",&num2);
    printf("the sum is: = %d",sum(num1,num2));
    return 0;
}