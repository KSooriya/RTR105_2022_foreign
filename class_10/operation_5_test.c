#include<stdio.h>
 int main()
{

  char c1;
  float f1;
 printf("\n%d (%ld bytes) -> !%d=%d (%ld bytes)\n",c1,sizeof(c1),c1,!c1,sizeof(!c1));
 c1 = 0;
 printf("\n%d (%ld bytes) -> !%d=%d (%ld bytes)\n",c1,sizeof(c1),c1,!c1,sizeof(!c1));
 //printf("\n%.1f (%ld bytes) -> !%.1f=%.1f (%ld bytes)\n\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));
 printf("\n%.1f (%ld bytes) -> !%.1f=%d (%ld bytes)\n\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));
 f1 = 0.0000001;
 printf("\n%e (%ld bytes) -> !%e=%d (%ld bytes)\n\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));
 f1 = 3.8e-40;
 printf("\n%e (%ld bytes) -> !%e=%d (%ld bytes)\n\n",f1,sizeof(f1),f1,!f1,sizeof(!f1));
 
return 0;
}
