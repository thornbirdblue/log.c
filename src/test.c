#include <stdio.h>

#include "log.h"

void main(void)
{
	FILE *fp= fopen("log.txt","w");

	log_add_fp(fp,LOG_TRACE);

	log_info("Test log print!");
	
	fclose(fp);
}
