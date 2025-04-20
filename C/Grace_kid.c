#include <stdio.h>
#define FILE_NAME "Grace_kid.c"
#define STR "#include <stdio.h>%1$c#define FILE_NAME %3$cGrace_kid.c%3$c%1$c#define STR %3$c%4$s%3$c%1$c#define MAIN(void) int main(void) { FILE *file = fopen(FILE_NAME, %3$cw%3$c); if (!file) return 1; fprintf(file, STR, 10, 9, 34, STR); fclose(file);}%1$c/*%1$c%2$cThis is a comment%1$c*/%1$c%1$cMAIN(void)%1$c"
#define MAIN(void) int main(void) { FILE *file = fopen(FILE_NAME, "w"); if (!file) return 1; fprintf(file, STR, 10, 9, 34, STR); fclose(file);}
/*
	This is a comment
*/

MAIN(void)
