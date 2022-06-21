#include <stdio.h>

#define MAX 1024

int main(int argc, char* argv[]) {

	char word1[MAX];

	int i, c;
	for(i = 0; i < MAX - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
		word1[i] = c;

	if (c == '\n')
		word1[i++] = c;
	word1[i] = '\0';

	char word2[MAX];
	i = 0;
	while (i < MAX - 1) {
		if ((c = getchar()) != EOF) {
			word2[i++] = c;
			if (c == '\n') {
				break;
			}
		} else {
			break;
		}
	}

	word2[i] = '\0';

	printf("%s%s", word1, word2);
}
