#include "header.h"

int main() {
	int n = 0, d = 0;
	clock_t starttime, endtime;
	double exc_t_T, exc_t_J, exc_t_BS, exc_t_R = 0;
	
	while (1) {
		scanf("%d %d", &n, &d);
		char *arr = (char*)malloc(sizeof(char) * (n + 1));
		char *arr_s = (char*)malloc(sizeof(char)*(n + 1));
		srand(time(NULL));
		for (int i = 0; i < n; i++)
			arr[i] = (rand() % 26 + 'A');
		arr[n] = NULL;
		if (arr == NULL)
		{
			printf("Error\n");
			exit(1);
		}

		strcpy(arr, arr_s);
		starttime = clock();
		trivial_rotation(n, d, arr_s, n);
		endtime = clock();
		exc_t_T = (double)(endtime - starttime) / CLOCKS_PER_SEC;

		strcpy(arr, arr_s);
		starttime = clock();
		juggle(arr_s, n, d);
		endtime = clock();
		exc_t_J = (double)(endtime - starttime) / CLOCKS_PER_SEC;

		strcpy(arr, arr_s);
		starttime = clock();
		Block_Swap(arr_s, n, d);
		endtime = clock();
		exc_t_BS = (double)(endtime - starttime) / CLOCKS_PER_SEC;

		strcpy(arr, arr_s);
		if (d > 0) {
			starttime = clock();
			Rotate_reverse_pos(arr_s, n, d);
			endtime = clock();
			exc_t_R = (double)(endtime - starttime) / CLOCKS_PER_SEC;
		}
		else {
			starttime = clock();
			Rotate_reverse_neg(arr_s, n, d);
			endtime = clock();
			exc_t_R = (double)(endtime - starttime) / CLOCKS_PER_SEC;
		}
		printf("%d %d %lf %lf %lf %lf", n, d, exc_t_T, exc_t_J, exc_t_BS, exc_t_R);
	}
}