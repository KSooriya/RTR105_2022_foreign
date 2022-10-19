//operations :  operands 1 operation operands 2  
//                (data type)       (data type)
//                            ||
//                            \/
//                       result_of_operation
// data type - char, short, int,float, double, long int, long long int (+unsigned)
// mathematical: + (addition)
//               - (sustruction)
//               * (multiplication)
//               / (division)
//               % (reminder)
//              ++ (increment)
//              -- (decrement)
//              int i1 = 5, i2 =6, ir;
//              ir = i1 + i2; //after this operation ir will be equal to 11
//              ir = ir + 10; // after this operation  ir will be equal to 21
//              ir += 10; // this is same as  ir = ir + 10; just written shortly
//              ir++; // ir = ir + 1; or ir += 1;
//              ++ir; // differnce in comparison to previous increment and then use and then increment
// relational: <, <=, >=, >, ==, !=
// logical: &&, ||, ! (1 operation)
// logical by bytes: &, |, ^, ~ (1 operation)
// bit operation: >>, <<





#include<stio.h>
 
int main() 
 {
 char c1 = 'A', c2 = 0x45;
 int i1 = 2000, i2 = 01056;
 float f1 = 2.3, f2 = -770.896;
 double d1 = -5.6e4, d2= 456.8e-3;

 printf("\n%d (%ld bytes) * %d (%ld bytes)",c1,sizeof(c1),i1,sizeof(i1));
 printf(" = %d (%ld bytes)\n\n",c1*i1,sizeof(c1*i1));


return o;
}
