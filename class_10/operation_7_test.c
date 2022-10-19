#include<stdio.h>

int main()

{
char c1;
unsigned char uc1;

c1 = 2;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0100 (4 dec)
 c1 = 3;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 c1 = 4;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 c1 = 5;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 c1 = 6;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 c1 = 7;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 //printf(" = %d (%ld bytes)\n",(char)uc1<<c1,sizeof((char)uc1<<c1)); // 0000 1000 (8 dec)
 printf(" = %d (%ld bytes)\n",(char)(uc1<<c1),sizeof((char)(uc1<<c1))); // 0000 1000 (8 dec)
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",(unsigned char)(uc1<<c1),sizeof((unsigned char)(uc1<<c1))); // 0000 1000 (8 dec)
 c1 = 31;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 1000 (8 dec)

 uc1 = 120; // 0111 1000
 c1 = 1;
 printf("\n%d (%ld bytes) >> %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1>>c1,sizeof(uc1>>c1)); // 0011 1100 (60 dec)
 c1 = 2;
 printf("%d (%ld bytes) >> %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1>>c1,sizeof(uc1>>c1)); // 0001 1110 (30 dec)
 c1 = 3;
 printf("%d (%ld bytes) >> %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1>>c1,sizeof(uc1>>c1)); // 0000 1111 (15 dec)
 

return 0;
}
