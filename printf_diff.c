# include <stdio.h>
# include <string.h>
#include "ft_printf.h"

int main(int argc, char *argv[])
{
	char arg;

	int rc = 0, rc2 = 0;
	if (argc != 2)
	{
		puts("NO!!!!");
		return (0);
	}
	arg = argv[1][0];
	if (arg == 'c')
	{
/*
** normal 'c'
*/
		printf("%%c, 'a'\n");
		rc = printf("real : [%c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%1c, 'a'\n");
		rc = printf("real : [%1c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%1c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%3c, 'a'\n");
		rc = printf("real : [%3c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%3c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		// printf("%%-2c, 'a'\n");
		// rc = printf("real : [%-2c]\n", 'a');
		// printf("%d\n", rc - 10);
		// rc2 = ft_printf("TEST : [%-2c]\n", 'a');
		// ft_printf("%d\n", rc2 - 10); <- minus flag
/*
** precision 'c'
*/
		puts("P---------------------");
		printf("%%.c, 'a'\n");
		rc = printf("real : [%.c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.0c, 'a'\n");
		rc = printf("real : [%.0c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.0c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.1c, 'a'\n");
		rc = printf("real : [%.1c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.1c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.3c, 'a'\n");
		rc = printf("real : [%.3c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.3c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-1c, 'a'\n");
		rc = printf("real : [%.-1c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-1c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-2c, 'a'\n");
		rc = printf("real : [%.-2c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-2c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*c, -1, 'a'\n");
		rc = printf("real : [%.*c]\n", -1, 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*c]\n", -1, 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*c, -2, 'a'\n");
		rc = printf("real : [%.*c]\n", -2, 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*c]\n", -2, 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*c, 0, 'a'\n");
		rc = printf("real : [%.*c]\n", 0, 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*c]\n", 0, 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*c, 1, 'a'\n");
		rc = printf("real : [%.*c]\n", 1, 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*c]\n", 1, 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*c, 2, 'a'\n");
		rc = printf("real : [%.*c]\n", 2, 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*c]\n", 2, 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*c, 4, 'a'\n");
		rc = printf("real : [%.*c]\n", 4, 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*c]\n", 4, 'a');
		ft_printf("%d\n", rc2 - 10);
		//
/*
**　0 flag
*/
		printf("%%0c 'a'\n");
		rc = printf("real : [%0c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%00c 'a'\n");
		rc = printf("real : [%00c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%00c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%01c 'a'\n");
		rc = printf("real : [%01c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%03c 'a'\n");
		rc = printf("real : [%03c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%03c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-1c 'a'\n");
		rc = printf("real : [%0-1c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-1c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-2c 'a'\n");
		rc = printf("real : [%0-2c]\n", 'a');
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-2c]\n", 'a');
		ft_printf("%d\n", rc2 - 10);
		//
/*
**	minus flag
*/

	printf("%%-c 'a'\n");
	rc = printf("real : [%-c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0c 'a'\n");
	rc = printf("real : [%-0c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-1c 'a'\n");
	rc = printf("real : [%-1c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-1c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2c 'a'\n");
	rc = printf("real : [%-2c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-2c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%--2c 'a'\n");
	rc = printf("real : [%--2c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%--2c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-02c 'a'\n");
	rc = printf("real : [%-02c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-02c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0102c 'a'\n");
	rc = printf("real : [%-0102c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0102c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-9c 'a'\n");
	rc = printf("real : [%-01-9c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-9c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-0c 'a'\n");
	rc = printf("real : [%-01-0c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-0c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-+3c 'a'\n");
	rc = printf("real : [%-01-+3c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-+3c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01--2c 'a'\n");
	rc = printf("real : [%-01--2c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01--2c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--c 'a'\n");
	rc = printf("real : [%05--c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4c 'a'\n");
	rc = printf("real : [%05--4c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4c 'a'\n");
	rc = printf("real : [%5--4c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4c 'a'\n");
	rc = printf("real : [%-5.4c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n", "abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc"); <--------'s'
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.2s abc\n");
	// rc = printf("real : [%-5.2s]\n", "abc");
	// printf("%d\n", rc - 10);<----------------------------s
	// rc2 = ft_printf("TEST : [%-5.2s]\n", "abc");
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n","abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");<---------------------------s
	// ft_printf("%d\n", rc2 - 10);
	// //
	printf("%%-5.0c 'a'\n");
	rc = printf("real : [%-5.0c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0c 'a'\n");
	rc = printf("real : [%-5...0c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.9c 'a'\n");
	rc = printf("real : [%-5..2.9c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.9c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0c 'a'\n");
	rc = printf("real : [%-5..2.0c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0c, 9 'a'\n");
	rc = printf("real : [%-*.0c]\n", 9, 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0c]\n", 9, 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*3.0c, 9 'a'\n");
	rc = printf("real : [%-*3.0c]\n", 9, 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*3.0c]\n", 9, 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0c, 3 'a'\n");
	rc = printf("real : [%-*9.0c]\n", 3, 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0c]\n", 3, 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0c, 3 'a'\n");
	rc = printf("real : [%-*9.0c]\n", 3, 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0c]\n", 3, 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.2c, 3 'a'\n");
	rc = printf("real : [%-*9.2c]\n", 3, 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.2c]\n", 3, 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.6c, 3 'a'\n");
	rc = printf("real : [%-*.6c]\n", 3, 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.6c]\n", 3, 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.-6c, 3 'a'\n");
	rc = printf("real : [%-*.-6c]\n", 3, 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.-6c]\n", 3, 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%*.-10c, 9 'a'\n");
	rc = printf("real : [%*.-10c]\n", 9 , 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%*.-10c]\n", 9 , 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--1c 'a'\n");
	rc = printf("real : [%05--1c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--1c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0c 'a'\n");
	rc = printf("real : [%5--0c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.c 'a'\n");
	rc = printf("real : [%05.c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.0c 'a'\n");
	rc = printf("real : [%05.0c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.0c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.1c 'a'\n");
	rc = printf("real : [%05.1c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.1c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.3c 'a'\n");
	rc = printf("real : [%05.3c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.3c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%03.5c 'a'\n");
	rc = printf("real : [%03.5c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%03.5c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3c 'a'\n");
	rc = printf("real : [%05.-3c]\n", 'a');
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.-3c]\n", 'a');
	ft_printf("%d\n", rc2 - 10);
	//
	}
	//------------------------------------------------------------------------------------------------------------------
	else if (arg == 'd')
	{
		printf("%%d, '1'\n");
		rc = printf("real : [%d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%1d, '1'\n");
		rc = printf("real : [%1d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%1d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2d, '1'\n");
		rc = printf("real : [%2d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2d, '123'\n");
		rc = printf("real : [%2d]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2d]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0d, '123'\n");
		rc = printf("real : [%0d]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0d]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%d, -2147483648\n");
		rc = printf("real : [%d]\n", -2147483648);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%d]\n", -2147483648);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%4d, -12345\n");
		rc = printf("real : [%4d]\n", -12345);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%4d]\n", -12345);
		ft_printf("%d\n", rc2 - 10);
		//
		// printf("%%-2c, 'a'\n");
		// rc = printf("real : [%-2c]\n", 'a');
		// printf("%d\n", rc - 10);
		// rc2 = ft_printf("TEST : [%-2c]\n", 'a');
		// ft_printf("%d\n", rc2 - 10); <- minus flag
/*
** precision 'd'
*/
		puts("P---------------------");
		printf("%%.d, 2\n");
		rc = printf("real : [%.d]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.d]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.0d, 2\n");
		rc = printf("real : [%.0d]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.0d]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.1d, 2\n");
		rc = printf("real : [%.1d]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.1d]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.3d, 2\n");
		rc = printf("real : [%.3d]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.3d]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-1d, 2\n");
		rc = printf("real : [%.-1d]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-1d]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-2d, 12\n");
		rc = printf("real : [%.-2d]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-2d]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-3d, 1234\n");
		rc = printf("real : [%.-3d]\n", 1234);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-3d]\n", 1234);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*d, -1, 0\n");
		rc = printf("real : [%.*d]\n", -1, 0);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*d]\n", -1, 0);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*d, -2, 12\n");
		rc = printf("real : [%.*d]\n", -2, 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*d]\n", -2, 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*d, -3, 1\n");
		rc = printf("real : [%.*d]\n", -3, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*d]\n", -3, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*d, 0, 1\n");
		rc = printf("real : [%.*d]\n", 0, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*d]\n", 0, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*d, 1, 2\n");
		rc = printf("real : [%.*d]\n", 1, 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*d]\n", 1, 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*d, 2, 123\n");
		rc = printf("real : [%.*d]\n", 2, 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*d]\n", 2, 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*d, 2, 1\n");
		rc = printf("real : [%.*d]\n", 2, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*d]\n", 2, 1);
		ft_printf("%d\n", rc2 - 10);
		//
