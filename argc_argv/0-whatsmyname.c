#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
	const char *programName = strrchr(argv[0], '/');

	if (programName == NULL)
	{
		programName = argv[0];
	}
	else
	{
		programName++;
	}

	printf("%s\n", programName);

		return (0);
}
