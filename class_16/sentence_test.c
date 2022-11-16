#include <stdio.h>
#include <string.h>
#define N 100

  int main()
 {
    char sentence[N];
    int count =0;
   printf("Enter your sentence:  \n"); 
   


int  n = strlen(sentence);

for(int i = 0; i < n; i++)
 {
if(sentence[i]!= ' ')
count++;
 }



printf("your enterd sentence is (%d symbols):\n%s\n",n,sentence);

return 0;
 }


