#include "functions.h"
#include <stdio.h>
int main()
{
	int a, b, c, divide_num_int;
	float divide_num_real;
	a = 4; b = 5;
	c = add_them_up (a ,b) ;
	divide_num_int = divide_int(a,b);
    divide_num_real = divide_real(a,b);
	printf ( "The sum of %d and %d is %d \n", a, b, c);
    printf("%d divided by %d is %d as an int \n", a,b,divide_num_int);
    printf("%d divided by %d is %f as a real \n", a,b,divide_num_real);


}