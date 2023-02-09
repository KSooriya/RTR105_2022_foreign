#include<stdio.h>
int main()
{
    char num;
    printf("Enter a natural number :");
    scanf("%hhd", &num);
    
    int i;
    printf("Binary code : ");
    for(i = 7; i >= 0; i--){
        printf("%d", (num >> i) & 1);
    }
    
printf("\n");
    return 0;
}
