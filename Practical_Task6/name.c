#include <stdio.h>
//without arguement without return
void Name ()
{
    char name_arr[100];
    printf("What is your name: \n");
    scanf("%s", name_arr);
    printf("Nice to meet you %s\n",name_arr);
}

//with arguement without return
void Name_b (char name_arr[])
{
     printf("Nice to meet you %s\n",name_arr);
}

//without arguement with return
char* Name_c (){
   static char *name_arr[100];
   printf("What is your name: \n");
   scanf("%s", name_arr);
   return name_arr;
}

//with arguement with return
char* Name_d (char name_arr[100]){

   printf("What is your name: \n");
   scanf("%s", name_arr);
   return name_arr;
}

int main() 
{
 
  char name_arr[100];
     printf("\nName function without arguement without return\n");
     Name();
  
     printf("\nName function with arguement without return\n");
     printf("What is your name: \n");
     scanf("%s", name_arr);
     Name_b(name_arr);
  
     printf("\nName function without arguement with return\n");
     char* name_arr_2=Name_c();
     printf("Nice to meet you %s\n",name_arr_2);
     
     printf("\nName function with arguement with return\n");
     char name_arr_3[100];
     Name_d(name_arr_3);
     printf("Nice to meet you %s\n",name_arr_3);
  
  
  return 0;
  }
