/**************************************************************************
 *  AUTHOR         : Tiffany Joa
 *  Assignment #3  : Mathematics Specification
 *  CLASS          : CS2
 *  SECTION        : MTWTh: 7:30am - 12:30pm
 *  Due Date       : 1/14/19
 *************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
/**************************************************************************
 *
 * Mathematics Specification
 *_________________________________________________________________________
 * This program allows the user to make calculations using mathematical
 * operations, with different operations used each run. The operations are
 * addition, subtraction, multiplication, division, absolute value, square
 * root, pythagorean, and quadratic.
 * ________________________________________________________________________
 * INPUT:
 *   operation: type of mathematical operation to be conducted during that
 *              run -> input from user
 *   first_num: first number used in the mathematical operation -> input
 *              from user
 *   second_num: second number used in the mathematical operation (if
 *               applicable)-> input from user
 *   third_num: third number used in the mathematical oepration (if
 *              applicable) -> input from user
 *
 * OUTPUT:
 *   answer_one: first answer to the quadratic equation when it has a +
 *               sign before the square root
 *   answer_two: second answer to the quadratic equation when it has a -
 *               sign before the square root
 *************************************************************************/
int main()
{
    //variables
    string operation;       // INPUT - Type of operation to be used in the
                            //         calculation
    double first_num;       // INPUT & CALC - First number used in the
                            //                calculation
    double second_num;      // INPUT & CALC - Second number used in the
                            //                calculation (if applicable)
    double third_num;       // INPUT & CALC - Third number used in the
                            //                calculation (if applicable)
    double answer_one;      // OUTPUT - First answer to quadratic when it
                            //         has a + sign before the square root
    double answer_two;      // OUTPUT - Second answer to the quadratic when
                            //         it has a - sign before the square
                            //         root

    // INPUT: The user chooses the operation to be used in the calculation
    cout << "Please choose an operation: " << endl;
    cin >> operation;

    /* INPUT: If the operation entered is valid, the program will follow
              the if statements that apply that allow for the calculation
              to run */
    if ((operation == "fabs") || (operation == "sqrt") || (operation ==
    "addition") || (operation == "subtraction") || (operation == "division"
    "") || (operation == "multiplication") || (operation == "pythagorean")
    || (operation == "quadratic"))

    {

        // INPUT: The user enters the first number to be used in the
        //        calculation
        cout << "Enter your first number: " << endl;
        cin >> first_num;

        // PROCESSING: If the operation is fabs, then the program will
        //             calculate absolute value
        if (operation == "fabs")
        {
            // PROCESSING: The program is calculating the floating point
            //             absolute value
            // OUTPUT: The program outputs the equation and results for
            //         the floating point absolute value calculation
            cout << "Equation: fabs(" << first_num << ") " << endl;
            cout << endl;
            cout << "Results: " << fabs(first_num) << endl;
        }

        // PROCESSING: If the operation is sqrt, the program will
        //             calculate square root
        else if (operation == "sqrt")
        {

            // PROCESSING: If the first number is greater than or equal to
            //             zero, the square root will be calculated
            if (first_num >= 0)
            {

                // PROCESSING: The program is calculating the square root
                // OUTPUT: The program outputs the equation and results for
                //         the square root calculation
                cout << "Equation: sqrt(" << first_num << ")" << endl;
                cout << endl;
                cout << "Results: " << sqrt(first_num) << endl;
            }

            // PROCESSING: If the first number is less than zero, an error
            //             message will show up
            else
            {

                // OUTPUT: The program outputs the equation and the error
                //         message
                cout << "Equation: sqrt(" << first_num << ")" << endl;
                cout << endl;
                cout << "Error: Cannot take square root of a negative "
                        "number." << endl;
            }
        }

        // PROCESSING: If the operation is any of the following operations,
        //            it will output the request to take in a second number
        // INPUT: The user inputs the second number to be used in the
        //        calculation
        if ((operation == "addition") || (operation == "subtraction") ||
        (operation == "division") || (operation == "multiplication") ||
        (operation == "pythagorean") || (operation == "quadratic"))
            cout << "Enter your second number: " << endl;
            cin >> second_num;

            // PROCESSING: If the operation is addition, the program will
            //             find the sum
            if ((operation == "addition"))
            {

                // PROCESSING: The program calculates the sum using the two
                //             inputs
                // OUTPUT: The program outputs the equation and results for
                //          the sum calculation
                cout << "Equation: " << first_num << " + " << second_num <<
                        endl;
                cout << endl;
                cout << "Results: " << first_num + second_num << endl;
            }

            // PROCESSING: If the operation is subtraction, the program
            //             will find the difference
            else if (operation == "subtraction")
            {

                // PROCESSING: The program calculates the difference using
                //             the two inputs
                // OUTPUT: The program outputs the equation and results for
                //         the difference calculation
                cout << "Equation: " << first_num << " - " << second_num <<
                        endl;
                cout << endl;
                cout << "Results: " << first_num - second_num << endl;
            }

            // PROCESSING: If the operation is multiplication, the program
            //             will find the product
            else if (operation == "multiplication")
            {

                // PROCESSING: The program calculates the product using the
                //             two inputs
                // OUTPUT: The program outputs the equation and results for
                //         the product calculation
                cout << "Equation: " << first_num << " * " << second_num <<
                        endl;
                cout << endl;
                cout << "Results: " << first_num * second_num << endl;
            }

            // PROCESSING: If the operation is division, the program will
            //             find the quotient
            else if (operation == "division")
            {

                // PROCESSING: The program calculates the quotient using
                //          the two inputs if the second number is not zero
                // OUTPUT: The program outputs the equation and results for
                //         the quotient calculation
                if ((second_num > 0) || (second_num < 0))
                {
                cout << "Equation: " << first_num << " / " << second_num <<
                        endl;
                cout << endl;
                cout << "Results: " << first_num / second_num << endl;
                }

                // OUTPUT: The program outputs the equation and the error
                //          message
                else
                {
                cout << "Equation: " << first_num << " / " << second_num <<
                        endl;
                cout << endl;
                cout << "Error: Cannot divide by zero." << endl;
                }
            }

            // PROCESSING: If the operation is pythagorean, then the
            //             program will find the length of the hypotenuse
            else if (operation == "pythagorean")
            {

                // PROCESSING: The program calculates the hypotenuse length
                //             using the two inputs
                // OUTPUT: The program outputs the equation and results for
                //         the pythagorean calculation
                cout << "Equation: sqrt(" << first_num << "^2 + " <<
                        second_num << "^2)" << endl;
                cout << endl;
                cout << "Results: " << sqrt( pow(first_num, 2) +
                                             pow(second_num, 2)) << endl;
            }

        // PROCESSING: If the operation is division, then program will find
        //             the answer to the quadratic equation
        if ((operation == "quadratic"))
        {

            // INPUT: The user enters the third number to be used in the
            //         calculation
            cout << "Enter your third number: " << endl;
            cin >> third_num;

                // PROCESSING: If the determinant is greater than or equal
                //             to zero and the first number is not zero,
                //             the quadratic will be calculated
                if (((pow(second_num, 2) - (4 * first_num * third_num)) >=
                     0) && (first_num != 0.0))
                {

                    // PROCESSING: The program calculates the answers to
                    //             the quadratic
                    // OUTPUT: The program outputs the equation and the
                    //         results of the quadratic
                    cout << "Equation: " << first_num << "x^2 + " <<
                            second_num << "x + " << third_num << " = 0" <<
                            endl;
                    answer_one = (-second_num + (sqrt(pow(second_num, 2) -
                        (4 * first_num * third_num)))) / (2 * first_num);
                    answer_two = (-second_num - (sqrt(pow(second_num, 2) -
                        (4 * first_num * third_num)))) / (2 * first_num);
                    cout << endl;
                    cout << "Results: " << answer_one << ", " << answer_two
                         << endl;
                }

                 // PROCESSING: If the determinant is less than zero, the
                 //             program will output an error message
                 else if (((pow(second_num, 2) - (4 * first_num *
                                                  third_num)) < 0))
                 {
                    // OUTPUT: The program outputs the equation and the
                    //          error message
                    cout << "Equation: " << first_num << "x^2 + " <<
                            second_num << "x + " << third_num << " = 0" <<
                            endl;
                    cout << endl;
                    cout << "Error: Cannot take square root of a negative "
                            "number." << endl;
                 }

                 // PROCESSING: If the first number is equal to zero, the
                 //             program will output an error message
                 else if (first_num == 0.0)
                 {

                    // OUTPUT: The program outputs the equation and the
                    //          error message
                    cout << "Equation: " << first_num << "x^2 + " <<
                            second_num << "x + " << third_num << " = 0" <<
                            endl;
                    cout << endl;
                    cout << "Error: Cannot divide by zero." << endl;
                  }
            }

    }

    // OUTPUT: The program will output an error message if the operation
    //         is not supported
    else
        cout << "Error: Operation not supported." << endl;


return 0;
}
