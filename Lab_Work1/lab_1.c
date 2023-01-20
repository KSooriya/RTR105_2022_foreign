#include<stdio.h>
#include<math.h>

double my_sin_half_x(double x) 
{
 double a,S;
 int k=0;
 int n=500;

 a=x/2;
 S=a;
 printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);

while(k<n)
{
   k++;
   a= a * (x*x)/((2*k)*((2*k)+1)*4);
   S= S+a;
   if (k==n){
   printf("%.2f\t%8.2f\t%8.2f\n",x,a,S);}
}
return S;

}
void main()
  {
     double x=0.5;
     double y,yy;
     y = sin(x/2);
    printf("standard function sin --> y=sin(%.2f)=%8.5f\n",x,y);

     yy = my_sin_half_x(x);
    printf("used function --> y=my_sin(%.2f)=%2f\n",x,yy);
  }
