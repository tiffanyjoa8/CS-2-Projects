/**************************************************************************
 *  AUTHOR         : Tiffany Joa
 *  Assignment #2  : Cash Register
 *  CLASS          : CS2
 *  SECTION        : MTWTh: 7:30am - 12:30pm
 *  Due Date       : 1/11/19
 *************************************************************************/
#include <iostream>
#include <string>
using namespace std;
/**************************************************************************
 *
 * Cash Register
 *_________________________________________________________________________
 * This program simulates a cash register by accepting a purchase amount
 * and the amount paid by the customer from the user, calculating the total
 * change and the amount of each monetary denomination for that amount of
 * change, and output the total change and every monetary denomination
 * quantity to return to the customer.
 *
 * ________________________________________________________________________
 * INPUT:
 *   purchase: Cost of the purchase -> input
 *   paid: Amount that the purchaser gave to the cashier to pay for the
 *          purchase -> input
 *
 * OUTPUT:
 *    total_change: Total amount of change given to the customer
 *    dollars: Amount of dollars given as part of change
 *    quarters: Amount of quarters given as part of change
 *    dimes: Amount of dimes given as part of change
 *    nickels: Amount of nickels given as part of change
 *    pennies: Amount of pennies given as part of change
 *************************************************************************/
int main()
{
    //constants
    string measuringStick;

    //variables
    double purchase;       // INPUT - Cost of the purchase
    double paid;           // INPUT - Amount paid by the consumer for the
                           //           product
    double total_change;   // OUTPUT - Total amount of change in terms of
                           //           dollars
    int total_pennies;     // CALC - Total amount of change in terms of
                           //           pennies
    int dollars;           // CALC & OUTPUT - Amount of dollars given as
                           //           part of change
    int quarters;          // CALC & OUTPUT - Amount of quarters given as
                           //           part of change
    int dimes;             // CALC & OUTPUT- Amount of dimes given as
                           //           part of change
    int nickels;           // CALC & OUTPUT - Amount of nickels given as
                           //           part of change
    int pennies;           // CALC & OUTPUT - Amount of pennies given as
                           //           part of change
    int remain1;           // CALC - Amount of change after taking out
                           //           dollar change
    int remain2;           // CALC - Amount of change after taking out
                           //           quarter change
    int remain3;           // CALC - Amount of change after taking out
                           //           nickel change
    int remain4;           // CALC - Amount of change given as pennies

;

    // INPUT: A description of what is being input
    // PROCESSING: Detail what is being processed
    // OUTPUT: Details of what is being output

    // INPUT: Cost of purchase is entered by user
    cout << "Enter purchase amount: " << endl;
    cin >> purchase;

    // INPUT: Amount received by cashier that was paid by the buyer for
    //          the purchase
    cout << "Enter amount received: " << endl;
    cin >> paid;

    // PROCESSING: Calculate total change in terms of dollars by
    //              subtracting purchase from paid
    total_change = paid - purchase;
    cout << "Total Change: $" << total_change << endl;
    cout << endl;

    // PROCESSING: Change total_change to pennies and add 0.5 to offset
    //                  truncate error
    total_pennies = static_cast<int>(100 * total_change + 0.5);

    /* PROCESSING: Calculate the change by dividing the total_pennies by
    the value of the coin denomination and finding the remainder using the
            modulus to find the number of each coin denomination */
    dollars = total_pennies / 100;
    remain1 = total_pennies % 100;
    quarters = remain1 / 25;
    remain2 = remain1 % 25;
    dimes = remain2 / 10;
    remain3 = remain2 % 10;
    nickels = remain3 / 5;
    remain4 = remain3 % 5;
    pennies = remain4;

    /* OUTPUT: Gives the output for the amount of change that should be
    given for each coin denomination */
    cout << "dollars " << dollars << endl;
    cout << "quarters " << quarters << endl;
    cout << "dimes " << dimes << endl;
    cout << "nickels " << nickels << endl;
    cout << "pennies " << pennies << endl;

    return 0;
}
