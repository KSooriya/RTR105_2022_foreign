#include<stdio.h>

int main()

{


//char c1 = 1; // 0000 0001 (3 dec 0000 0011 << 3 -> 0001 1000 -> 24 dec)
// c1 = 0;
// printf("\n%d (%ld bytes) << %d (%ld bytes)",c1,sizeof(c1),c1,sizeof(c1));
// printf(" = %d (%ld bytes)\n",c1<<c1,sizeof(c1<<c1)); // 0000 0001 (1 dec)
// c1 = 1;
 //printf("%d (%ld bytes) << %d (%ld bytes)",c1,sizeof(c1),c1,sizeof(c1));
// printf(" = %d (%ld bytes)\n",c1<<c1,sizeof(c1<<c1)); // 0000 0010 (2 dec)

unsigned char c1, uc1 = 1; // 0000 0001 (3 dec 0000 0011 << 3 -> 0001 1000 -> 24 dec)
 c1 = 0;
 printf("\n%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0001 (1 dec)
 c1 = 1;
 printf("%d (%ld bytes) << %d (%ld bytes)",uc1,sizeof(uc1),c1,sizeof(c1));
 printf(" = %d (%ld bytes)\n",uc1<<c1,sizeof(uc1<<c1)); // 0000 0010 (2 dec)
 return 0;
}
