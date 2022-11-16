    #include <stdio.h>
    #include <string.h>
    #define N 100 
    int main()
    {
        char sentence[N] = "One Two Three Four Five Six Seven Eight Ten eighteen";
         printf( "%s\n",sentence);
        int count;

        for(int i = 0;i<strlen(sentence) ; i++) 
        {
        if(sentence[i] != ' ')
            count++;
        }


        //Displays the total number of characters present in the given string
        printf("Total number of words bigger than 5 letters in the sentence: %d\n", count);
        return 0;
    }
