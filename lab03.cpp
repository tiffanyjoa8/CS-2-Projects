/**************************************************************************
 *  AUTHOR         : Tiffany Joa
 *  Lab #3       : Time and Menu/Branching
 *  CLASS          : CS2
 *  SECTION        : MTWTh: 7:30am - 12:30pm
 *  Due Date       : (#)/(#)/19
 *************************************************************************/
#include <iostream>
using namespace std;
/**************************************************************************
 *
 * Time and Menu/Branching
 *_________________________________________________________________________
 * This program accepts an exercise number from the user, runs the
 * chosen exercise, and gives the exercise output. The first example
 * accepts a number of seconds from the user and displays the number of
 * minutes, hours, or days depending on the size of the input. The second
 * example is a multiple choice menu system that provides different outputs
 * depending on the answer that the user choses.
 * ________________________________________________________________________
 * INPUT:
 *   ex: Example number used to determine section of code to run -> input
 *       from user
 *   seconds: Number of seconds from the user used for time calculator
 *              - > input from user
 *   user_input: Answer choice for activity that the user wants to do ->
 *                 input from user
 *
 * OUTPUT:
 *    minutes: Number of minutes in the user's input for number of seconds
 *    hours: Number of hours in the user's input for number of seconds
 *    days: Number of days in the user's input for number of seconds
 *************************************************************************/
int main()
{
    //constants
    string measuringStick;

    //variables
    int ex;              // INPUT - Example number
    int seconds;         // INPUT - Number of seconds from user
    char activity;    // INPUT - Answer choice for activity from user

    //output the class heading to the screen
    cout << "**************************************************\n";
    cout << "   Programmed by  : Tiffany Joa\n";
    cout << "   Student ID     : 10238983\n";
    cout << "   CS2            : MTWTh - 7:30am-12:30pm\n";
    cout << "   Lab #3         : Time and Menu/Branching\n";
    cout << "**************************************************\n";
;

    // INPUT: A description of what is being input
    // PROCESSING: Detail what is being processed
    // OUTPUT: Details of what is being output

    // INPUT: The exercise that the user wants to run
    cout << "Which exercise? ";
    cin >> ex;
    cout << endl;

      /* PROCESSING: Exercise 1 will run if 1 is the inputted exercise
    number */
      if (ex == 1)
          // All exercise 1 code
      {

          // INPUT: The number of seconds used for the time calculator
          cout << "Enter a number of seconds: ";
          cin >> seconds;

          /* PROCESSING: The number of days/hours/minutes are being
          calculated depending on the size of the input that the user
          enters. If the input is greater than or equal to 86400, the
          output will be in days. If not, if the input is greater than or
          equal to 3600, the output is in hours. If not, if the input is
          greater than or equal to 60, then the output is in minutes. */

          if ((seconds/86400) >= 1)
          {
              if ((seconds/86400) > 1)
                cout << "There are " << seconds/86400 << " days in " <<
                        seconds << " seconds." << endl;
              else
                cout << "There is 1 day in " << seconds << " seconds."
                     << endl;
          }

          else if ((seconds/3600) >= 1)
          {
              if ((seconds/3600) > 1)
                cout << "There are " << seconds/3600 << " hours in " <<
                        seconds << " seconds. " << endl;
              else
                cout << "There is 1 hour in " << seconds << " seconds. "
                     << endl;
          }

          else if ((seconds/60) >= 1)
          {
              if ((seconds/60) > 1)
                cout << "There are " << seconds/60 << " minutes in " <<
                        seconds<< " seconds." << endl;
              else
                cout << "There is 1 minute in " << seconds << " seconds."
                     << endl;
          }


      }

      /* PROCESSING: Exercise 2 will run if 2 is the inputted exercise
      number */
      else if (ex == 2)
          //All exercise 2 code
      {
          /* OUTPUT: The user menu that gives the choices for what the
           user wants to do tonight */
          cout << "What do you want to do tonight?" << endl;
          cout << "a. Go to the movies" << endl;
          cout << "b. Eat out" << endl;
          cout << "c. Hang out at the Mall" << endl;
          cout << "d. Go watch the Dodgers" << endl;
          cin >> activity;

          /* OUTPUT: The outputs given back to the user depending on the
          chosen input */
          if ((activity == 'a') || (activity == 'A'))
              cout << "I know just the movie to see!" << endl;
          else if ((activity == 'b') || (activity == 'B'))
              cout << "Great! I've been wanting to try that new Tuvaluan "
                      "restaurant!" << endl;
          else if ((activity == 'c') || (activity == 'C'))
              cout << "You bring the cash!" << endl;
          else if ((activity == 'd' )||(activity == 'D'))
               cout << "Take me out to the ball game ..." << endl;
          else
               cout << "Nothing suits you, then? I guess we'll just stay "
                       "and program!" << endl;

      }

      /* OUTPUT: There is a blank output if the user doesn't enter 1 or 2
      when asked for the exercise number */
      else if ((ex < 1) || (ex > 2))
          //No examples to run if ex is not 1 or 2
      {

      }


    return 0;
}
