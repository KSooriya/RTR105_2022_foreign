
   
#include <stdio.h>
#include <string.h>
#define N 100
//void statistics();
int main()
{
    char sentence[N];
    printf("Enter some sentence: \n");
   // scanf("%s", sentence);
   //gets(sentence); 
    fgets(sentence,N-1,stdin);


    int n = strlen(sentence);// actual size of sentence (position of first 
   printf("You entered  sentence is( %d symbols): \n%s\n",n,sentence);
 

for (int i=0;i<n;i++)
    {
printf ("Symboals nr.%02d - %c (ASCII code - %d)\n",i+1,sentence[i],sentence[i]);
  //   statistics();
    }

  printf("\n");
/*

   for(int i=0;i<N; i++)
           {
               print("Symbols nr.%02d -  %c (ASCII code - %d)\n" ,i+1,sentence[i],snetence[i]);
           }
*/

return 0;

 }

