// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// Build a calculator program that runs in the console and performs basic
// arithmetic operations based on the user's input.
//
// -----------------------------------------------------------------------------
// OPERATIONS YOUR CALCULATOR MUST SUPPORT
// -----------------------------------------------------------------------------
//
//   1. Addition          ( + )    e.g.  10 + 3  =  13
//   2. Subtraction       ( - )    e.g.  10 - 3  =  7
//   3. Multiplication    ( * )    e.g.  10 * 3  =  30
//   4. Division          ( / )    e.g.  10 / 3  =  3.33
//   5. Modulus           ( % )    e.g.  10 % 3  =  1  (remainder)
//   6. Exponentiation    ( ^ )    e.g.  2 ^ 8   =  256
//   7. Quit
//
// -----------------------------------------------------------------------------
// HOW THE MENU SHOULD LOOK
// -----------------------------------------------------------------------------
//
//   ============================
//        SIMPLE CALCULATOR
//   ============================
//   1. Addition
//   2. Subtraction
//   3. Multiplication
//   4. Division
//   5. Modulus
//   6. Exponentiation
//   7. Quit
//   Select an operation (1-7):
//
// -----------------------------------------------------------------------------
// EXPECTED INTERACTION EXAMPLE
// -----------------------------------------------------------------------------
//
//   Select an operation (1-7): 4
//   Enter first number : 10
//   Enter second number: 3
//   Result: 10 / 3 = 3.33
//
//   Select an operation (1-7): 4
//   Enter first number : 5
//   Enter second number: 0
//   Error: Cannot divide by zero.
//
//   Select an operation (1-7): 7
//   Goodbye!
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - Each arithmetic operation MUST be written as its own function.
// - Use a loop so the calculator keeps running until the user selects Quit.
// - Division by zero must be caught and handled with a clear error message
//   (do NOT let the program crash).
// - Use fixed and setprecision(2) to display results to 2 decimal places.
// - Handle invalid menu choices gracefully.
// - For exponentiation use a loop or the pow() function from <cmath>.
//

// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

 // =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 9
// =============================================================================
//
// TASK: Console-Based Simple Calculator
//
// =============================================================================

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


// =============================================================================
// FUNCTION 1 — Addition
// =============================================================================

double add(double a, double b) {
    return a + b;
}


// =============================================================================
// FUNCTION 2 — Subtraction
// =============================================================================

double subtract(double a, double b) {
    return a - b;
}


// =============================================================================
// FUNCTION 3 — Multiplication
// =============================================================================

double multiply(double a, double b) {
    return a * b;
}


// =============================================================================
// FUNCTION 4 — Division
// =============================================================================

double divideNumbers(double a, double b) {
    return a / b;
}


// =============================================================================
// FUNCTION 5 — Modulus
// =============================================================================

int calculateModulus(int a, int b) {
    return a % b;
}


// =============================================================================
// FUNCTION 6 — Exponentiation
// =============================================================================

double exponent(double a, double b) {
    return pow(a, b);
}


// =============================================================================
// MAIN FUNCTION
// =============================================================================

int main() {

    int choice;
    double num1, num2;

    do {

        cout << "\n============================" << endl;
        cout << "       SIMPLE CALCULATOR" << endl;
        cout << "============================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exponentiation" << endl;
        cout << "7. Quit" << endl;
        cout << "Select an operation (1-7): ";

        cin >> choice;

        switch (choice) {

            // =============================================================
            // ADDITION
            // =============================================================

            case 1:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);

                cout << "Result: "
                     << num1 << " + "
                     << num2 << " = "
                     << add(num1, num2)
                     << endl;

                break;


            // =============================================================
            // SUBTRACTION
            // =============================================================

            case 2:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);

                cout << "Result: "
                     << num1 << " - "
                     << num2 << " = "
                     << subtract(num1, num2)
                     << endl;

                break;


            // =============================================================
            // MULTIPLICATION
            // =============================================================

            case 3:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);

                cout << "Result: "
                     << num1 << " * "
                     << num2 << " = "
                     << multiply(num1, num2)
                     << endl;

                break;


            // =============================================================
            // DIVISION
            // =============================================================

            case 4:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                if (num2 == 0) {

                    cout << "Error: Cannot divide by zero." << endl;

                }
                else {

                    cout << fixed << setprecision(2);

                    cout << "Result: "
                         << num1 << " / "
                         << num2 << " = "
                         << divideNumbers(num1, num2)
                         << endl;
                }

                break;


            // =============================================================
            // MODULUS
            // =============================================================

            case 5:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                if (static_cast<int>(num2) == 0) {

                    cout << "Error: Cannot calculate modulus by zero."
                         << endl;

                }
                else {

                    cout << "Result: "
                         << static_cast<int>(num1)
                         << " % "
                         << static_cast<int>(num2)
                         << " = "
                         << calculateModulus(
                                static_cast<int>(num1),
                                static_cast<int>(num2)
                            )
                         << endl;
                }

                break;


            // =============================================================
            // EXPONENTIATION
            // =============================================================

            case 6:

                cout << "Enter first number: ";
                cin >> num1;

                cout << "Enter second number: ";
                cin >> num2;

                cout << fixed << setprecision(2);

                cout << "Result: "
                     << num1 << " ^ "
                     << num2 << " = "
                     << exponent(num1, num2)
                     << endl;

                break;


            // =============================================================
            // QUIT
            // =============================================================

            case 7:

                cout << "Goodbye!" << endl;

                break;


            // =============================================================
            // INVALID CHOICE
            // =============================================================

            default:

                cout << "Error: Invalid choice. "
                     << "Please select a number between 1 and 7."
                     << endl;
        }

    } while (choice != 7);


    return 0;
}