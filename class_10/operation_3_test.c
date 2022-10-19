#include<stdio.h>

int main()
{
double  f1,f2;
 printf("\n%.1f (%ld bytes) %c %.2f (%ld bytes)",f1,sizeof(f1),'%',f2,sizeof(f2));
 printf("\n%.1f (%ld bytes) %% %.2f (%ld bytes)",f1,sizeof(f1),f2,sizeof(f2));
 printf(" = %.1f (%ld bytes)\n\n",f1%f2,sizeof(f1%f2));
 78 % 65 -> 13
 999 % 1000 -> 999
return 0;
}
   // we can't do this operation in c language, it is ("Prohibited") (but in other languages we can do)
