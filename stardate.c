#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	int precision = (argc == 1) ? 2 : atoi(argv[1]);

	if (precision > 5) precision = 5;
	else if (precision < 0) precision = 0;

	time_t t;
	double date;

	time(&t);

	date = t / (double) 100000;
	/* put last 5 digits right of the point */
	
	printf("%#.*f\n", precision, date);

	return 0;
}
