void prob02() {
	
	double salary;
	
	scanf("%lf", &salary);
	
	if (0 <= salary && salary <= 100000) {
		printf("Year Bonus: 1000");
	} else if (100000 < salary && salary <= 120000) {
		printf("Year Bonus: %.0lf", ((salary - 100000) * (1.0 / 100)));
	} else if (120000 < salary && salary <= 140000) {
		printf("Year Bonus: %.0lf", ((salary - 120000) * (2.0 / 100)));
	} else if (salary > 140000) {
		printf("Year Bonus: %.0lf", ((salary - 140000) * (3.0 / 100)));
	} else {
		printf(" ?");
	}
}