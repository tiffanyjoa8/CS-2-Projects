/**************************************************************************
 *  AUTHOR         : Tiffany Joa
 *  Lab #2         : Arithmetic Operations and Data Types
 *  CLASS          : CS2
 *  SECTION        : MTWTh: 7:30am - 12:30pm
 *  Due Date       : 1/9/19
 *************************************************************************/
#include <iostream>
using namespace std;
/**************************************************************************
 *
 * Arithmetic Operations and Data Types
 *_________________________________________________________________________
 * This program consists of two exercises. The first exercise accepts a
 *   nine-digit ISBN number from a user, calculates the checksum value,
 *   and then outputs the result to the monitor. The second exercise
 *   accepts a letter from a user, converts the char to a number, and
 *   outputs this number, which is the position of the letter in the
 *   alphabet.
 *
 * ________________________________________________________________________
 * INPUT:
 *   ex: Example number used to determine section of code to run -> input
 *       from user
 *   isbn: Integer used to find first remainder -> input from user
 *   letter: Character used to find position of letter in alphabet
 *
 * OUTPUT:
 *    Checksum:     The value of the checksum function
 *************************************************************************/
int main()
{
    //constants
    string measuringStick;

    //variables
    int ex;              // INPUT - Example number
    int isbn;            // INPUT - Dividend used to find first remainder
    int num1;            // CALC - Ninth digit of isbn
    int num2;            // CALC - Eighth digit of isbn
    int num3;            // CALC - Seventh digit of isbn
    int num4;            // CALC - Sixth digit of isbn
    int num5;            // CALC - Fifth digit of isbn
    int num6;            // CALC - Fourth digit of isbn
    int num7;            // CALC - Third digit of isbn
    int num8;            // CALC - Second digit of isbn
    int num9;            // CALC - First digit of isbn
    int Checksum;        // CALC & OUT - contains result of checksum
                         //    function
    int remain1;         // CALC - Result of first quotient
    int remain2;         // CALC - Result of second quotient
    int remain3;         // CALC - Result of third quotient
    int remain4;         // CALC - Result of fourth quotient
    int remain5;         // CALC - Result of fifth quotient
    int remain6;         // CALC - Result of sixth quotient
    int remain7;         // CALC - Result of seventh quotient
    int remain8;         // CALC - Result of eighth quotient
    char letter;         // INPUT - Letter of alphabet

    // INPUT: Get exercise number from user
    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;
      if ( ex == 1 )
      {
         // All Exercise 1 code

            // INPUT: Get ISBN from user
            cout << "Please enter the first 9 digits of the ISBN: " <<
                    "\n";
            cin >> isbn;

            // Processing: Calculate the Checksum
            num1 = isbn % 10;
            remain1 = isbn / 10;
            num2 = remain1 % 10;
            remain2 = remain1 / 10;
            num3 = remain2 % 10;
            remain3 = remain2 / 10;
            num4 = remain3 % 10;
            remain4 = remain3 / 10;
            num5 = remain4 % 10;
            remain5 = remain4 / 10;
            num6 = remain5 % 10;
            remain6 = remain5 / 10;
            num7 = remain6 % 10;
            remain7 = remain6 / 10;
            num8 = remain7 % 10;
            remain8 = remain7 / 10;
            num9 = remain8 % 10;
            Checksum = (9 * num1 + 8 * num2 + 7 * num3 + 6 * num4 +
                        5 * num5 + 4 * num6 + 3 * num7 + 2 * num8 +
                        1 * num9) % 11;

            // OUTPUT: Output the Checksum
            cout << "Checksum: " << Checksum << endl;
      }
      else if ( ex == 2 )
      {
         // All Exercise 2 code

            // INPUT: Get character from user
            char letter;
            cout << "Enter a character: " << endl;
            cin >> letter;

            // OUTPUT: Output the letter's position in the alphabet
            cout << letter << " is letter " << letter - 'a' +1 << endl;

      }

      else if (ex >2)
         // Example to run if the user input for ex is greater than 2
      {
      }

      return 0;
}
