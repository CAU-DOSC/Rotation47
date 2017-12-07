
void juggle(char line[], int n, int d) {
	char *temp = (char*)malloc((sizeof(char) * n) + 1);
	int cnt_p = 0, cnt_n = 0;

	if (d >= 0) {
		if (d >= n) {
			d %= n;
		}
		for (int i = 0; i < d; i++) {
			temp[i] = line[n - d + i];
		}
		for (int k = 0; k<d; k++) {
			if (n%d == k) {
				for (int j = 0; j<k; j++) {
					for (int i = (int)(n / d), j = 1; j <= i; i--) {
						line[d*i + cnt_n] = line[d*(i - 1) + cnt_n];
					}
					cnt_n++;
				}

				for (int j = k; j<d; j++) {
					for (int i = (int)(n / d), j = 1; j <= i; i--) {
						line[d*(i - 1) + cnt_n] = line[d*(i - 2) + cnt_n];
					}
					cnt_n++;
				}
			}
		}
		for (int i = 0; i < d; i++) {
			line[i] = temp[i];
		}
	}

	else {
		d = -d;
		if (d >= n) {
			d %= n;
		}
		for (int i = 0; i < d; i++) {
			temp[i] = line[i];
		}
		for (int k = 0; k<d; k++) {
			if (n%d == k) {
				for (int j = 0; j<k; j++) {
					for (int i = 1; i <= (int)(n / d); i++) {
						line[d*(i - 1) + cnt_p] = line[d*i + cnt_p];
					}
					cnt_p++;
				}

				for (int j = k; j<d; j++) {
					for (int i = 1; i<(int)(n / d); i++) {
						line[d*(i - 1) + cnt_p] = line[d*i + cnt_p];
					}
					cnt_p++;
				}
			}
		}
		for (int i = 0; i < d; i++) {
			line[n - d + i] = temp[i];
		}
	}
}