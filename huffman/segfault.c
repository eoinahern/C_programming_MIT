#include<stdio.h>
#include<stdlib.h>


main(int arc, char **argv)
{

	char *buf;
	

	buf = malloc(1<<31);

	fgets(buf, 1024, stdin);
	printf("%s\n", buf);
        return 1;

}
