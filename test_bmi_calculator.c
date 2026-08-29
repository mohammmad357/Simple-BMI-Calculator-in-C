#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool calculate_bmi(double mass_kg, double height_m, double *result);
const char *bmi_category(double bmi);

static bool close_enough(double left, double right)
{
    double difference = left - right;
    if (difference < 0.0) {
        difference = -difference;
    }
    return difference < 0.000001;
}

int main(void)
{
    double result = 0.0;

    assert(calculate_bmi(70.0, 1.75, &result));
    assert(close_enough(result, 22.8571428571));
    assert(!calculate_bmi(70.0, 0.0, &result));
    assert(!calculate_bmi(-1.0, 1.75, &result));
    assert(strcmp(bmi_category(18.49), "Underweight") == 0);
    assert(strcmp(bmi_category(18.5), "Normal weight") == 0);
    assert(strcmp(bmi_category(25.0), "Overweight") == 0);
    assert(strcmp(bmi_category(30.0), "Obese") == 0);

    puts("C tests passed.");
    return 0;
}
