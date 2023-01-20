#include <stdio.h>


int main() 
   {
    
    char datatype;
    int i,n;
    long long int fact,fact0,fact1;
    
    printf("Enter the data type to use [char(c) / int(i) / long long int(l)]: ");
    scanf("%c",&datatype);
    
    printf(" Enter one integer number: ");
    scanf("%d",&n);

    i = 1;
    fact0=1;
    fact = 1;
    fact1=1;
   
    if(datatype=='c')
    {
        if(n<=3)
          {
            while(i<=n && fact0==fact1)
            {
                fact0 = fact1;
                fact = fact * i;
                fact1 = fact/i;
                i++;
              
            }
            
            printf("%3d! = %lld\n",i-1,fact);
        }
        
        else{
            printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
            return 0;
        }
        
    }
    
    else if(datatype=='i')
    {
        if(n<=12)
        {
            while(i<=n && fact0==fact1)
            {
                fact0 = fact;
                fact = fact * i;
                fact1 = fact/i;
                i++;
    
            }
            
            printf("%3d! = %lld\n",i-1,fact);
        }
        
        else
        {
            printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
            return 0;
        }
    }
    
    else if(datatype=='l')
    {     
            while(i<=n)
            {   
                fact0 = fact;
                fact = fact * i;
                fact1 = fact/i;
                i++;
                
                if(fact0==fact1)
                {  
                    continue;
                }
                else
                {
                    printf("Factorial value of the input integer cannot be calculated using the chosen data type.\n");
                    return 0;
                }
    
            }
            
            printf("%3d! = %lld\n",i-1,fact);
            
    }
    
    return 0;
}