/*
**　0 flag
*/
		printf("%%0d 1\n");
		rc = printf("real : [%0d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0d 0\n");
		rc = printf("real : [%0d]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0d]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%00d 1\n");
		rc = printf("real : [%00d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%00d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%00d 0\n");
		rc = printf("real : [%00d]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%00d]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%01d 1\n");
		rc = printf("real : [%01d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%03d 1\n");
		rc = printf("real : [%03d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%03d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%02d 1234\n");
		rc = printf("real : [%02d]\n", 1234);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%02d]\n", 1234);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-1d 1\n");
		rc = printf("real : [%0-1d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-1d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0d 1\n");
		rc = printf("real : [%0-0d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-0d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0d 0\n");
		rc = printf("real : [%0-0d]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-0d]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%0-2d 1\n");
		rc = printf("real : [%0-2d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-2d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-2d1234\n");
		rc = printf("real : [%0-2d]\n",1234);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-2d]\n",1234);
		ft_printf("%d\n", rc2 -10);
		//
/*
**	minus flag
*/

	printf("%%-d 1\n");
	rc = printf("real : [%-d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0d 1\n");
	rc = printf("real : [%-0d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-1d 1\n");
	rc = printf("real : [%-1d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-1d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2d 1\n");
	rc = printf("real : [%-2d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-2d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2d 1234\n");
	rc = printf("real : [%-2d]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-2d]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%--2d 1\n");
	rc = printf("real : [%--2d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%--2d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%--2d 1234\n");
	rc = printf("real : [%--2d]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%--2d]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-02d 1\n");
	rc = printf("real : [%-02d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-02d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-02d 1234\n");
	rc = printf("real : [%-02d]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-02d]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-0102d -2147483648\n");
	rc = printf("real : [%-0102d]\n", -2147483648);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0102d]\n", -2147483648);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-9d 1\n");
	rc = printf("real : [%-01-9d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-9d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-0d 0\n");
	rc = printf("real : [%-01-0d]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-0d]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-+3d 1\n");
	rc = printf("real : [%-01-+3d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-+3d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01--2d 1234\n");
	rc = printf("real : [%-01--2d]\n", 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01--2d]\n", 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--d 1\n");
	rc = printf("real : [%05--d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4d 12\n");
	rc = printf("real : [%05--4d]\n", 12);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4d]\n", 12);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4d 12345\n");
	rc = printf("real : [%05--4d]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4d]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4d 1\n");
	rc = printf("real : [%5--4d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4d 0\n");
	rc = printf("real : [%5--4d]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4d]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4d 1\n");
	rc = printf("real : [%5--4d]\n",1);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%5--4d]\n",1);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5.4d 12345\n");
	rc = printf("real : [%-5.4d]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4d]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4d 1\n");
	rc = printf("real : [%-5.4d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4d 0\n");
	rc = printf("real : [%-5.4d]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4d]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n", "abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc"); <--------'s'
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.2s abc\n");
	// rc = printf("real : [%-5.2s]\n", "abc");
	// printf("%d\n", rc - 10);<----------------------------s
	// rc2 = ft_printf("TEST : [%-5.2s]\n", "abc");
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n","abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");<---------------------------s
	// ft_printf("%d\n", rc2 - 10);
	// //
	printf("%%-5.0d 0\n");
	rc = printf("real : [%-5.0d]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0d]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0d 1\n");
	rc = printf("real : [%-5.0d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0d -2\n");
	rc = printf("real : [%-5.0d]\n", -2);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0d]\n", -2);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0d 0\n");
	rc = printf("real : [%-5...0d]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0d]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0d 1\n");
	rc = printf("real : [%-5...0d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0d 123456\n");
	rc = printf("real : [%-5...0d]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5...0d]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2.9d 1\n");
	rc = printf("real : [%-5..2.9d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.9d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0d 0\n");
	rc = printf("real : [%-5..2.0d]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0d]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0d 1\n");
	rc = printf("real : [%-5..2.0d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4d 1\n");
	rc = printf("real : [%-5..2.4d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.4d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2..d 1\n");
	rc = printf("real : [%-5..2..d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2..d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.2d 1\n");
	rc = printf("real : [%-5.2d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.2d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0d, 9 0\n");
	rc = printf("real : [%-*.0d]\n", 9, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0d]\n", 9, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0d, 9 1\n");
	rc = printf("real : [%-*.0d]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0d]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*3.0d, 9 1\n");
	rc = printf("real : [%-*3.0d]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*3.0d]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0d, 3 0\n");
	rc = printf("real : [%-*9.0d]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0d]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0d, 3 1\n");
	rc = printf("real : [%-*9.0d]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0d]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.2d, 3 0\n");
	rc = printf("real : [%-*9.2d]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.2d]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.6d, 3 1234\n");
	rc = printf("real : [%-*.6d]\n", 3, 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.6d]\n", 3, 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.-6d, 3 1\n");
	rc = printf("real : [%-*.-6d]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.-6d]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%*.-10d, 9 1\n");
	rc = printf("real : [%*.-10d]\n", 9 , 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%*.-10d]\n", 9 , 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--1d 1\n");
	rc = printf("real : [%05--1d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--1d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0d 1\n");
	rc = printf("real : [%5--0d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0d 0\n");
	rc = printf("real : [%5--0d]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0d]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.d 1\n");
	rc = printf("real : [%05.d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.0d 0\n");
	rc = printf("real : [%05.0d]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.0d]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.1d 1\n");
	rc = printf("real : [%05.1d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.1d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.3d 123456\n");
	rc = printf("real : [%05.3d]\n", 123456);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.3d]\n", 123456);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%03.5d 1\n");
	rc = printf("real : [%03.5d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%03.5d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3d 1\n");
	rc = printf("real : [%05.-3d]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.-3d]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3d 123456\n");
	rc = printf("real : [%05.-3d]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%05.-3d]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	}
	//------------------------------------------------------------------------------------------------------------------------
	else if (arg == 'i')
	{
		printf("%%i, '1'\n");
		rc = printf("real : [%i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%1i, '1'\n");
		rc = printf("real : [%1i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%1i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2i, '1'\n");
		rc = printf("real : [%2i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2i, '123'\n");
		rc = printf("real : [%2i]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2i]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0i, '123'\n");
		rc = printf("real : [%0i]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0i]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%i, -2147483648\n");
		rc = printf("real : [%i]\n", -2147483648);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%i]\n", -2147483648);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%4i, -12345\n");
		rc = printf("real : [%4i]\n", -12345);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%4i]\n", -12345);
		ft_printf("%d\n", rc2 - 10);
		//-----------------------------------------------------------------------------------------------
		// printf("%%-2c, 'a'\n");
		// rc = printf("real : [%-2c]\n", 'a');
		// printf("%d\n", rc - 10);
		// rc2 = ft_printf("TEST : [%-2c]\n", 'a');
		// ft_printf("%d\n", rc2 - 10); <- minus flag
/*
** precision 'd'
*/
		puts("P---------------------");
		printf("%%.i, 2\n");
		rc = printf("real : [%.i]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.i]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.0i, 2\n");
		rc = printf("real : [%.0i]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.0i]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.1i, 2\n");
		rc = printf("real : [%.1i]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.1i]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.3i, 2\n");
		rc = printf("real : [%.3i]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.3i]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-1i, 2\n");
		rc = printf("real : [%.-1i]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-1i]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-2i, 12\n");
		rc = printf("real : [%.-2i]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-2i]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-3i, 1234\n");
		rc = printf("real : [%.-3i]\n", 1234);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-3i]\n", 1234);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*i, -1, 0\n");
		rc = printf("real : [%.*i]\n", -1, 0);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*i]\n", -1, 0);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*i, -2, 12\n");
		rc = printf("real : [%.*i]\n", -2, 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*i]\n", -2, 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*i, -3, 1\n");
		rc = printf("real : [%.*i]\n", -3, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*i]\n", -3, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*i, 0, 1\n");
		rc = printf("real : [%.*i]\n", 0, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*i]\n", 0, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*i, 1, 2\n");
		rc = printf("real : [%.*i]\n", 1, 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*i]\n", 1, 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*i, 2, 123\n");
		rc = printf("real : [%.*i]\n", 2, 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*i]\n", 2, 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*i, 2, 1\n");
		rc = printf("real : [%.*i]\n", 2, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*i]\n", 2, 1);
		ft_printf("%d\n", rc2 - 10);
		//
/*
**　0 flag
*/
		printf("%%0i 1\n");
		rc = printf("real : [%0i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0i 0\n");
		rc = printf("real : [%0i]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0i]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%00i 1\n");
		rc = printf("real : [%00i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%00i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%00i 0\n");
		rc = printf("real : [%00i]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%00i]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%01i 1\n");
		rc = printf("real : [%01i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%03i 1\n");
		rc = printf("real : [%03i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%03i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%02i 1234\n");
		rc = printf("real : [%02i]\n", 1234);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%02i]\n", 1234);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-1i 1\n");
		rc = printf("real : [%0-1i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-1i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0i 1\n");
		rc = printf("real : [%0-0i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-0i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0i 0\n");
		rc = printf("real : [%0-0i]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-0i]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%0-2i 1\n");
		rc = printf("real : [%0-2i]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-2i]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-2i 1234\n");
		rc = printf("real : [%0-2i]\n", 1234);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-2i]\n", 1234);
		ft_printf("%d\n", rc2 -10);
		//
