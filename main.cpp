// ------------- FILE HEADER -------------
// Author ✅: Phoenix Morgan
// Assignment ✅: 4
// Date ✅: 10/18/25
// Citations: zybooks.com chapter 4


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 4
// Participation ✅: 65 %
// Challenge ✅: 37 %
// Labs ✅: 100 %


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <string>

using namespace std;

// Function prototypes (if any)

// Use make to automate testing
// make all test clean

// g++ command run interactively
// g++ main.cpp && ./a.out && rm ./a.out

// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main() {
  string s1 = "";
  string s2 = "";
  size_t phraseIndex1;
  size_t phraseIndex2;
  string s1InsideS2;
  string s2InsideS1;
  string thankYouMessage;

  thankYouMessage = "Thank you for using my program!";

  cout << "Welcome to the Phrases and Subphrases program!" << endl;

  cout << "Enter Phrase 1: ";
  getline(cin, s1); // Reads whole line including spaces
  cout << "You entered: " << s1 << endl;

  cout << "Enter Phrase 2: ";
  getline(cin, s2); // Reads whole line including spaces
  cout << "You entered: " << s2 << endl;

  phraseIndex1 = s1.find(s2);
  phraseIndex2 = s2.find(s1);

  if (phraseIndex1 != string::npos) {
     s2InsideS1 = s1.substr(phraseIndex1);
     cout << s2 << " is found in " << s1 << endl;
     cout << s2InsideS1 << endl << thankYouMessage << endl;
  }
  
  if (phraseIndex2 != string::npos) {
    s1InsideS2 = s2.substr(phraseIndex2);
    cout << s1 << " is found in " << s2 << endl;
    cout << s1InsideS2 << endl << thankYouMessage << endl;
  }

  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name: Phrases and subphrases program.

Program Description: takes two seperate phrases from the user, compares them,
then tells the user if one of the phrases is a subphrase of the other.

Design:
A. INPUT
string s1
string s2

B. OUTPUT
  size_t phraseIndex1
  size_t phraseIndex2
  string s1InsideS2
  string s2InsideS1
  string thankYouMessage

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
No calculations needed.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

DECLARE String s1
DECLARE String s2
DECLARE Size_t (unsigned int) phraseIndex1
DECLARE Size_t (unsigned int) phraseIndex2
DECLARE String s1InsideS2
DECLARE String s2InsideS1
DECLARE String thankYouMessage

SET thankYouMessage = "Thank you for using my program!"

DISPLAY "Welcome to the Phrases and Subphrases program!"

DISPLAY "Enter Phrase 1: "
INPUT s1
DISPLAY "You entered: ", s1

DISPLAY "Enter Phrase 2: "
INPUT s2
DISPLAY "You entered: ", s2

SET phraseIndex1 = FIND(s2 IN s1)      \\find returns -1 if not found
SET phraseIndex2 = FIND(s1 IN s2)     

IF phraseIndex1 != -1 THEN
     SET s2InsideS1 = SUBSTRING(s1, phraseIndex1)
     DISPLAY s2 is found in s1
     DISPLAY s2InsideS1
     DISPLAY thankYouMessage

iF phraseIndex2 != -1 THEN
     SET s1InsideS2 = SUBSTRING(s2, phraseIndex2)
     DISPLAY s1 is found in s2
     DISPLAY s1InsideS2
     DISPLAY thankYouMessage

END IF

SAMPLE RUNS
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: truck
You entered: truck
Enter Phrase 2: firetruck is here
You entered: firetruck is here

truck is found in firetruck is here
truck is here

Thank you for using my program!

Welcome to the Phrases and Subphrases program!

Enter Phrase 1: the green grass grows
You entered: the green grass grows
Enter Phrase 2: green grass
You entered: green grass

green grass is found in the green grass grows
green grass grows

Thank you for using my program!

Welcome to the Phrases and Subphrases program!

Enter Phrase 1: He was between a rock and a hard place
You entered: He was between a rock and a hard place
Enter Phrase 2: rock
You entered: rock

rock is found in He was between a rock and a hard place
rock and a hard place

Thank you for using my program!


*/
