// 14 下.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int maxL(int* b, int n) {
	int i, temp = 0;
	for (i = 0; i < n; i++) {
		if (b[i] > temp) {
			temp = b[i];
		}
	}
	return temp;
}

int main()
{
	int n = 5, a[5], b[5], i, j, len;
	//scanf_s("%d", &n);
	a[0] = 3;
	a[1] = 4;
	a[2] = 5;
	a[3] = 6;
	a[4] = 7;
	/*for (i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}*/
	b[0] = 1;
	for (i = 1; i < n; i++) {
		for (j = 0, len = 0; j <= i; j++) {
			if (a[j] <= a[i] && len < b[j]) {
				len = b[j];
			}
		}
		b[i] = len + 1;
	}

	printf("len:%d\n", maxL(b, n));
	system("pause");
	return 0;
}