/*
**	minus flag
*/

	printf("%%-i 1\n");
	rc = printf("real : [%-i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0i 1\n");
	rc = printf("real : [%-0i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-1i 1\n");
	rc = printf("real : [%-1i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-1i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2i 1\n");
	rc = printf("real : [%-2i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-2i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2i 1234\n");
	rc = printf("real : [%-2i]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-2i]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%--2i 1\n");
	rc = printf("real : [%--2i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%--2i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%--2i 1234\n");
	rc = printf("real : [%--2i]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%--2i]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-02i 1\n");
	rc = printf("real : [%-02i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-02i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-02i 1234\n");
	rc = printf("real : [%-02i]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-02i]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-0102i -2147483648\n");
	rc = printf("real : [%-0102i]\n", -2147483648);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0102i]\n", -2147483648);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-9i 1\n");
	rc = printf("real : [%-01-9i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-9i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-0i 0\n");
	rc = printf("real : [%-01-0i]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-0i]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-+3i 1\n");
	rc = printf("real : [%-01-+3i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-+3i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01--2i 1234\n");
	rc = printf("real : [%-01--2i]\n", 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01--2i]\n", 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--i 1\n");
	rc = printf("real : [%05--i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4i 12\n");
	rc = printf("real : [%05--4i]\n", 12);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4i]\n", 12);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4i 12345\n");
	rc = printf("real : [%05--4i]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4i]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4i 1\n");
	rc = printf("real : [%5--4i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4i 0\n");
	rc = printf("real : [%5--4i]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4i]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4i 1\n");
	rc = printf("real : [%5--4i]\n",1);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%5--4i]\n",1);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5.4i 12345\n");
	rc = printf("real : [%-5.4i]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4i]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4i 1\n");
	rc = printf("real : [%-5.4i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4i 0\n");
	rc = printf("real : [%-5.4i]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4i]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n", "abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc"); <--------'s'
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.2s abc\n");
	// rc = printf("real : [%-5.2s]\n", "abc");
	// printf("%d\n", rc - 10);<----------------------------s
	// rc2 = ft_printf("TEST : [%-5.2s]\n", "abc");
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n","abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");<---------------------------s
	// ft_printf("%d\n", rc2 - 10);
	// //
	printf("%%-5.0i 0\n");
	rc = printf("real : [%-5.0i]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0i]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0i 1\n");
	rc = printf("real : [%-5.0i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0i -2\n");
	rc = printf("real : [%-5.0i]\n", -2);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0i]\n", -2);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0i 0\n");
	rc = printf("real : [%-5...0i]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0i]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0i 1\n");
	rc = printf("real : [%-5...0i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0i 123456\n");
	rc = printf("real : [%-5...0i]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5...0i]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2.9i 1\n");
	rc = printf("real : [%-5..2.9i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.9i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0i 0\n");
	rc = printf("real : [%-5..2.0i]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0i]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0i 1\n");
	rc = printf("real : [%-5..2.0i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4i 1\n");
	rc = printf("real : [%-5..2.4i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.4i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4i 1234567\n");
	rc = printf("real : [%-5..2.4i]\n", 1234567);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5..2.4i]\n", 1234567);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2..i 1\n");
	rc = printf("real : [%-5..2..i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2..i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.2i 1\n");
	rc = printf("real : [%-5.2i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.2i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0i, 9 0\n");
	rc = printf("real : [%-*.0i]\n", 9, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0i]\n", 9, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0i, 9 1\n");
	rc = printf("real : [%-*.0i]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0i]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*3.0i, 9 1\n");
	rc = printf("real : [%-*3.0i]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*3.0i]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0i, 3 0\n");
	rc = printf("real : [%-*9.0i]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0i]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0i, 3 1\n");
	rc = printf("real : [%-*9.0i]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0i]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.2i, 3 0\n");
	rc = printf("real : [%-*9.2i]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.2i]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.6i, 3 1234\n");
	rc = printf("real : [%-*.6i]\n", 3, 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.6i]\n", 3, 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.-6i, 3 1\n");
	rc = printf("real : [%-*.-6i]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.-6i]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%*.-10i, 9 1\n");
	rc = printf("real : [%*.-10i]\n", 9 , 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%*.-10i]\n", 9 , 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--1i 1\n");
	rc = printf("real : [%05--1i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--1i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0i 1\n");
	rc = printf("real : [%5--0i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0i 0\n");
	rc = printf("real : [%5--0i]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0i]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.i 1\n");
	rc = printf("real : [%05.i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.0i 0\n");
	rc = printf("real : [%05.0i]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.0i]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.1i 1\n");
	rc = printf("real : [%05.1i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.1i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.3i 123456\n");
	rc = printf("real : [%05.3i]\n", 123456);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.3i]\n", 123456);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%03.5i 1\n");
	rc = printf("real : [%03.5i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%03.5i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3i 1\n");
	rc = printf("real : [%05.-3i]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.-3i]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3i 123456\n");
	rc = printf("real : [%05.-3i]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%05.-3i]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	}
	else if (arg == 's')
	{
/*
** normal 's'
*/
		ft_printf("%d\n", rc2);
		printf("%%s, \"abc\"\n");
		rc = printf("real : [%s]\n", "abc");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%s]\n", "abc");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%1s, 'a'\n");
		rc = printf("real : [%1s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%1s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%3s, 'abc'\n");
		rc = printf("real : [%3s]\n", "abc");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%3s]\n", "abc");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2s, 'abcde'\n");
		rc = printf("real : [%2s]\n", "abcde");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2s]\n", "abcde");
		ft_printf("%d\n", rc2 - 10);
		printf("%%5s 'a'\n");
		rc = printf("real : [%5s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%5s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		//
		// printf("%%-2c, 'a'\n");
		// rc = printf("real : [%-2c]\n", 'a');
		// printf("%d\n", rc - 10);
		// rc2 = ft_printf("TEST : [%-2c]\n", 'a');
		// ft_printf("%d\n", rc2 - 10); <- minus flag
		/*
** precision 'c'
*/
		puts("P---------------------");
		printf("%%.s, 'a'\n");
		rc = printf("real : [%.s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.s, 'abc'\n");
		rc = printf("real : [%.s]\n", "abc");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.s]\n", "abc");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.0s, 'a'\n");
		rc = printf("real : [%.0s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.0s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.0s, 'abc'\n");
		rc = printf("real : [%.0s]\n", "abc");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.0s]\n", "abc");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.1s, 'a'\n");
		rc = printf("real : [%.1s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.1s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.1s, 'abc'\n");
		rc = printf("real : [%.1s]\n", "abc");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.1s]\n", "abc");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.3s, 'a'\n");
		rc = printf("real : [%.3s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.3s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-1s, 'a'\n");
		rc = printf("real : [%.-1s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-1s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-1s, 'abc'\n");
		rc = printf("real : [%.-1s]\n", "abc");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-1s]\n", "abc");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-2s, 'a'\n");
		rc = printf("real : [%.-2s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-2s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*s, -1, 'a'\n");
		rc = printf("real : [%.*s]\n", -1, "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*s]\n", -1, "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*s, -1, 'abc'\n");
		rc = printf("real : [%.*s]\n", -1, "abc");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*s]\n", -1, "abc");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*s, -2, 'a'\n");
		rc = printf("real : [%.*s]\n", -2, "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*s]\n", -2, "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*s, 0, 'a'\n");
		rc = printf("real : [%.*s]\n", 0, "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*s]\n", 0, "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*s, 1, 'a'\n");
		rc = printf("real : [%.*s]\n", 1, "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*s]\n", 1, "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*s, 2, 'abc'\n");
		rc = printf("real : [%.*s]\n", 2, "abc");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*s]\n", 2, "abc");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*s, 4, 'ab'\n");
		rc = printf("real : [%.*s]\n", 4, "ab");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*s]\n", 4, "ab");
		ft_printf("%d\n", rc2 - 10);
		//
/*
**　0 flag
*/
		printf("%%0s 'a'\n");
		rc = printf("real : [%0s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%00s 'a'\n");
		rc = printf("real : [%00s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%00s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%01s 'a'\n");
		rc = printf("real : [%01s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%01s 'abcd'\n");
		rc = printf("real : [%01s]\n", "abcd");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01s]\n", "abcd");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%03s 'ab'\n");
		rc = printf("real : [%03s]\n", "ab");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%03s]\n", "ab");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-1s 'a'\n");
		rc = printf("real : [%0-1s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-1s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-2s 'a'\n");
		rc = printf("real : [%0-2s]\n", "a");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-2s]\n", "a");
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-2s 'abcd'\n");
		rc = printf("real : [%0-2s]\n", "abcd");
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-2s]\n", "abcd");
		ft_printf("%d\n", rc2 - 10);
		//
