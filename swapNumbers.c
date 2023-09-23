#include<stdio.h>
void swappointers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;


};
int main()
{
    int a = 10, b = 20;
    printf("BEFORE SWAP\n");
    printf("the value of a  = %d\n",a);
    printf("the value of b =  %d\n",b);
    printf("AFTER SWAP\n");
    swappointers(&a,&b);
    printf("the value of a = %d\n",a);
    printf("the value of b  = %d\n",b);
    
    return 0;

}