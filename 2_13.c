//write a program to perform menu-driven operations of a volume calculator on input values: Volume of a sphere,cylinder,cone,cuboid.
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
    int choice;
    do {
        printf("\nVolume Calculator Menu:\n");
        printf("1. Sphere\n");
        printf("2. Cylinder\n");
        printf("3. Cone\n");
        printf("4. Cuboid\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: {
                double r, volume;
                printf("Enter radius of the sphere: ");
                scanf("%lf", &r);
                volume = (4.0/3.0) * PI * pow(r,3.0);
                printf("Volume of Sphere: %.2lf\n", volume);
                break;
            }
            case 2: {
                double r, h, volume;
                printf("Enter radius and height of the cylinder: ");
                scanf("%lf %lf", &r, &h);
                volume = PI * r * r * h;
                printf("Volume of Cylinder: %.2lf\n", volume);
                break;
            }
            case 3: {
                double r, h, volume;
                printf("Enter radius and height of the cone: ");
                scanf("%lf %lf", &r, &h);
                volume = (1.0/3.0) * PI * r * r * h;
                printf("Volume of Cone: %.2lf\n", volume);
                break;
            }
            case 4: {
                double l, b, h, volume;
                printf("Enter length, breadth and height of the cuboid: ");
                scanf("%lf %lf %lf", &l, &b, &h);
                volume = l * b * h;
                printf("Volume of Cuboid: %.2lf\n", volume);
                break;
            }
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice. Try again.\n");
        }
    } while(choice != 5);
    return 0;
}