#include <stdio.h>
/*
	This is a comment OUTSIDE main
*/

void	print(void) {
	char	*str = "#include <stdio.h>%1$c/*%1$c%2$cThis program will print its own source when run OUTSIDE main%1$c*/%1$c%1$cvoid%2$cprint(void) {%1$c%2$cchar%2$c*str = %3$c%4$s%3$c;%1$c%1$c%2$cprintf(str, 10, 9, 34, str);%1$c}%1$c%1$cint%2$cmain(void) {%1$c%2$c/*%1$c%2$c%2$cThis program will print its own source when run INSIDE main.%1$c%2$c*/%1$c%2$cprint();%1$c%2$creturn 0;%1$c}%1$c";

	printf(str, 10, 9, 34, str);
}

int	main(void) {
	/*
		This program will print its own source when run INSIDE main.
	*/
	print();
	return 0;
}
