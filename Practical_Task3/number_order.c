#include<stdio.h>
void sort_num(int num1, int num2, int num3);

int main() 
{
    int num1, num2, num3;
    int pos1, pos2, pos3;
    
    printf("Enter num1 = \n");
    scanf("%d" ,&num1);
    printf("Enter num2 = \n");
    scanf("%d" ,&num2);
    printf("Enter num3 = \n");
    scanf("%d" ,&num3);
   sort_num( num1,num2,num3);
    
    return 0;
}

    
    void sort_num(int num1, int num2, int num3)
    {
        int pos1, pos2, pos3, c1, c2;
        if ((num1) < (num2))
        {
           pos1 = num1;
           pos2 = num2;
        }
        else
        {
            pos2 = num1;
            pos1 = num2;
        }
        if (( pos2) < (num3))
        {
            pos2 = pos2;
            pos3 = num3;
        }
        else
        {
            pos3 = pos2;
            pos2 = num3;
        }
       
        if (pos1>pos2)
        {
            c2 = pos1;
            c1 = pos2;
            pos2 = c2;
            pos1 = c1;
        }
       
        printf(" Ascending oder is - %d %d %d \n",pos1, pos2, pos3);
        printf(" Descending oder is - %d %d %d \n",pos3, pos2, pos1);
     
        
    }