/*
**	minus flag
*/

	printf("%%-s 'a'\n");
	rc = printf("real : [%-s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0s 'a'\n");
	rc = printf("real : [%-0s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-1s 'a'\n");
	rc = printf("real : [%-1s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-1s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2s 'a'\n");
	rc = printf("real : [%-2s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-2s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2s 'abcd'\n");
	rc = printf("real : [%-2s]\n", "abcd");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-2s]\n", "abcd");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%--2s 'a'\n");
	rc = printf("real : [%--2s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%--2s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-02s 'a'\n");
	rc = printf("real : [%-02s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-02s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-02s 'abcd'\n");
	rc = printf("real : [%-02s]\n", "abcd");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-02s]\n", "abcd");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0102s 'a'\n");
	rc = printf("real : [%-0102s]\n", "abc");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0102s]\n", "abc");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-9s 'a'\n");
	rc = printf("real : [%-01-9s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-9s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-0s 'a'\n");
	rc = printf("real : [%-01-0s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-0s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-+3s 'abcde'\n");
	rc = printf("real : [%-01-+3s]\n", "abcde");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-+3s]\n", "abcde");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01--2s 'a'\n");
	rc = printf("real : [%-01--2s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01--2s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--s 'a'\n");
	rc = printf("real : [%05--s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4s 'a'\n");
	rc = printf("real : [%05--4s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4s 'a'\n");
	rc = printf("real : [%5--4s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4s 'a'\n");
	rc = printf("real : [%-5.4s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4s abc\n");
	rc = printf("real : [%-5.4s]\n", "abc");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.2s abc\n");
	rc = printf("real : [%-5.2s]\n", "abc");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.2s]\n", "abc");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4s abc\n");
	rc = printf("real : [%-5.4s]\n","abc");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0s 'a'\n");
	rc = printf("real : [%-5.0s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0s 'a'\n");
	rc = printf("real : [%-5...0s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.9s 'a'\n");
	rc = printf("real : [%-5..2.9s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.9s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0s 'a'\n");
	rc = printf("real : [%-5..2.0s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0s, 9 'a'\n");
	rc = printf("real : [%-*.0s]\n", 9, "abcdefghijk");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0s]\n", 9, "abcdefghijk");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*3.0s, 9 'a'\n");
	rc = printf("real : [%-*3.0s]\n", 9, "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*3.0s]\n", 9, "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0s, 3 'a'\n");
	rc = printf("real : [%-*9.0s]\n", 3, "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0s]\n", 3, "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0s, 3 'abcd'\n");
	rc = printf("real : [%-*9.0s]\n", 3, "abcd");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0s]\n", 3, "abcd");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.2s, 3 'a'\n");
	rc = printf("real : [%-*9.2s]\n", 3, "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.2s]\n", 3, "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.2s, 3 'abcd'\n");
	rc = printf("real : [%-*9.2s]\n", 3, "abcd");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.2s]\n", 3, "abcd");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.6s, 3 'a'\n");
	rc = printf("real : [%-*.6s]\n", 3, "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.6s]\n", 3, "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.-6s, 3 'abcde'\n");
	rc = printf("real : [%-*.-6s]\n", 3, "abcde");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.-6s]\n", 3, "abcde");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%*.-10s, 9 'a'\n");
	rc = printf("real : [%*.-10s]\n", 9 , "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%*.-10s]\n", 9 , "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--1s 'a'\n");
	rc = printf("real : [%05--1s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--1s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0s 'a'\n");
	rc = printf("real : [%5--0s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.s 'a'\n");
	rc = printf("real : [%05.s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.0s 'a'\n");
	rc = printf("real : [%05.0s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.0s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.1s 'a'\n");
	rc = printf("real : [%05.1s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.1s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.3s 'a'\n");
	rc = printf("real : [%05.3s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.3s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%03.5s 'a'\n");
	rc = printf("real : [%03.5s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%03.5s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3s 'a'\n");
	rc = printf("real : [%05.-3s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.-3s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5.0s '\\0'\n");
	rc = printf("real : [%5.0s]\n", "");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5.0s]\n", "");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5s 'a'\n");
	rc = printf("real : [%5s]\n", "a");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5s]\n", "a");
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%0.6s 'abc'\n");
	rc = printf("real : [%0.6s]\n", "abc");
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%0.6s]\n", "abc");
	ft_printf("%d\n", rc2 - 10);
	//
	}
	//------------------------------------------------------------------------------------------------------
	else if (arg == 'x')
	{
		printf("%%x, '1'\n");
		rc = printf("real : [%x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%1x, '1'\n");
		rc = printf("real : [%1x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%1x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2x, '1'\n");
		rc = printf("real : [%2x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2x, '123'\n");
		rc = printf("real : [%2x]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2x]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0x, '123'\n");
		rc = printf("real : [%0x]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0x]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%x, -2147483648\n");
		rc = printf("real : [%x]\n", -2147483648);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%x]\n", -2147483648);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%x, 4294967295\n");
		rc = printf("real : [%x]\n", 4294967295);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%x]\n", 4294967295);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%x, 9223372036854775807\n");
		rc = printf("real : [%x]\n", 9223372036854775807);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%x]\n", 9223372036854775807);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%4x, -12345\n");
		rc = printf("real : [%4x]\n", -12345);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%4x]\n", -12345);
		ft_printf("%d\n", rc2 - 10);
		//-----------------------------------------------------------------------------------------------
		// printf("%%-2c, 'a'\n");
		// rc = printf("real : [%-2c]\n", 'a');
		// printf("%d\n", rc - 10);
		// rc2 = ft_printf("TEST : [%-2c]\n", 'a');
		// ft_printf("%d\n", rc2 - 10); <- minus flag
/*
** precision 'd'
*/
		puts("P---------------------");
		printf("%%.x, 2\n");
		rc = printf("real : [%.x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.0x, 2\n");
		rc = printf("real : [%.0x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.0x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.1x, 2\n");
		rc = printf("real : [%.1x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.1x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.3x, 2\n");
		rc = printf("real : [%.3x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.3x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-1x, 2\n");
		rc = printf("real : [%.-1x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-1x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-2x, 12\n");
		rc = printf("real : [%.-2x]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-2x]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-3x, 12\n");
		rc = printf("real : [%.-3x]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-3x]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*x, -1, 0\n");
		rc = printf("real : [%.*x]\n", -1, 0);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*x]\n", -1, 0);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*x, -2, 12\n");
		rc = printf("real : [%.*x]\n", -2, 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*x]\n", -2, 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*x, -3, 1\n");
		rc = printf("real : [%.*x]\n", -3, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*x]\n", -3, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*x, 0, 1\n");
		rc = printf("real : [%.*x]\n", 0, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*x]\n", 0, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*x, 1, 2\n");
		rc = printf("real : [%.*x]\n", 1, 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*x]\n", 1, 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*x, 2, 123\n");
		rc = printf("real : [%.*x]\n", 2, 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*x]\n", 2, 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*x, 2, 1\n");
		rc = printf("real : [%.*x]\n", 2, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*x]\n", 2, 1);
		ft_printf("%d\n", rc2 - 10);
		//
/*
**　0 flag
*/
		printf("%%0x 1\n");
		rc = printf("real : [%0x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0x 0\n");
		rc = printf("real : [%0x]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0x]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%00x 1\n");
		rc = printf("real : [%00x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%00x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%00x 0\n");
		rc = printf("real : [%00x]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%00x]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%01x 1\n");
		rc = printf("real : [%01x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%01x 12\n");
		rc = printf("real : [%01x]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01x]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%03x 1\n");
		rc = printf("real : [%03x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%03x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%02x 1234\n");
		rc = printf("real : [%02x]\n", 1234);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%02x]\n", 1234);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-1x 1\n");
		rc = printf("real : [%0-1x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-1x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0x 1\n");
		rc = printf("real : [%0-0x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-0x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0x 0\n");
		rc = printf("real : [%0-0x]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-0x]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%0-2x 1\n");
		rc = printf("real : [%0-2x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-2x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-2x 1234\n");
		rc = printf("real : [%0-2x]\n", 1234);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-2x]\n", 1234);
		ft_printf("%d\n", rc2 -10);
		//
