#include <stdio.h>
#include <string.h>

// https://codeforces.com/problemset/problem/71/A

int main()
{
	char result[4];
	int n;

	scanf("%d", &n);

	char yeps[101][101];

	for(int i = 0; i < n; i++){
			scanf("%s", &yeps[i][0]);
	}

	for(int i = 0; i < n; i++) {
		if(strlen(yeps[i]) > 10) {
		
		// scanf("%s", argv);
		
		int strlen1 = strlen(yeps[i]) - 2;
		char strncpy1[2];
		strncpy(strncpy1, yeps[i], 1);
		strrev(yeps[i]);
		strcpy(result, strncpy1);

		char strncpy2[2];
		strncpy(strncpy2, yeps[i], 1);

		// printf("%s", strncpy1);
		// printf("%d", strlen1);
		// printf("%s\n", strncpy2);

		printf("%s%d%s\n", strncpy1, strlen1, strncpy2);
		} else {
			printf("%s\n", yeps[i]);
		}
	}

	return 0;
}