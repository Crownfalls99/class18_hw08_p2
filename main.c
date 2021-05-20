# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# include "numbers.h"

int main(int argc, char* argv[]) {

	if (argc != 4) {
		printf("Input Error\n");
		exit(1);
	}

	int arr[3] = { 0, };
	for (int i = 1; i < 4; i ++)
		arr[i - 1] = atoi(argv[i]);

	printf("%d %d\n", t_max(arr[0], arr[1], arr[2]), t_min(arr[0], arr[1], arr[2]));
	return 0;
}