/*
**	minus flag
*/

	printf("%%-x 1\n");
	rc = printf("real : [%-x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0x 1\n");
	rc = printf("real : [%-0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-1x 1\n");
	rc = printf("real : [%-1x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-1x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2x 1\n");
	rc = printf("real : [%-2x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-2x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2x 1234\n");
	rc = printf("real : [%-2x]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-2x]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%--2x 1\n");
	rc = printf("real : [%--2x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%--2x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%--2x 1234\n");
	rc = printf("real : [%--2x]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%--2x]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-02x 1\n");
	rc = printf("real : [%-02x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-02x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-02x 1234\n");
	rc = printf("real : [%-02x]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-02x]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-0102x -2147483648\n");
	rc = printf("real : [%-0102x]\n", -2147483648);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0102x]\n", -2147483648);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-9x 1\n");
	rc = printf("real : [%-01-9x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-9x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-0x 0\n");
	rc = printf("real : [%-01-0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-+3x 1\n");
	rc = printf("real : [%-01-+3x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-+3x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01--2x 1234\n");
	rc = printf("real : [%-01--2x]\n", 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01--2x]\n", 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--x 1\n");
	rc = printf("real : [%05--x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4x 12\n");
	rc = printf("real : [%05--4x]\n", 12);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4x]\n", 12);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4x 12345\n");
	rc = printf("real : [%05--4x]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4x]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4x 1\n");
	rc = printf("real : [%5--4x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4x 0\n");
	rc = printf("real : [%5--4x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4x 1\n");
	rc = printf("real : [%5--4x]\n",1);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%5--4x]\n",1);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5.4x 12345\n");
	rc = printf("real : [%-5.4x]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4x]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4x 1\n");
	rc = printf("real : [%-5.4x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4x 0\n");
	rc = printf("real : [%-5.4x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n", "abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc"); <--------'s'
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.2s abc\n");
	// rc = printf("real : [%-5.2s]\n", "abc");
	// printf("%d\n", rc - 10);<----------------------------s
	// rc2 = ft_printf("TEST : [%-5.2s]\n", "abc");
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n","abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");<---------------------------s
	// ft_printf("%d\n", rc2 - 10);
	// //
	printf("%%-5.0x 0\n");
	rc = printf("real : [%-5.0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0x 1\n");
	rc = printf("real : [%-5.0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0x -2\n");
	rc = printf("real : [%-5.0x]\n", -2);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0x]\n", -2);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0x 0\n");
	rc = printf("real : [%-5...0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0x 1\n");
	rc = printf("real : [%-5...0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0x 123456\n");
	rc = printf("real : [%-5...0x]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5...0x]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2.9x 1\n");
	rc = printf("real : [%-5..2.9x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.9x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0x 0\n");
	rc = printf("real : [%-5..2.0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0x 1\n");
	rc = printf("real : [%-5..2.0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4x 1\n");
	rc = printf("real : [%-5..2.4x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.4x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4x 1234567\n");
	rc = printf("real : [%-5..2.4x]\n", 1234567);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5..2.4x]\n", 1234567);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2..x 1\n");
	rc = printf("real : [%-5..2..x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2..x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.2x 1\n");
	rc = printf("real : [%-5.2x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.2x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0x, 9 0\n");
	rc = printf("real : [%-*.0x]\n", 9, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0x]\n", 9, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0x, 9 1\n");
	rc = printf("real : [%-*.0x]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0x]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*3.0x, 9 1\n");
	rc = printf("real : [%-*3.0x]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*3.0x]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0x, 3 0\n");
	rc = printf("real : [%-*9.0x]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0x]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0x, 3 1\n");
	rc = printf("real : [%-*9.0x]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0x]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.2x, 3 0\n");
	rc = printf("real : [%-*9.2x]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.2x]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.6x, 3 1234\n");
	rc = printf("real : [%-*.6x]\n", 3, 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.6x]\n", 3, 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.-6x, 3 1\n");
	rc = printf("real : [%-*.-6x]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.-6x]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%*.-10x, 9 1\n");
	rc = printf("real : [%*.-10x]\n", 9 , 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%*.-10x]\n", 9 , 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--1x 1\n");
	rc = printf("real : [%05--1x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--1x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0x 1\n");
	rc = printf("real : [%5--0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0x 0\n");
	rc = printf("real : [%5--0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.x 1\n");
	rc = printf("real : [%05.x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.0x 0\n");
	rc = printf("real : [%05.0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.1x 1\n");
	rc = printf("real : [%05.1x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.1x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.3x 123456\n");
	rc = printf("real : [%05.3x]\n", 123456);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.3x]\n", 123456);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%03.5x 1\n");
	rc = printf("real : [%03.5x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%03.5x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3x 1\n");
	rc = printf("real : [%05.-3x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.-3x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3x 123456\n");
	rc = printf("real : [%05.-3x]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%05.-3x]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	}
	//-----------------------------------------------------------------------------
	else if (arg == 'X')
	{
		printf("%%X, '1'\n");
		rc = printf("real : [%X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%1X, '1'\n");
		rc = printf("real : [%1X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%1X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2X, '1'\n");
		rc = printf("real : [%2X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2X, '123'\n");
		rc = printf("real : [%2X]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2X]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0X, '123'\n");
		rc = printf("real : [%0X]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0X]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%X, -2147483648\n");
		rc = printf("real : [%X]\n", -2147483648);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%X]\n", -2147483648);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%X, 4294967295\n");
		rc = printf("real : [%X]\n", 4294967295);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%X]\n", 4294967295);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%X, 9223372036854775807\n");
		rc = printf("real : [%X]\n", 9223372036854775807);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%X]\n", 9223372036854775807);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%4X, -12345\n");
		rc = printf("real : [%4X]\n", -12345);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%4X]\n", -12345);
		ft_printf("%d\n", rc2 - 10);
		//-----------------------------------------------------------------------------------------------
		// printf("%%-2c, 'a'\n");
		// rc = printf("real : [%-2c]\n", 'a');
		// printf("%d\n", rc - 10);
		// rc2 = ft_printf("TEST : [%-2c]\n", 'a');
		// ft_printf("%d\n", rc2 - 10); <- minus flag
/*
** precision 'd'
*/
		puts("P---------------------");
		printf("%%.X, 2\n");
		rc = printf("real : [%.X]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.X]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.0X, 2\n");
		rc = printf("real : [%.0X]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.0X]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.1X, 2\n");
		rc = printf("real : [%.1X]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.1X]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.3X, 2\n");
		rc = printf("real : [%.3X]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.3X]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-1X, 2\n");
		rc = printf("real : [%.-1X]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-1X]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-2X, 12\n");
		rc = printf("real : [%.-2X]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-2X]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-3X, 12\n");
		rc = printf("real : [%.-3X]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-3X]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*X, -1, 0\n");
		rc = printf("real : [%.*X]\n", -1, 0);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*X]\n", -1, 0);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*X, -2, 12\n");
		rc = printf("real : [%.*X]\n", -2, 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*X]\n", -2, 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*X, -3, 1\n");
		rc = printf("real : [%.*X]\n", -3, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*X]\n", -3, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*X, 0, 1\n");
		rc = printf("real : [%.*X]\n", 0, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*X]\n", 0, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*X, 1, 2\n");
		rc = printf("real : [%.*X]\n", 1, 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*X]\n", 1, 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*X, 2, 123\n");
		rc = printf("real : [%.*X]\n", 2, 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*X]\n", 2, 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*X, 2, 1\n");
		rc = printf("real : [%.*X]\n", 2, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*X]\n", 2, 1);
		ft_printf("%d\n", rc2 - 10);
		//
/*
**　0 flag
*/
		printf("%%0X 1\n");
		rc = printf("real : [%0X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0X 0\n");
		rc = printf("real : [%0X]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0X]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%00X 1\n");
		rc = printf("real : [%00X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%00X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%00X 0\n");
		rc = printf("real : [%00X]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%00X]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%01X 1\n");
		rc = printf("real : [%01X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%01X 12\n");
		rc = printf("real : [%01X]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01X]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%03X 1\n");
		rc = printf("real : [%03X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%03X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%02X 1234\n");
		rc = printf("real : [%02X]\n", 1234);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%02X]\n", 1234);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-1X 1\n");
		rc = printf("real : [%0-1X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-1X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0X 1\n");
		rc = printf("real : [%0-0X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-0X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0X 0\n");
		rc = printf("real : [%0-0X]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-0X]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%0-2X 1\n");
		rc = printf("real : [%0-2X]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-2X]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-2X 1234\n");
		rc = printf("real : [%0-2X]\n", 1234);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-2X]\n", 1234);
		ft_printf("%d\n", rc2 -10);
		//
