#include <math.h>
#include <stdbool.h>
#include <stdio.h>

bool calculate_bmi(double mass_kg, double height_m, double *result)
{
    if (result == NULL || !isfinite(mass_kg) || !isfinite(height_m) ||
        mass_kg <= 0.0 || height_m <= 0.0) {
        return false;
    }
    *result = mass_kg / (height_m * height_m);
    return true;
}

const char *bmi_category(double bmi)
{
    if (!isfinite(bmi) || bmi < 0.0) {
        return "Invalid";
    }
    if (bmi < 18.5) {
        return "Underweight";
    }
    if (bmi < 25.0) {
        return "Normal weight";
    }
    if (bmi < 30.0) {
        return "Overweight";
    }
    return "Obese";
}

#ifndef BMI_CALCULATOR_NO_MAIN
int main(void)
{
    double mass;
    double height;
    double bmi;

    printf("Mass (kg): ");
    if (scanf("%lf", &mass) != 1) {
        fprintf(stderr, "Error: mass must be a number.\n");
        return 1;
    }

    printf("Height (m): ");
    if (scanf("%lf", &height) != 1) {
        fprintf(stderr, "Error: height must be a number.\n");
        return 1;
    }

    if (!calculate_bmi(mass, height, &bmi)) {
        fprintf(stderr, "Error: mass and height must be finite and greater than zero.\n");
        return 1;
    }

    printf("BMI: %.2f\n", bmi);
    printf("Category: %s\n", bmi_category(bmi));
    return 0;
}
#endif
