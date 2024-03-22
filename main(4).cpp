
  /* calculation menu
     Choice Menu:
     What would you like to calculate?
     Basic Math: B
     - Addition- 1
     - Subtraction- 2
     - Division- 3
     - Multiplication- 4
     - Back to Choice Menu- 5
     - Back to Main Menu- 6
     - Quit- 7
     - Quit asks are you sure
     List: L
     - Sum - 1
     - Median - 2
     - Mode - 3
     - Range - 4
     - Standard Deviation - 5
     - All - 6
     - Back to Choice Menu- 7
     - Back to Main Menu- 8
     - Quit- 9
     - Quit asks are you sure
     Area: R
     - Circle- 1
     - Square- 2
     - Triangle- 3
     - Rectangle- 4
     - Rhombus- 5
     - Back to Choice Menu- 6
     - Back to Main Menu- 7
     - Quit- 8
     - Quit asks are you sure
   */
  /* to code--- 
     It looks like youve made -- calculations so far, 
     how many previous calculations would you like to show 
     (shows a list of number of calculations and what
     each calculation did)
     ex/ 1- Area calculation
     2- List calculation
     3- Area calculation
   */

#include <iostream>
using namespace std;
#include <string>
#include <iomanip>
#include <cmath>
#include <limits>

void
MainMenu (int talk, string userName, double userFavNumber, string calcName)
{

  if (talk == 0)
	{
	  cout << "Enter: \n";
	  cout << " c for Calculations\n";
	  cout << " t for Small Talk\n";
	  cout << " h to view History\n";
	  cout << " q to Quit\n";
	  cout << "Choice: ";
	}
  else if (talk == 1)
	{
	  cout << "Welcome back to the main menu " << userName << " :)\n";
	  cout << "Enter: \n";
	  cout << " c for Calculations\n";
	  cout << " h to view History\n";
	  cout << " q to Quit\n";
	  cout << "Choice: ";
	}
}

