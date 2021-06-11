/**
 * program prints hello world until you shut it down
 */
#include <stdio.h>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
	while (1)
	{
		printf("C   C  CCCCC  C      C      CCCCC\n");
		printf("C   C  C      C      C      C   C\n");
		printf("C   C  C      C      C      C   C\n");
		printf("CCCCC  CCC    C      C      C   C\n");
		printf("C   C  C      C      C      C   C\n");
		printf("C   C  C      C      C      C   C\n");
		printf("C   C  CCCCC  CCCCC  CCCCC  CCCCC\n");
		printf("\n");
		printf("C   C  CCCCC  CCCCC  C      CCCC \n");
		printf("C   C  C   C  C   C  C      C   C\n");
		printf("C C C  C   C  CCCCC  C      C   C\n");
		printf("CC CC  C   C  CC     C      C   C\n");
		printf("C   C  C   C  C C    C      C   C\n");
		printf("C   C  C   C  C  C   C      C   C\n");
		printf("C   C  CCCCC  C   C  CCCCC  CCCC \n");
		sleep(0.3);
		printf("\n\n");
	}

	return 0;
	
}
