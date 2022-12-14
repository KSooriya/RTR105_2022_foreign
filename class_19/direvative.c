#include <stdio.h>
#include<stdlib.h>
#include <math.h>
//#define N 100

int  main(void)
{
float a=0.,b=2*M_PI;
float delta_x=5.e-1;

float * x;
float * f;
float * fa;
float * fnd;
int N = (b-a)/delta_x + 1;
 x = (float*) malloc ((N) * sizeof(float));
 f = (float*) malloc ((N) * sizeof(float));
 fa = (float*) malloc ((N) * sizeof(float));
 fnd = (float*) malloc ((N-1) * sizeof(float));
   if (x==NULL) exit (1);
   if (f==NULL) exit (1);
   if (fa==NULL) exit (1);
printf("size of x array in elements - %d\n",N);
//printf("size of x array in bytes - %ld\n",sixeof(x));
int i=0;
x[i]=a;
f[i]= sin(x[i]/2);
fa[i]= 0.5*cos(x[i]/2);
printf("%3d\t%6.3f\t%6.3f\t%6.3f\n",i,x[i],f[i],fa[i]);
i++;
//while(x[i]<b)
while(i<N)
{
    x[i]= x[i-1] + delta_x;
    f[i]= sin(x[i]/2);
    fa[i]= 0.5*cos(x[i]/2);
    //f[i] = function(x[i]);
    //printf(%3d.elements''value - %6.3f\n",i,x[i]);
    printf("%3d\t%6.3f\t%6.3f\t%6.3f\n",i,x[i],f[i],fa[i]);
    i++;
}

//while


return 0;
}

