#include<stdio.h>

int main()

{ 
int i1=5,i2=6,ir;
printf("i1=5   i2=6\n");
ir = i1 + i2;
printf("ir= i1 + i2 =  %d\n",ir);
ir +=10;
printf("ir + 10  = %d\n",ir);  
ir++;
printf("ir + 1 = %d\n",ir);
printf(" ir << 16= , %d (%ld bytes)\n",ir<<16,sizeof(ir));

return 0;
}
