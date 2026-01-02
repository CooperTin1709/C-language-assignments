#include<stdio.h>

int main(void) {
	int a[20], b[20],c[40];
	int n, m;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}
	scanf_s("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf_s("%d", &b[i]);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int repeat = 0;
		for (int k = 0; k < m; k++) {
			if (a[i] == b[k]) {
				repeat = 1;
				break;
			}
		}
		if (!repeat) {
			c[cnt] = a[i];
			cnt++;
		}
	}
	for (int i = 0; i < m; i++) {
		int repeat = 0;
		for (int k = 0; k < n; k++) {
			if (b[i] == a[k]) {
				repeat = 1;
				break;
			}
		}
		if (!repeat) {
			c[cnt] = b[i];
			cnt++;
		}
	}
	if (cnt == 0) {
		printf("NULL\n");
		return 0;
	}
	for (int j = 0; j < cnt - 1; j++) {
		for (int k = 0; k < cnt - 1 - j; k++) {
			if (c[k] < c[k + 1]) {
				int temp = c[k];
				c[k] = c[k + 1];
				c[k + 1] = temp;
			}
		}
	}
	for (int i = 0; i < cnt; i++) {
		printf("%d", c[cnt]);
		if (i != cnt - 1) {
			printf(" ");
		}
	}
	return 0;
}