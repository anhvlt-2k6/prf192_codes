double factional(double n) {
	if (n > 1.0) {
		return (n * factional(n - 1.0));
	} else {
		return (1.0);
	}
}

double sumToSQRT(double n) {
	if (n > 1.0) {
		return (n + sqrt(n) + sumToSQRT(n - 1.0));
	} else {
		return (1.0 + sqrt(1.0));
	}
}

void prob03() {
	
	double n, sum = 0.0;
	
	scanf("%lf", &n);
	
	for (double i = 1; i <= n; i++) {
		sum += (factional(i) / sumToSQRT(i));
	}
	
	printf("%lf", sum);
}