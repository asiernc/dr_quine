#include <stdio.h>
#include <stdlib.h>
#define CODE "#include <stdio.h>%1$c#include <stdlib.h>%1$c#define CODE %3$c%4$s%3$c%1$c%1$cint main(void) {%1$c%2$cint i = %5$d;%1$c%2$cchar filename[50], execname[50], cmd[120];%1$c%1$c%2$cif (i <= 0) return 0;%1$c%2$ci--;%1$c%2$csprintf(filename, %3$cSully_%%d.c%3$c, i);%1$c%2$csprintf(execname, %3$cSully_%%d%3$c, i);%1$c%2$cFILE *file = fopen(filename, %3$cw%3$c);%1$c%2$cif (!file) return 1;%1$c%2$cfprintf(file, CODE, 10, 9, 34, CODE, i);%1$c%2$cfclose(file);%1$c%1$c%2$csprintf(cmd, %3$cgcc -Wall -Wextra -Werror -o %%s %%s && ./%%s%3$c, execname, filename, execname);%1$c%2$csystem(cmd);%1$c%2$creturn 0;%1$c}%1$c"

int main(void) {
	int i = 5;
	char filename[50], execname[50], cmd[120];

	if (i <= 0) return 0;
	i--;
	sprintf(filename, "Sully_%d.c", i);
	sprintf(execname, "Sully_%d", i);
	FILE *file = fopen(filename, "w");
	if (!file) return 1;
	fprintf(file, CODE, 10, 9, 34, CODE, i);
	fclose(file);

	sprintf(cmd, "gcc -Wall -Wextra -Werror -o %s %s && ./%s", execname, filename, execname);
	system(cmd);
	return 0;
}
