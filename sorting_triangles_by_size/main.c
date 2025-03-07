#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

int comp(const void* a, const void* b) {
    double area1 = ((double*)a)[0];
    double area2 = ((double*)b)[0];
    return (area1 > area2) - (area1 < area2);
}

void sort_by_area(triangle* tr, int n) {
	
    double area_tri[n][2];

    for (int i = 0; i < n; i++) {
        double p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        area_tri[i][0] = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));
        area_tri[i][1] = i;
    }
    
    qsort(area_tri, n, sizeof(area_tri[0]), comp);
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}