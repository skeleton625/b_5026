#include <cstdio>

int a, b, t;
char n[10];
int main() {
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%s", n, 10);
		if (n[0] == 'P') printf("skipped\n");
		else {
			sscanf_s(n, "%d+%d", &a, &b);
			printf("%d\n", a + b);
		}
	}
	return 0;
}