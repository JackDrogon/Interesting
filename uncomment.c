#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096
char buf[BUFSIZE];

static inline void uncomment(const char *s)
{
	printf("%s", s);
}

int main()
{
	int len = 0, i = 0;

	/* in ""
	 *
	 * not in ""
	 *
	 */
	// 此实际上使用getchar要好写多了
	while (fgets(buf, BUFSIZE, stdin)) {
		len = strlen(buf);
		for (i = 0; i < len; ++i) {
			if (buf[i] == '"') {
				while (i<len-1 && buf[++i]!='"')
					;
			} else {
				if (buf[i] == "/") ;
			}
		}
		uncomment(buf);
	}

	return 0;
}
