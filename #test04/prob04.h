int comp(const void *a, const void *b) {
	return *(int*)b - *(int*)a;
}

void prob04() {
	
	int n, *arr;
	
	scanf("%d", &n);
	
	arr = malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	qsort(arr, n, sizeof(int), comp);
	
	for (int j = 0; j < n; j++) {
		if (arr[j] % 2 != 0) printf("%d ", arr[j]);
	}
}