#include <stdio.h>

int main(void) {
    puts("1 for the area of the circle");  // Area del cerchio
    puts("2 for the area of quadrate");     // Area del quadrato
    puts("3 for the area of ​​the sphere");   // Area della sfera
    puts("Insert a number for the choose: ");

    unsigned int i;

    scanf("%u", &i);

    float x, y;

    switch (i)
    {
    case 1:
        // Cerchio
        puts("Insert the radius:");
        scanf("%f", &x);
        y = 3.14 * x * x;
        printf("Area circle: %f", y);
        break;

    case 2:
        // Quadrato
        puts("Insert the side:");
        scanf("%f", &x);
        y = 3.14 * x * x;
        printf("Area quadrate: %f", y);

    case 3:
        // Sfera
        puts("Insert the radius:");
        scanf("%f", &x);
        y = 4 * 3.14 * x * x;
        printf("Area sphere: %f", y);
        break;

    default:
        puts("Operazione non valida");
        break;
    }
    return 0;
}
