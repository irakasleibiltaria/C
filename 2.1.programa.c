#include <stdio.h>

#define PI 3.14159

main () {
	float r, azalera, perimetroa;

	printf("Sakatu erradioaren neurria\n");
	scanf("%f", &r);
	perimetroa = 2 * PI * r;
	azalera = PI * r * r;
	printf("perimetroa: %f\n", perimetroa);
	printf("azalere: %f\n", azalera);

}