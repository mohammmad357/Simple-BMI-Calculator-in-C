import unittest

from BMI_Calculator import bmi_category, calculate_bmi


class BmiCalculatorTests(unittest.TestCase):
    def test_calculation(self) -> None:
        self.assertAlmostEqual(calculate_bmi(70, 1.75), 22.8571428571)

    def test_categories_at_boundaries(self) -> None:
        cases = {
            18.49: "Underweight",
            18.5: "Normal weight",
            24.99: "Normal weight",
            25.0: "Overweight",
            29.99: "Overweight",
            30.0: "Obese",
        }
        for bmi, expected in cases.items():
            with self.subTest(bmi=bmi):
                self.assertEqual(bmi_category(bmi), expected)

    def test_invalid_measurements(self) -> None:
        for mass, height in ((0, 1.7), (70, 0), (-1, 1.7), (70, -1.7)):
            with self.subTest(mass=mass, height=height):
                with self.assertRaises(ValueError):
                    calculate_bmi(mass, height)


if __name__ == "__main__":
    unittest.main()
