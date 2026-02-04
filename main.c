#include<stdio.h>

int add(int a,int b);
int sub(int a,int b);

int main()
{
    int num1,num2;

    printf("Enter the two values: ");
    scanf("%d %d",&num1,&num2);

    int Sum = add(num1,num2);
    int Sub = sub(num1,num2);

    printf("The addition is: %d\n",Sum);
    printf("The Subtraction is: %d",Sub);

    return 0;
}