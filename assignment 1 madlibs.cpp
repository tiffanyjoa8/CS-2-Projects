/**************************************************************************
 *  AUTHOR         : Tiffany Joa
 *  Assignment #1  : Madlibs
 *  CLASS          : CS2
 *  SECTION        : MTWTh: 7:30am - 12:30pm
 *  Due Date       : 1/9/19
 *************************************************************************/
#include <iostream>
#include <string>
using namespace std;
/**************************************************************************
 *
 * Madlibs
 *_________________________________________________________________________
 * This program accepts user input to fill in spaces in a Madlibs story,
 * enters it into the spaces, and then outputs the complete story.
 * ________________________________________________________________________
 * INPUT:
 *   name1: First name of person entered in story
 *   verb1: First verb ending in -ing entered in story
 *   noun1: First noun entered in story
 *   noun2: Second noun entered in story
 *   name2: Second name of person entered in story
 *   place1: First name of place entered in story
 *   verb2: Second verb ending in -ing entered in story
 *   verb3: Third verb ending in -ed entered in story
 *   place2: Second name of place entered in story
 *   company1: First name of company entered in story
 *
 * OUTPUT:
 *    Output is the Madlibs story using the user inputs
 *************************************************************************/
int main()
{
    //variables
    string name1;       // INPUT - First name of person
    string verb1;       // INPUT - First verb ending in -ing
    string noun1;       // INPUT - First noun
    string noun2;       // INPUT - Second noun
    string name2;       // INPUT - Second name of person
    string place1;      // INPUT - First name of place
    string verb2;       // INPUT - Second verb
    string verb3;       // INPUT - Third verb
    string place2;      // INPUT - Second name of place
    string company1;    // INPUT - First name of company

    //output the class heading to the screen
    cout << "**************************************************\n";
    cout << "   Programmed by  : Tiffany Joa\n";
    cout << "   Student ID     : 10238983\n";
    cout << "   CS2            : MTWTh - 7:30am-12:30pm\n";
    cout << "   Assignment #1  : Madlibs\n";
    cout << "**************************************************\n";
;

    // INPUT: A description of what is being input
    // PROCESSING: Detail what is being processed
    // OUTPUT: Details of what is being output

    //OUTPUT: Create a string variable consisting of 80 dashes
    string measuringStick (80,'-');

    // INPUT: First name entered in story
    cout << "Please enter your name: ";
    cin >> name1;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    // INPUT: First verb entered in story
    cout << "Please enter a verb ending in -ing: ";
    cin >> verb1;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    // INPUT: First noun entered in story
    cout << "Please enter a noun: ";
    cin >> noun1;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    // INPUT: Second noun entered in story
    cout << "Please enter a plural noun: ";
    cin >> noun2;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    // INPUT: Second name entered in story
    cout << "Please enter a female friend's name: ";
    cin >> name2;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    cout << "Please enter a place: ";
    cin >> place1;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    // INPUT: Second verb entered in story
    cout << "Please enter a verb ending in -ing: ";
    cin >> verb2;
    cout << " " << endl;

    // INPUT: Third verb entered in story
    cout << "Please enter a verb ending in -ed: ";
    cin >> verb3;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    // INPUT: Second place entered in story
    cout << "Please enter a place: ";
    cin >> place2;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    // INPUT: First company name entered in story
    cout << "Please enter a company name: ";
    cin >> company1;

    // INPUT: Blank line between paragraphs
    cout << " " << endl;

    // INPUT: Measuring stick entered before story
    cout << measuringStick;

    // INPUT: Blank line after measuring stick
    cout << " " << endl;

    // OUTPUT: Madlibs story using ten user inputs
    cout << "Good morning, " << name1 << ". Your mission, if you choose"
                " to accept it, involves " << endl;
    cout << "the "<< verb1 << " of the famous " << noun1 << ", which is a "
                "cherished national treasure. " << endl;
    cout << "You may ask a few " << noun2 << " to join your team, but I "
                "must require that one of " << endl;
    cout << "the members of your team be " << name2 << "." << endl;

    //Blank line between paragraphs
    cout << " " << endl;

    cout << "I met her through training when we were at " << place1 << ". "
                "I can vouch that she is " << endl;
    cout << "highly skilled in " << verb2 << ". You have fifteen hours to "
                "assemble your team and " << endl;
    cout << "meet me on the roof of this building to receive further "
                "instructions before " << endl;
    cout << "embarking on your mission." << endl;

    cout << " " << endl;

    cout << "As always, if any member of your team is caught or "
                << verb3 <<", the government" << endl;
    cout << "of " << place2 << " holds no responsibility and will deny all"
                " knowledge of your " << endl;
    cout << "quest. Also, the next time you go on vacation, please be sure"
                " to let us know " << endl;
    cout << "where you're traveling to. All of us here at " << company1 <<
                " wish you the best of " << endl;
    cout << "luck. This message will self-destruct in ten seconds."
         << endl;

    // OUTPUT: Measuring stick entered after story
    cout << measuringStick;

    // OUTPUT: Blank line after measuring stick
    cout<<" "<< endl;

return 0;
}


