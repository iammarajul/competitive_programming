#include<stdio.h>
#include<string.h>
int main() {
	char xm[1009], bm[1009];
	scanf("%s", xm);
	int m = strlen(xm);
	for (int i = 0; i < m; i++) {
		bm[i] = xm[m - i - 1];
	}
	bm[m] = '\0';
	printf("%s\n", bm);
}