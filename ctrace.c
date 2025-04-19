#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
enum {buf_cap = 1024};
#define INSERT_MACRO(VAR_NAME, VAR_FORMAT, VAR_VALUE)\

static char buf[buf_cap] = {'/', '*'};

main(argc, argv)
int argc;
char** argv;
{
	int n = 0;
	if (argc < 3)
	{
		fprintf(stderr, "ERROR: Provide program name\n");
		exit(1);
	}
	_exit(0);
}
