
void reverse(char *arr, int strlen_start, int strlen_end)
{
	int re_num = (strlen_end - strlen_start) / 2;
	for (int i = 0; i <= re_num; i++)
	{
		char temp = arr[strlen_end];
		arr[strlen_end] = arr[strlen_start];
		arr[strlen_start] = temp;
		strlen_start++;
		strlen_end--;
	}
}
void Rotate_reverse_pos(char *arr, int n, int d)
{
	reverse(arr, 0, d - 1);
	reverse(arr, d, n - 1);
	reverse(arr, 0, n - 1);
}
void Rotate_reverse_neg(char *arr, int n, int d)
{
	reverse(arr, n - d, n - 1);
	reverse(arr, 0, n - d - 1);
	reverse(arr, 0, n - 1);
}
