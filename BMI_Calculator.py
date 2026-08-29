"""Body mass index calculator with input validation."""

from __future__ import annotations

import math


def calculate_bmi(mass_kg: float, height_m: float) -> float:
    """Calculate BMI from mass in kilograms and height in metres."""

    mass_kg = float(mass_kg)
    height_m = float(height_m)
    if not math.isfinite(mass_kg) or not math.isfinite(height_m):
        raise ValueError("Mass and height must be finite numbers.")
    if mass_kg <= 0 or height_m <= 0:
        raise ValueError("Mass and height must be greater than zero.")
    return mass_kg / height_m**2


def bmi_category(bmi: float) -> str:
    """Return the standard adult BMI category for a BMI value."""

    if not math.isfinite(bmi) or bmi < 0:
        raise ValueError("BMI must be a finite, non-negative number.")
    if bmi < 18.5:
        return "Underweight"
    if bmi < 25:
        return "Normal weight"
    if bmi < 30:
        return "Overweight"
    return "Obese"


def main() -> int:
    try:
        mass = float(input("Mass (kg): ").strip())
        height = float(input("Height (m): ").strip())
        bmi = calculate_bmi(mass, height)
    except ValueError as error:
        print(f"Error: {error}")
        return 1

    print(f"BMI: {bmi:.2f}")
    print(f"Category: {bmi_category(bmi)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
