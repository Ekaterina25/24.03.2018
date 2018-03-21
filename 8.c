#include <stdio.h> 
int
main (void) 
{
  
int i1, i2, i3, 
j1, j2, j3, 
n1, n2, n3;
  
i1 = 365;
  
i2 = 13;
  
i3 = 996;
  
j1 = 7;
  
j2 = 23;
  
j3 = 4;
  
n1 = i1 + j1 - (i1 % j1);
  
n2 = i2 + j2 - (i2 % j2);
  
n3 = i3 + j3 - (i3 % j3);
  
printf ("%i\n%i\n%i\n", n1, n2, n3);
  
return 0;

}
