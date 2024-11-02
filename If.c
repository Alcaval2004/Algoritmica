#include <stdio.h>

int main() {
    float cal1, cal2, cal3, promedio;

    printf("Ingrese la primera calificación: ");
    scanf("%f", &cal1);
    printf("Ingrese la segunda calificación: ");
    scanf("%f", &cal2);
    printf("Ingrese la tercera calificación: ");
    scanf("%f", &cal3);

    promedio = (cal1 + cal2 + cal3) / 3;

    if (promedio >= 7.0) {
        printf("\nResultado: APROBADO\n");
    } else {
        printf("\nResultado: REPROBADO >:(\n");
    }

    return 0;
}