/*
**	minus flag
*/

	printf("%%-X 1\n");
	rc = printf("real : [%-X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0X 1\n");
	rc = printf("real : [%-0X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-1X 1\n");
	rc = printf("real : [%-1X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-1X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2X 1\n");
	rc = printf("real : [%-2X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-2X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2X 1234\n");
	rc = printf("real : [%-2X]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-2X]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%--2X 1\n");
	rc = printf("real : [%--2X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%--2X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%--2X 1234\n");
	rc = printf("real : [%--2X]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%--2X]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-02X 1\n");
	rc = printf("real : [%-02X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-02X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-02X 1234\n");
	rc = printf("real : [%-02X]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-02X]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-0102X -2147483648\n");
	rc = printf("real : [%-0102X]\n", -2147483648);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0102X]\n", -2147483648);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-9X 1\n");
	rc = printf("real : [%-01-9X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-9X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-0X 0\n");
	rc = printf("real : [%-01-0X]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-0X]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-+3X 1\n");
	rc = printf("real : [%-01-+3X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-+3X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01--2X 1234\n");
	rc = printf("real : [%-01--2X]\n", 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01--2X]\n", 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--X 1\n");
	rc = printf("real : [%05--X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4X 12\n");
	rc = printf("real : [%05--4X]\n", 12);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4X]\n", 12);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4X 12345\n");
	rc = printf("real : [%05--4X]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4X]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4X 1\n");
	rc = printf("real : [%5--4X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4X 0\n");
	rc = printf("real : [%5--4X]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4X]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4X 1\n");
	rc = printf("real : [%5--4X]\n",1);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%5--4X]\n",1);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5.4X 12345\n");
	rc = printf("real : [%-5.4X]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4X]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4X 1\n");
	rc = printf("real : [%-5.4X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4X 0\n");
	rc = printf("real : [%-5.4X]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4X]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n", "abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc"); <--------'s'
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.2s abc\n");
	// rc = printf("real : [%-5.2s]\n", "abc");
	// printf("%d\n", rc - 10);<----------------------------s
	// rc2 = ft_printf("TEST : [%-5.2s]\n", "abc");
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n","abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");<---------------------------s
	// ft_printf("%d\n", rc2 - 10);
	// //
	printf("%%-5.0X 0\n");
	rc = printf("real : [%-5.0X]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0X]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0X 123456789\n");
	rc = printf("real : [%-5.0X]\n", 123456789);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0X]\n", 123456789);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0X -2\n");
	rc = printf("real : [%-5.0X]\n", -2);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0X]\n", -2);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0X 0\n");
	rc = printf("real : [%-5...0X]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0X]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0X 1\n");
	rc = printf("real : [%-5...0X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0X 123456\n");
	rc = printf("real : [%-5...0X]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5...0X]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2.9X 1\n");
	rc = printf("real : [%-5..2.9X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.9X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0X 0\n");
	rc = printf("real : [%-5..2.0X]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0X]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0X 1\n");
	rc = printf("real : [%-5..2.0X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4X 12345\n");
	rc = printf("real : [%-5..2.4X]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.4X]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4X 1234567\n");
	rc = printf("real : [%-5..2.4X]\n", 1234567);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5..2.4X]\n", 1234567);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2..X 1\n");
	rc = printf("real : [%-5..2..X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2..X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.2X 1\n");
	rc = printf("real : [%-5.2X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.2X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0X, 9 0\n");
	rc = printf("real : [%-*.0X]\n", 9, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0X]\n", 9, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0X, 9 1\n");
	rc = printf("real : [%-*.0X]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0X]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*3.0X, 9 1\n");
	rc = printf("real : [%-*3.0X]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*3.0X]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0X, 3 0\n");
	rc = printf("real : [%-*9.0X]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0X]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0X, 3 1\n");
	rc = printf("real : [%-*9.0X]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0X]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.2X, 3 0\n");
	rc = printf("real : [%-*9.2X]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.2X]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.6X, 3 1234\n");
	rc = printf("real : [%-*.6X]\n", 3, 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.6X]\n", 3, 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.-6X, 3 1\n");
	rc = printf("real : [%-*.-6X]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.-6X]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%*.-10X, 9 1\n");
	rc = printf("real : [%*.-10X]\n", 9 , 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%*.-10X]\n", 9 , 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--1X 1\n");
	rc = printf("real : [%05--1X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--1X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0X 1\n");
	rc = printf("real : [%5--0X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0X 0\n");
	rc = printf("real : [%5--0X]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0X]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.X 1\n");
	rc = printf("real : [%05.X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.0X 0\n");
	rc = printf("real : [%05.0X]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.0X]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.1X 1\n");
	rc = printf("real : [%05.1X]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.1X]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.3X 123456\n");
	rc = printf("real : [%05.3X]\n", 123456);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.3X]\n", 123456);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%03.5X 1\n");
	rc = printf("real : [%03.5X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%03.5X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3X 1\n");
	rc = printf("real : [%05.-3X]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.-3X]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3X 123456\n");
	rc = printf("real : [%05.-3X]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%05.-3X]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	}
	//----------------------------------------------------------------------------------------------------------------
	else if (arg == 'p')
	{
		printf("%%p, '1'\n");
		rc = printf("real : [%p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%1p, '1'\n");
		rc = printf("real : [%1p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%1p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2p, '1'\n");
		rc = printf("real : [%2p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%2p, '123'\n");
		rc = printf("real : [%2p]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%2p]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0p, '123'\n");
		rc = printf("real : [%0p]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0p]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%p, -2147483648\n");
		rc = printf("real : [%p]\n", -2147483648);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%p]\n", -2147483648);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%p, 4294967295\n");
		rc = printf("real : [%p]\n", 4294967295);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%p]\n", 4294967295);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%p, 9223372036854775807\n");
		rc = printf("real : [%p]\n", 9223372036854775807);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%p]\n", 9223372036854775807);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%p, 18446744073709551615\n");
		rc = printf("real : [%p]\n", 18446744073709551615);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%p]\n", 18446744073709551615);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%4p, -12345\n");
		rc = printf("real : [%4p]\n", -12345);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%4p]\n", -12345);
		ft_printf("%d\n", rc2 - 10);
		//-----------------------------------------------------------------------------------------------
		// printf("%%-2c, 'a'\n");
		// rc = printf("real : [%-2c]\n", 'a');
		// printf("%d\n", rc - 10);
		// rc2 = ft_printf("TEST : [%-2c]\n", 'a');
		// ft_printf("%d\n", rc2 - 10); <- minus flag
/*
** precision 'd'
*/
		puts("P---------------------");
		printf("%%.p, 2\n");
		rc = printf("real : [%.p]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.p]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.0p, 2\n");
		rc = printf("real : [%.0p]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.0p]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.1p, 2\n");
		rc = printf("real : [%.1p]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.1p]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.3p, 2\n");
		rc = printf("real : [%.3p]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.3p]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-1p, 2\n");
		rc = printf("real : [%.-1p]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-1p]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-2p, 12\n");
		rc = printf("real : [%.-2p]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-2p]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.-3p, 12\n");
		rc = printf("real : [%.-3p]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.-3p]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*p, -1, 0\n");
		rc = printf("real : [%.*p]\n", -1, 0);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*p]\n", -1, 0);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*p, -2, 12\n");
		rc = printf("real : [%.*p]\n", -2, 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*p]\n", -2, 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*p, -3, 1\n");
		rc = printf("real : [%.*p]\n", -3, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*p]\n", -3, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*p, 0, 1\n");
		rc = printf("real : [%.*p]\n", 0, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*p]\n", 0, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*p, 1, 2\n");
		rc = printf("real : [%.*p]\n", 1, 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*p]\n", 1, 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*p, 2, 123\n");
		rc = printf("real : [%.*p]\n", 2, 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*p]\n", 2, 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%.*p, 2, 1\n");
		rc = printf("real : [%.*p]\n", 2, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%.*p]\n", 2, 1);
		ft_printf("%d\n", rc2 - 10);
		//
/*
**　0 flag
*/
		printf("%%0p 1\n");
		rc = printf("real : [%0p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0p 0\n");
		rc = printf("real : [%0p]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0p]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%00p 1\n");
		rc = printf("real : [%00p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%00p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%00p 0\n");
		rc = printf("real : [%00p]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%00p]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%01p 1\n");
		rc = printf("real : [%01p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%01p 12\n");
		rc = printf("real : [%01p]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%01p]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%03p 1\n");
		rc = printf("real : [%03p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%03p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%02p 1234\n");
		rc = printf("real : [%02p]\n", 1234);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%02p]\n", 1234);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-1p 1\n");
		rc = printf("real : [%0-1p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-1p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0p 1\n");
		rc = printf("real : [%0-0p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-0p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-0p 0\n");
		rc = printf("real : [%0-0p]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-0p]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%0-2p 1\n");
		rc = printf("real : [%0-2p]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%0-2p]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%0-2p 1234\n");
		rc = printf("real : [%0-2p]\n", 1234);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%0-2p]\n", 1234);
		ft_printf("%d\n", rc2 -10);
		//
