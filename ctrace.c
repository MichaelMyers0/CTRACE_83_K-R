#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

main(argc, argv)
int argc;
char** argv;
{
	if (argc < 2)
	{
		fprintf(stderr, "ERROR: Provide program name\n");
		exit(1);
	}
	_exit(0);
}
