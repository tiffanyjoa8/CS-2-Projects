/**************************************************************************
 *  AUTHOR         : Tiffany Joa
 *  Lab #4         : Introduction to Loops
 *  CLASS          : CS2
 *  SECTION        : MTWTh: 7:30am - 12:30pm
 *  Due Date       : 1/14/19
 *************************************************************************/
#include <iostream>
using namespace std;
/**************************************************************************
 *
 * Introduction to Loops
 *_________________________________________________________________________
 * This program allows the user to run three exercises. The first exercise
 * outputs whether the string from the user contains an 'x' or an 'e'. The
 * second exercise outputs the given input with modifications in whcih 'e'
 * becomes '3,' 'i' becomes '1,' and 'x' becomes '*.' The third exercise
 * searches the input for the occurence of '.' and "stop."
 *
 * ________________________________________________________________________
 * INPUT:
 *   exercise: the exercise that the user wants to run -> input from user
 *   word: the word that the program searches through for that exercise ->
 *          input from user
 *   sentence: the sentence that the program searches through for that
 *              exercise -> input from user
 *
 * OUTPUT:
 *    The program outputs the search/identification results from the
 *    exercise
 *************************************************************************/
int main()
{
    //variables
    int exercise;    // INPUT - The exercise that the user wants to run
    string word;     // INPUT - The word that the user wants the program to
                     //         search through
    string sentence; // INPUT - The sentence that the user wants the
                     //         program to search through
    int count;       // CALC - The counter that makes sure that the loop
                     //         doesn't run for longer than the given
                     //         word's lenth
    int found;       // CALC - The counter that makes sure that the program
                     //         only outputs finding 'e' once
    int find;        // CALC - The counter that makes sure that the program
                     //         only outputs finding 'x' once
    int size;        // CALC - The length of the inputted word

    // INPUT: The user enters the number of the exercise he/she wants the
    //          program to run
    cout << "Which exercise: \n";
    cin >> exercise;
      // PROCESSING: If the input for exercise is 1, the following code
      //                will run
      if (exercise == 1)
      {
        // All Exercise 1 code
          // INPUT: The user enters the word to be used in the program and
          //        count, find, and found are initialized to 0
          cout << "Enter a word: \n";
          cin >> word;
          count = 0;
          found = 0;
          find = 0;
          size = word.size();

          // PROCESSING: The loop will run for as long as count is less
          //            than the size of the word and if the character 'e'
          //            is not found yet
          for (count = 0; count <= size; count++)
              if (found < 1)
              if (word.at (count) == 'e')
              {

                  // OUTPUT: The program will output that 'e' was found
                  cout << "Your word " << word << " contains the character "
                                                  "'e'"
                       << endl;
                  found++;
              }
          // PROCESSING: The loop will run for as long as count is less
          //            than the size of the word and if the character 'x'
          //            is not found yet
          for (count = 0; count <size; count++)
              if (find < 1)
              if (word.at (count) == 'x')
              {

                  // OUTPUT: The program will output that 'x' was found
                  cout << "Your word " << word << " contains the character "
                                                  "'x'"
                       << endl;
                  find++;
              }

          }

      // PROCESSING: If the input for exercise is 2, the following code
      //                will run
      if (exercise == 2)
      {
          // INPUT: The user inputs the word to be used in the program
          cout << "Enter a word: \n";
          cin >> word;

          // PROCESSING: word.size finds the length of the word
          size = word.size();

          // PROCESSING: The loop will run and change e to 3, x to *, and i
          //             to 1 for as long as count is less than the size of
          //             the word
          for (unsigned int count = 0; count < size; count++)
          {
              if (word.at(count) == 'e')
                  word.at(count) = '3';
              else if (word.at(count) == 'x')
                  word.at(count) = '*';
              else if (word.at(count) == 'i')
                  word.at(count) = '1';

          }

          // OUTPUT: The program will output the transformed word
          cout << "Your word transformed is " << word << endl;
       }

      // PROCESSING: If the input for exercise is 3, the following code
      //                will run
      if (exercise == 3)
      {

          // INPUT: The user inputs the sentence to be used in the program
          cout << "Enter a sentence: \n";
          cin >> sentence;

          // PROCESSING: The character '.' will be searched for and located
          //             in the sentence
          if (sentence.find('.') != string::npos) {
              int pos = sentence.find('.');

              // OUTPUT: The character's location will be outputed
              cout << "The character '.' is located at index " << pos <<
                      endl;
          }
          else

              // OUTPUT: If the sentence doesn't contain '.', the program
              //            will output this
              cout << "Your sentence does not contain the character '.'"
                   << endl;

          // PROCESSING: The word "stop" will be searched for and located
          //                in the sentence
          if (sentence.find("stop") != string::npos) {
              int pos = sentence.find("stop");

              // OUTPUT: The location of the word "stop" will be outputted
              cout << "The word \"stop\" is located at index " << pos <<
                      endl;
          }
          else {

              // OUTPUT: If the sentence doesn't contain "stop," the
              //            program will output this
              cout << "The sentence does not contain the word \"stop\"" <<
                      endl;
          }
      }
      return 0;
}

