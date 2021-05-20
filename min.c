# include <stdio.h>

int d_min(int a, int b) {
	return (a <= b) ? a : b;
}

int t_min(int a, int b, int c) {
	return d_min(d_min(a, b), c);
}