void
calculator (bool &exitProgram)
{
  char ucChoiceMenu;
  int ucList, ucArea, ucBasic;
  bool trueMenu= false;

while (trueMenu==false){
  cout << "Choice Menu:\n";
  cout << " Basic Math: B\n";
  cout << " Area: R\n";
  cout << " List: L\n";
  cout << " Back to Main Menu: M\n";
  cout << " Quit: Q\n";
  cout << " Choice: ";
  cin >> ucChoiceMenu;


  switch (ucChoiceMenu)
	{
	case 'B':
	case 'b':
	  cout << "\nBasic Math Selected\n";
	  cout << "Would you like to:\n";
	  cout << "\t-Add: 1\n\t-Subtract: 2\n\t-Divide: 3\n\t-Multiply: 4\n";
	  cout <<
		"\t-Go back to Choice Menu: 5\n\t-Go back to Main Menu: 6\n\t-Fully Quit: 7\n";
	  cout << "Choice: ";
  while (true)
  {
    cin >> ucBasic;
    if (!ucBasic)
    {
      cout << "Please enter in a number: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }
    else break;
  }
	  switch (ucBasic)
		{
		case 1:
		  break;
		case 2:
		  break;
		case 3:
		  break;
		case 4:
		  break;
		case 5:
		trueMenu=true;
		cout << "Sending you back to Choice Menu...\n\n";
		  break;
		case 6:
		cout << "Sending you back to Main Menu...\n\n";
		  break;
		case 7:
		  exitProgram = true;
		  
		  break;
		default:
		  cout <<
			"That dosent seem to be an option, try entering one of the shown numbers";
		}
	  break;

	case 'R':
	case 'r':
	  cout << "\nArea Calculation Selected\n";
	  cout << "Choose the desired shape:\n";
	  cout <<
		"\t-Circle: 1\n\t-Square: 2\n\t-Triangle: 3\n\t-Rectangle: 4\n\t-Rhombus: 5\n";
	  cout <<
		"\t-Back to Choice Menu: 6\n\t-Back to Main Menu: 7\n\t-Fully Quit: 8\n";
	  cout << "Choice: ";
	    while (true)
  {
    cin >> ucArea;
    if (!ucArea)
    {
      cout << "Please enter in a number: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }
    else break;
  }
	  switch (ucArea)
		{
		case 1:
		  break;
		case 2:
		  break;
		case 3:
		  break;
		case 4:
		  break;
		case 5:
		  break;
		case 6:
		trueMenu=true;
		cout << "Sending you back to Choice Menu...\n\n";
		  break;
		case 7:
		cout << "Sending you back to Main Menu...\n\n";
		  break;
		case 8:
		  exitProgram = true;
		  trueMenu=true;
		  break;
		default:
		  cout <<
			"That dosent seem to be an option, try entering one of the shown numbers";
		}
	  break;

	case 'L':
	case 'l':
	  cout << "\nList Menu:\n";
	  cout <<
		"\t-Mean: 1\n\t-Range: 2\n\t-Median: 3\n\t-Standard Deviation: 4\n\t-Sum: 5\n";
	  cout <<
		"\t-All: 6\n\t-Back to Choice Menu: 7\n\t-Back to Main Menu: 8\n\t-Fully Quit: 9\n";
	  cout << "Choice: ";
	    while (true)
  {
    cin >> ucList;
    if (!ucList)
    {
      cout << "Please enter in a number: ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }
    else break;
  }
	  switch (ucList)
		{
		case 1:
		  break;
		case 2:
		  break;
		case 3:
		  break;
		case 4:
		  break;
		case 5:
		  break;
		case 6:
		  break;
		case 7:
		trueMenu=true;
		cout << "Sending you back to Choice Menu...\n\n";
		  break;
		case 8:
		cout << "Sending you back to Main Menu...\n\n";
		  break;
		case 9:
		  exitProgram = true;
		  break;
		default:
		  cout <<
			"That dosent seem to be an option, try entering one of the shown numbers";
		}
	  break;

	case 'M':
	case 'm':
	  break;

	case 'Q':
	case 'q':
	  exitProgram = true;
	  break;

	default:
	  cout <<
		"That dosent seem to be an option, try entering one of the shown letters";
	}
}
}

// Main menu loop, can only enter c q h or t
int
main ()
{
  char userChoice;
  string userName = "User";
  double userFavNumber;
  string calcName = "Calculator";
  int talk = 0;
  char ucChoiceMenu;
  int ucList = 0;
  bool exitProgram = false;
  bool trueMenu= false;

  cout << "Welcome to your Calculator!\n\n";
  cout <<
	"Would you like to get to know eachother or go straight to calculations?\n";


  while (exitProgram==false)
	{
	  MainMenu (talk, userName, userFavNumber, calcName);
	  cin >> userChoice;

	  switch (userChoice)
		{
		case 'C':
		case 'c':
		  cout << "\nWhat would you like to calculate " << userName << "?\n";
		  calculator (exitProgram);
		  break;
		case 'T':
		case 't':
		  {
			cout << "\nWelcome, whats your first name?: ";
			cin >> userName;
			cout << "Wow! what a coincidence " << userName << "!" << endl;
			calcName = userName;
			calcName[0] = 'B';
			cout << "My name just so happens to be " << calcName << "!" <<
			  endl;
			// Calculator name is the same as your's except it starts with a B

			cout << "\nOkay " << userName << " What's your favorite number?";
			cout << "\nMines " << userName.size () <<
			  ", its the number of letters in your name :)";

			cout << "\nFavorite Number: ";
			cin >> userFavNumber;

			if (userFavNumber > userName.size ())
			  {
				cout << "That\'s bigger than my favorite number!\n";
			  }
			else if (userFavNumber < userName.size ())
			  {
				cout << "That\'s smaller than my favorite number!\n";
			  }
			else if (userFavNumber = userName.size ())
			  {
				cout << "No way! Two things in common!\n";
			  }
			cout << "Thanks for talking with me " << userName <<
			  ", Ive learned so much about you!\n";
			cout << "Sending you back to Main Menu...\n\n";
			talk++;
			break;
		  }
		case 'H':
		case 'h':
		  cout << "This feature hasnt been added yet, sorry!\n\n";
		  break;
		case 'Q':
		case 'q':
		  exitProgram = true;
		  break;
		default:
		  cout << "That dosent seem to be an option, try again\n\n";
		}
	}
  cout << "\nAlright " << userName << ", hope to see you later!";
  return 0;
}
