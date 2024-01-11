#include <stdio.h>

/*Union in C*/

union my_union {
	int my_num;
	float my_float;
	char my_char_array[10];
};

int main(void)
{
	union my_union integer;
	integer.my_num = 34;
	printf("%d\n", integer.my_num);

	union my_union real_num;
	real_num.my_float = 40.8;
	printf("%f\n", real_num.my_float);

/**
 * union *my_point str;
	str.my_point = "So7bil";
	printf("%s\n", str.my_char_pointer);
**/

	return (0);
}
