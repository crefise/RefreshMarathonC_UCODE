int mx_factorial_iter(int n)
{
    if ((n > __INT_MAX__) || (n < 0)) return 0;

	int res = 1;
	for (int i = 1; i <= n; i++) {
        if (res >= __INT_MAX__)
            return 0;
		res = res * i;
    }

	return res;
}
