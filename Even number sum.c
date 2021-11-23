#include<stdio.h>
int main()
{
    int number,sum = 0,i;
    printf("Enter number of terns is :");
    scanf("%d",&number);
    printf("The even number is :");
    for(i=1;i<=number;i++)
    {
        printf("%d ",2*i);
        sum = sum + 2*i;
    }
    printf("\ntotal sum is : %d\n",sum);
    getch();
}
