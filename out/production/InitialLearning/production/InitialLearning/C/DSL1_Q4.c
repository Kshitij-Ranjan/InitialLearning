#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex a, struct Complex b) {
    struct Complex res;
    res.real = a.real + b.real;
    res.imag = a.imag + b.imag;
    return res;
}

struct Complex multiply(struct Complex a, struct Complex b) {
    struct Complex res;
    res.real = (a.real * b.real) - (a.imag * b.imag);
    res.imag = (a.real * b.imag) + (a.imag * b.real);
    return res;
}

int main() {
    int choice;
    struct Complex c1, c2, result;

    do {
        printf("\nMenu:\n");
        printf("1. Add two complex numbers\n");
        printf("2. Multiply two complex numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1 || choice == 2) {
            printf("Enter real and imaginary part of first complex number: ");
            scanf("%f %f", &c1.real, &c1.imag);
            printf("Enter real and imaginary part of second complex number: ");
            scanf("%f %f", &c2.real, &c2.imag);
        }

        switch (choice) {
            case 1:
                result = add(c1, c2);
                printf("Sum = %.2f + %.2fi\n", result.real, result.imag);
                break;
            case 2:
                result = multiply(c1, c2);
                printf("Product = %.2f + %.2fi\n", result.real, result.imag);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
