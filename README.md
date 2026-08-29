# BMI Calculator — C & Python

[![Tests](https://github.com/mohammmad357/Simple-BMI-Calculator-in-C/actions/workflows/tests.yml/badge.svg)](https://github.com/mohammmad357/Simple-BMI-Calculator-in-C/actions/workflows/tests.yml)

A validated Body Mass Index calculator implemented in C and Python. It accepts mass in kilograms and height in metres, calculates BMI, and returns an adult BMI category.

## Categories

| BMI | Category |
| ---: | --- |
| Below 18.5 | Underweight |
| 18.5–24.9 | Normal weight |
| 25.0–29.9 | Overweight |
| 30.0 and above | Obese |

## Python

```bash
python BMI_Calculator.py
python -m unittest -v
```

## C

```bash
gcc -std=c11 -Wall -Wextra -Werror -pedantic BMI_Calculator.c -o bmi_calculator
./bmi_calculator
```

Run the C tests with:

```bash
gcc -std=c11 -Wall -Wextra -Werror -pedantic -DBMI_CALCULATOR_NO_MAIN BMI_Calculator.c test_bmi_calculator.c -o test_bmi_calculator
./test_bmi_calculator
```

## Reliability improvements

- Rejects zero, negative, non-numeric, and non-finite measurements.
- Uses non-overlapping category boundaries.
- Covers the underweight, normal, overweight, and obese branches in both languages.
- Runs Python and C checks automatically with GitHub Actions.

> BMI is a screening value, not a medical diagnosis. Individual health assessment should be discussed with a qualified professional.

## License

Released under the [MIT License](LICENSE).
