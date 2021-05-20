# include <stdio.h>

int d_max(int a, int b) {
	return (a >= b) ? a : b;
}

int t_max(int a, int b, int c) {
	return d_max(d_max(a, b), c);
}