/*
**	minus flag
*/

	printf("%%-p 1\n");
	rc = printf("real : [%-p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-0p 1\n");
	rc = printf("real : [%-0p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-1p 1\n");
	rc = printf("real : [%-1p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-1p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2p 1\n");
	rc = printf("real : [%-2p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-2p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-2p 1234\n");
	rc = printf("real : [%-2p]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-2p]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%--2p 1\n");
	rc = printf("real : [%--2p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%--2p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%--2p 1234\n");
	rc = printf("real : [%--2p]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%--2p]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-02p 1\n");
	rc = printf("real : [%-02p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-02p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-02p 1234\n");
	rc = printf("real : [%-02p]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-02p]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-0102p -2147483648\n");
	rc = printf("real : [%-0102p]\n", -2147483648);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-0102p]\n", -2147483648);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-9p 1\n");
	rc = printf("real : [%-01-9p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-9p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-0p 0\n");
	rc = printf("real : [%-01-0p]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-0p]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01-+3p 1\n");
	rc = printf("real : [%-01-+3p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01-+3p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-01--2p 1234\n");
	rc = printf("real : [%-01--2p]\n", 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-01--2p]\n", 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--p 1\n");
	rc = printf("real : [%05--p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4p 12\n");
	rc = printf("real : [%05--4p]\n", 12);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4p]\n", 12);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--4p 12345\n");
	rc = printf("real : [%05--4p]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--4p]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4p 1\n");
	rc = printf("real : [%5--4p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4p 0\n");
	rc = printf("real : [%5--4p]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--4p]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--4p 1\n");
	rc = printf("real : [%5--4p]\n",1);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%5--4p]\n",1);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5.4p 12345\n");
	rc = printf("real : [%-5.4p]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4p]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4p 1\n");
	rc = printf("real : [%-5.4p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.4p 0\n");
	rc = printf("real : [%-5.4p]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.4p]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n", "abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc"); <--------'s'
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.2s abc\n");
	// rc = printf("real : [%-5.2s]\n", "abc");
	// printf("%d\n", rc - 10);<----------------------------s
	// rc2 = ft_printf("TEST : [%-5.2s]\n", "abc");
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n","abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");<---------------------------s
	// ft_printf("%d\n", rc2 - 10);
	// //
	printf("%%-5.0p 0\n");
	rc = printf("real : [%-5.0p]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0p]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0p 123456789\n");
	rc = printf("real : [%-5.0p]\n", 123456789);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0p]\n", 123456789);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.0p -2\n");
	rc = printf("real : [%-5.0p]\n", -2);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.0p]\n", -2);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0p 0\n");
	rc = printf("real : [%-5...0p]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0p]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0p 1\n");
	rc = printf("real : [%-5...0p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5...0p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5...0p 123456\n");
	rc = printf("real : [%-5...0p]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5...0p]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2.9p 1\n");
	rc = printf("real : [%-5..2.9p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.9p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0p 0\n");
	rc = printf("real : [%-5..2.0p]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0p]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.0p 1\n");
	rc = printf("real : [%-5..2.0p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.0p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4p 12345\n");
	rc = printf("real : [%-5..2.4p]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2.4p]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5..2.4p 1234567\n");
	rc = printf("real : [%-5..2.4p]\n", 1234567);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%-5..2.4p]\n", 1234567);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%-5..2..p 1\n");
	rc = printf("real : [%-5..2..p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5..2..p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-5.2p 1\n");
	rc = printf("real : [%-5.2p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-5.2p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0p, 9 0\n");
	rc = printf("real : [%-*.0p]\n", 9, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0p]\n", 9, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.0p, 9 1\n");
	rc = printf("real : [%-*.0p]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.0p]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*3.0p, 9 1\n");
	rc = printf("real : [%-*3.0p]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*3.0p]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0p, 3 0\n");
	rc = printf("real : [%-*9.0p]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0p]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.0p, 3 1\n");
	rc = printf("real : [%-*9.0p]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.0p]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*9.2p, 3 0\n");
	rc = printf("real : [%-*9.2p]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*9.2p]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.6p, 3 1234\n");
	rc = printf("real : [%-*.6p]\n", 3, 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.6p]\n", 3, 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%-*.-6p, 3 1\n");
	rc = printf("real : [%-*.-6p]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%-*.-6p]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%*.-10p, 9 1\n");
	rc = printf("real : [%*.-10p]\n", 9 , 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%*.-10p]\n", 9 , 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05--1p 1\n");
	rc = printf("real : [%05--1p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05--1p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0p 1\n");
	rc = printf("real : [%5--0p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%5--0p 0\n");
	rc = printf("real : [%5--0p]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%5--0p]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.p 1\n");
	rc = printf("real : [%05.p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.0p 0\n");
	rc = printf("real : [%05.0p]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.0p]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.1p 1\n");
	rc = printf("real : [%05.1p]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.1p]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.3p 123456\n");
	rc = printf("real : [%05.3p]\n", 123456);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.3p]\n", 123456);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%03.5p 1\n");
	rc = printf("real : [%03.5p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%03.5p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3p 1\n");
	rc = printf("real : [%05.-3p]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%05.-3p]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%05.-3p 123456\n");
	rc = printf("real : [%05.-3p]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%05.-3p]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	}
//--------------------------------------------------------------------------
	else if (arg == '#')
	{
		printf("%%#x, '1'\n");
		rc = printf("real : [%#x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#1x, '1'\n");
		rc = printf("real : [%#1x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#1x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#2x, '1'\n");
		rc = printf("real : [%#2x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#2x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#2x, '123'\n");
		rc = printf("real : [%#2x]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#2x]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#0x, '123'\n");
		rc = printf("real : [%#0x]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#0x]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#x, -2147483648\n");
		rc = printf("real : [%#x]\n", -2147483648);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#x]\n", -2147483648);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#x, 4294967295\n");
		rc = printf("real : [%#x]\n", 4294967295);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#x]\n", 4294967295);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#x, 9223372036854775807\n");
		rc = printf("real : [%#x]\n", 9223372036854775807);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#x]\n", 9223372036854775807);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#4x, -12345\n");
		rc = printf("real : [%#4x]\n", -12345);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#4x]\n", -12345);
		ft_printf("%d\n", rc2 - 10);
		//-----------------------------------------------------------------------------------------------
		// printf("%%-2c, 'a'\n");
		// rc = printf("real : [%-2c]\n", 'a');
		// printf("%d\n", rc - 10);
		// rc2 = ft_printf("TEST : [%-2c]\n", 'a');
		// ft_printf("%d\n", rc2 - 10); <- minus flag
/*
** precision 'd'
*/
		puts("P---------------------");
		printf("%%#.x, 2\n");
		rc = printf("real : [%#.x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.0x, 2\n");
		rc = printf("real : [%#.0x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.0x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.1x, 2\n");
		rc = printf("real : [%#.1x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.1x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.3x, 2\n");
		rc = printf("real : [%#.3x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.3x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.-1x, 2\n");
		rc = printf("real : [%#.-1x]\n", 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.-1x]\n", 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.-2x, 12\n");
		rc = printf("real : [%#.-2x]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.-2x]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.-3x, 12\n");
		rc = printf("real : [%#.-3x]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.-3x]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.*x, -1, 0\n");
		rc = printf("real : [%#.*x]\n", -1, 0);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.*x]\n", -1, 0);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.*x, -2, 12\n");
		rc = printf("real : [%#.*x]\n", -2, 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.*x]\n", -2, 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.*x, -3, 1\n");
		rc = printf("real : [%#.*x]\n", -3, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.*x]\n", -3, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.*x, 0, 1\n");
		rc = printf("real : [%#.*x]\n", 0, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.*x]\n", 0, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.*x, 1, 2\n");
		rc = printf("real : [%#.*x]\n", 1, 2);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.*x]\n", 1, 2);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.*x, 2, 123\n");
		rc = printf("real : [%#.*x]\n", 2, 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.*x]\n", 2, 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#.*x, 2, 1\n");
		rc = printf("real : [%#.*x]\n", 2, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#.*x]\n", 2, 1);
		ft_printf("%d\n", rc2 - 10);
		//
/*
**　0 flag
*/
		printf("%%#0x 1\n");
		rc = printf("real : [%#0x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#0x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#0x 0\n");
		rc = printf("real : [%#0x]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%#0x]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%#00x 1\n");
		rc = printf("real : [%#00x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#00x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#00x 0\n");
		rc = printf("real : [%#00x]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%#00x]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%#01x 1\n");
		rc = printf("real : [%#01x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#01x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#01x 12\n");
		rc = printf("real : [%#01x]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#01x]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#03x 1\n");
		rc = printf("real : [%#03x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#03x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#02x 1234\n");
		rc = printf("real : [%#02x]\n", 1234);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#02x]\n", 1234);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#0-1x 1\n");
		rc = printf("real : [%#0-1x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#0-1x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#0-0x 1\n");
		rc = printf("real : [%#0-0x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#0-0x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#0-0x 0\n");
		rc = printf("real : [%#0-0x]\n", 0);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%#0-0x]\n", 0);
		ft_printf("%d\n", rc2 -10);
		//
		printf("%%#0-2x 1\n");
		rc = printf("real : [%#0-2x]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%#0-2x]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%#0-2x 1234\n");
		rc = printf("real : [%#0-2x]\n", 1234);
		printf("%d\n", rc -10);
		rc2 = ft_printf("TEST : [%#0-2x]\n", 1234);
		ft_printf("%d\n", rc2 -10);
		//
/*
**	minus flag
*/

	printf("%%#-x 1\n");
	rc = printf("real : [%#-x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-0x 1\n");
	rc = printf("real : [%#-0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-1x 1\n");
	rc = printf("real : [%#-1x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-1x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-2x 1\n");
	rc = printf("real : [%#-2x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-2x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-2x 1234\n");
	rc = printf("real : [%#-2x]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%#-2x]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%#--2x 1\n");
	rc = printf("real : [%#--2x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#--2x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#--2x 1234\n");
	rc = printf("real : [%#--2x]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%#--2x]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%#-02x 1\n");
	rc = printf("real : [%#-02x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-02x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-02x 1234\n");
	rc = printf("real : [%#-02x]\n", 1234);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%#-02x]\n", 1234);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%#-0102x -2147483648\n");
	rc = printf("real : [%#-0102x]\n", -2147483648);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-0102x]\n", -2147483648);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-01-9x 1\n");
	rc = printf("real : [%#-01-9x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-01-9x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-01-0x 0\n");
	rc = printf("real : [%#-01-0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-01-0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-01-+3x 1\n");
	rc = printf("real : [%#-01-+3x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-01-+3x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-01--2x 1234\n");
	rc = printf("real : [%#-01--2x]\n", 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-01--2x]\n", 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05--x 1\n");
	rc = printf("real : [%#05--x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05--x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05--4x 12\n");
	rc = printf("real : [%#05--4x]\n", 12);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05--4x]\n", 12);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05--4x 12345\n");
	rc = printf("real : [%#05--4x]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05--4x]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#5--4x 1\n");
	rc = printf("real : [%#5--4x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#5--4x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#5--4x 0\n");
	rc = printf("real : [%#5--4x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#5--4x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#5--4x 1\n");
	rc = printf("real : [%#5--4x]\n",1);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%#5--4x]\n",1);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%#-5.4x 12345\n");
	rc = printf("real : [%#-5.4x]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5.4x]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5.4x 1\n");
	rc = printf("real : [%#-5.4x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5.4x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5.4x 0\n");
	rc = printf("real : [%#-5.4x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5.4x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n", "abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc"); <--------'s'
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.2s abc\n");
	// rc = printf("real : [%-5.2s]\n", "abc");
	// printf("%d\n", rc - 10);<----------------------------s
	// rc2 = ft_printf("TEST : [%-5.2s]\n", "abc");
	// ft_printf("%d\n", rc2 - 10);
	// //
	// printf("%%-5.4s abc\n");
	// rc = printf("real : [%-5.4s]\n","abc");
	// printf("%d\n", rc - 10);
	// rc2 = ft_printf("TEST : [%-5.4s]\n", "abc");<---------------------------s
	// ft_printf("%d\n", rc2 - 10);
	// //
	printf("%%#-5.0x 0\n");
	rc = printf("real : [%#-5.0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5.0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5.0x 123456789\n");
	rc = printf("real : [%#-5.0x]\n", 123456789);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5.0x]\n", 123456789);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5.0x -2\n");
	rc = printf("real : [%#-5.0x]\n", -2);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5.0x]\n", -2);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5...0x 0\n");
	rc = printf("real : [%#-5...0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5...0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5...0x 1\n");
	rc = printf("real : [%#-5...0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5...0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5...0x 123456\n");
	rc = printf("real : [%#-5...0x]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%#-5...0x]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%#-5..2.9x 1\n");
	rc = printf("real : [%#-5..2.9x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5..2.9x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5..2.0x 0\n");
	rc = printf("real : [%#-5..2.0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5..2.0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5..2.0x 1\n");
	rc = printf("real : [%#-5..2.0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5..2.0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5..2.4x 12345\n");
	rc = printf("real : [%#-5..2.4x]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5..2.4x]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5..2.4x 1234567\n");
	rc = printf("real : [%#-5..2.4x]\n", 1234567);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%#-5..2.4x]\n", 1234567);
	ft_printf("%d\n", rc2 -10);
	//
	printf("%%#-5..2..x 1\n");
	rc = printf("real : [%#-5..2..x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5..2..x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-5.2x 1\n");
	rc = printf("real : [%#-5.2x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-5.2x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-*.0x, 9 0\n");
	rc = printf("real : [%#-*.0x]\n", 9, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-*.0x]\n", 9, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-*.0x, 9 1\n");
	rc = printf("real : [%#-*.0x]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-*.0x]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-*3.0x, 9 1\n");
	rc = printf("real : [%#-*3.0x]\n", 9, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-*3.0x]\n", 9, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-*9.0x, 3 0\n");
	rc = printf("real : [%#-*9.0x]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-*9.0x]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-*9.0x, 3 1\n");
	rc = printf("real : [%#-*9.0x]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-*9.0x]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-*9.2x, 3 0\n");
	rc = printf("real : [%#-*9.2x]\n", 3, 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-*9.2x]\n", 3, 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-*.6x, 3 1234\n");
	rc = printf("real : [%#-*.6x]\n", 3, 1234);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-*.6x]\n", 3, 1234);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#-*.-6x, 3 1\n");
	rc = printf("real : [%#-*.-6x]\n", 3, 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#-*.-6x]\n", 3, 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#*.-10x, 9 1\n");
	rc = printf("real : [%#*.-10x]\n", 9 , 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#*.-10x]\n", 9 , 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05--1x 1\n");
	rc = printf("real : [%#05--1x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05--1x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#5--0x 1\n");
	rc = printf("real : [%#5--0x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#5--0x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#5--0x 0\n");
	rc = printf("real : [%#5--0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#5--0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05.x 1\n");
	rc = printf("real : [%#05.x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05.x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05.0x 0\n");
	rc = printf("real : [%#05.0x]\n", 0);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05.0x]\n", 0);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05.1x 1\n");
	rc = printf("real : [%#05.1x]\n", 12345);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05.1x]\n", 12345);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05.3x 123456\n");
	rc = printf("real : [%#05.3x]\n", 123456);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05.3x]\n", 123456);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#03.5x 1\n");
	rc = printf("real : [%#03.5x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#03.5x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05.-3x 1\n");
	rc = printf("real : [%#05.-3x]\n", 1);
	printf("%d\n", rc - 10);
	rc2 = ft_printf("TEST : [%#05.-3x]\n", 1);
	ft_printf("%d\n", rc2 - 10);
	//
	printf("%%#05.-3x 123456\n");
	rc = printf("real : [%#05.-3x]\n", 123456);
	printf("%d\n", rc -10);
	rc2 = ft_printf("TEST : [%#05.-3x]\n", 123456);
	ft_printf("%d\n", rc2 -10);
	//
	}
	//------------------------------------------------------------------------------------------
	else if (arg == ' ')
	{
		printf("%% d 123456\n");
		rc = printf("real : [% d]\n", 123456);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% d]\n", 123456);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% 1d 1\n");
		rc = printf("real : [% 1d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% 1d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% 2d 1\n");
		rc = printf("real : [% 2d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% 2d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% 2d 123\n");
		rc = printf("real : [% 2d]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% 2d]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% 02d 123\n");
		rc = printf("real : [% 02d]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% 02d]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% -2d 123\n");
		rc = printf("real : [% -2d]\n", 123);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% -2d]\n", 123);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% -2d 12\n");
		rc = printf("real : [% -2d]\n", 12);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% -2d]\n", 12);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% -2d 1\n");
		rc = printf("real : [% -2d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% -2d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% -02d 1\n");
		rc = printf("real : [% -02d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% -02d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% -*2d, 3 1\n");
		rc = printf("real : [% -*2d]\n", 3, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% -*2d]\n", 3, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% *10d, -3 1\n");
		rc = printf("real : [% *10d]\n", -3, 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% *10d]\n", -3, 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% 10d 1\n");
		rc = printf("real : [% 10d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% 10d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%% +10d 1\n");
		rc = printf("real : [% +10d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [% +10d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
	}
	else if (arg == '+')
	{
		printf("%%+10d 1\n");
		rc = printf("real : [%+10d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+10d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%+10d -1\n");
		rc = printf("real : [%+10d]\n", -1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+10d]\n", -1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%-+10d -1\n");
		rc = printf("real : [%-+10d]\n", -1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%-+10d]\n", -1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%-+10d 1\n");
		rc = printf("real : [%-+10d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%-+10d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%+010d 1\n");
		rc = printf("real : [%+010d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+010d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%+1d 1\n");
		rc = printf("real : [%+1d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+1d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%+0d 1\n");
		rc = printf("real : [%+0d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+0d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%+.0d 1\n");
		rc = printf("real : [%+.0d]\n", 1);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+.0d]\n", 1);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%+.0d 0\n");
		rc = printf("real : [%+.0d]\n", 0);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+.0d]\n", 0);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%+.10d 0\n");
		rc = printf("real : [%+.10d]\n", 0);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+.10d]\n", 0);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%+.10d 3\n");
		rc = printf("real : [%+.10d]\n", 3);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%+.10d]\n", 3);
		ft_printf("%d\n", rc2 - 10);
		//
	}
	else if (arg == 'u')
	{
		printf("%%u 3\n");
		rc = printf("real : [%u]\n", 3);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%u]\n", 3);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%u -3\n");
		rc = printf("real : [%u]\n", -3);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%u]\n", -3);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%u 4294967295\n");
		rc = printf("real : [%u]\n", 4294967295);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%u]\n", 4294967295);
		ft_printf("%d\n", rc2 - 10);
		//
		printf("%%u 9223372036854775807\n");
		rc = printf("real : [%u]\n", 9223372036854775807);
		printf("%d\n", rc - 10);
		rc2 = ft_printf("TEST : [%u]\n", 9223372036854775807);
		ft_printf("%d\n", rc2 - 10);
		//
	}






	// printf("%0.6s", "abc");
	// printf("real : [%p]\n", 9223372036854775807);
	// ft_printf("TEST : [%p]\n", 9223372036854775807);
	// printf("real : [%p]\n", 18446744073709551615);
	// ft_printf("TEST : [%p]\n", 18446744073709551615);
	// printf("%d\n");
	// ft_printf("%d\n");
	//						   18446744073709551615
	//							7fffffffffffffff
	//							1234567890123456 ->16 (* 16) = 18446744073709551614
	//		printf("%%s, \"abc\"\n");
	//		rc = printf("%%%zzd%", 100);
	//		printf("%d\n", rc);
	//		rc2 = ft_printf("%%%zzd%", 100);
	/*
** 	面白ケース
*/
	//  int rc = printf("[%-10.0.c]\n", 'c');

	// "%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c%-2c%-3c%-4c%-1c"
	// ,' ','!','"','#','$','%','&','\'','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9',':',';','<','=','>','?','@','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','[','\\',']','^','_','`','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','{','|','}','~','')
	static char *s_hidden = "hi low\0don't print me lol\0";
// "%.*o", -3, 12345
// "%.*o", -1, 12345
// "%.*o", -1, 0
// ("%.*", -1, x)
	// int rc = 0;
	// printf("[");
	// rc = printf("%.*s", -3, 0);
	// printf("]");
	// printf("\n");
	// // printf("%d\n", rc);
	// ft_printf("[");
	// rc = ft_printf("%.*s", -3, 0);
	// ft_printf("]");
	// printf("\n");
	// printf("%d\n", rc);
	return (0);
}