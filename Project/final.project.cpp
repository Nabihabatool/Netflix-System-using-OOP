#include <iostream>

#include<conio.h>

#include<string.h>

#include<string>

#include<fstream>

using namespace std;
void displayMessage() {
  cout << "\n\t*****************************";
  cout << "\n\t*                           *";
  cout << "\n\t*                           *";
  cout << "\n\t*          Netflix          *";
  cout << "\n\t*          system           *";
  cout << "\n\t*                           *";
  cout << "\n\t*                           *";
  cout << "\n\t*****************************";
  cout << "\n\n\n\t WELCOME TO NETFLIX  ";
  cout << "\n\n\n\t Press Any Key To Continue: ";
  _getch();
  cout << "\n\n";
}

//input validation//
bool isNumeric(string str) {
  for (int i = 0; i < str.length(); i++)
    if (isdigit(str[i]) == false)
      return false;
  return true;
}

class TV_SHOWS {

  string y;
  int x, h, z, j;

  public:

    void select_show() {

      cout << "\n1) Horror" << endl;
      cout << "2) Romance" << endl;
      cout << "3) Comedy" << endl;
      cout << "Select Number:";
      cin >> y;

      while (isNumeric(y) != true) {
        cout << "Your input is wrong please re-enter input in a number= ";
        cin.ignore();
        cin >> y;
      }

      j = stoi(y);

      switch (j) {
      case 1:
        displayHorror();
        break;
      case 2:
        displayRomance();
        break;
      case 3:
        displayComedy();
        break;
      default:
        cout << "Invalid Selection, Please Try Again" << endl;
      }

    }
  void displayHorror() {
    cout << "\nWhat would you like to watch";
    cout << " \n 1. American Horror Story , Seasons 4 , Episodes 27" << endl;
    cout << " 2. The Walking Dead , Seasons 5 , Episodes 38" << endl;
    cout << " 3. The Haunting of Hill House , Seasons 2 , Episodes 13" << endl;
    cout << " 4. Stranger Things , Seasons 3 , Episodes 17" << endl;
    cout << " 5. The Chilling Adventures of Sabrina , Seasons 4 , Episodes 41" << endl;
    cout << "Select Number:";
    cin >> x;
    switch (x) {
    case 1:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 4 , 1hr";
      cout << "\nSeason 2 , Episodes 8 , 40Min";
      cout << "\nSeason 3 , Episodes 6 , 45Min";
      cout << "\nSeason 4 , Episodes 9 , 50Min";
      break;
    case 2:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 5 , 45Min";
      cout << "\nSeason 2 , Episodes 7 , 45Min";
      cout << "\nSeason 3 , Episodes 12 , 30Min";
      cout << "\nSeason 4 , Episodes 11 , 50Min";
      cout << "\nSeason 5 , Episodes 3 , 1hr";
      break;
    case 3:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 9 , 40Min";
      cout << "\nSeason 2 , Episodes 4 , 50Min";

      break;
    case 4:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 5 , 45Min";
      cout << "\nSeason 2 , Episodes 8 , 30Min";
      cout << "\nSeason 3 , Episodes 4 , 40Min";

      break;
    case 5:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 6 , 1hr";
      cout << "\nSeason 2 , Episodes 8 , 45Min";
      cout << "\nSeason 3 , Episodes 12 , 1hr";
      cout << "\nSeason 4 , Episodes 15 , 50Min";
      break;
    default:
      cout << "Invalid Input";
      break;
    }
  }
  void displayRomance() {
    cout << "\nWhat would you like to watch";
    cout << "\n 1. The In Between , Seasons 1 , Episodes 10" << endl;
    cout << " 2. The Fault in Our Stars , Seasons 2 , Episodes 8" << endl;
    cout << " 3. The Twilight Saga , Seasons 2 , Episodes 16" << endl;
    cout << " 4. The Time Traveler's Wife , Seasons 3 , Episodes 8" << endl;
    cout << " 5. A Walk to Remember , Seasons 4 , Episodes 10" << endl;
    cout << "Select Number:";
    cin >> h;
    switch (h) {
    case 1:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 10 , 45Min";

      break;
    case 2:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 4 , 45Min";
      cout << "\nSeason 2 , Episodes 4 , 50Min";

      break;
    case 3:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 8 , 30Min";
      cout << "\nSeason 2 , Episodes 8 , 1hr";

      break;
    case 4:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 4 , 45Min";
      cout << "\nSeason 2 , Episodes 2 , 1hr 20Min";
      cout << "\nSeason 3 , Episodes 2 , 1hr";

      break;
    case 5:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 4 , 1hr";
      cout << "\nSeason 2 , Episodes 2 , 50Min";
      cout << "\nSeason 3 , Episodes 3 , 45Min";
      cout << "\nSeason 4 , Episodes 1 , 1hr 20Min";
      break;
    default:
      cout << "Invalid Input";
      break;
    }

  }
  void displayComedy() {
    cout << "\nWhat would you like to watch";
    cout << "\n 1. Friends , Seasons 6 , Episodes 23" << endl;
    cout << " 2. The Office , Seasons 3 , Episodes 15" << endl;
    cout << " 3. Parks and Recreation , Seasons 3 , Episodes 6" << endl;
    cout << " 4. Brooklyn Nine-Nine , Seasons 2 , Episodes 10" << endl;
    cout << " 5. The Big Bang Theory , Seasons 4 , Episodes 21" << endl;
    cout << "Select Number:";
    cin >> z;
    switch (z) {
    case 1:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 5 , 1hr";
      cout << "\nSeason 2 , Episodes 7 , 40Min";
      cout << "\nSeason 3 , Episodes 4 , 45Min";
      cout << "\nSeason 4 , Episodes 3 , 50Min";
      cout << "\nSeason 5 , Episodes 3 , 50Min";
      cout << "\nSeason 6 , Episodes 1 , 1hr 20Min";
      break;
    case 2:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 5 , 50Min";
      cout << "\nSeason 2 , Episodes 6 , 45Min";
      cout << "\nSeason 3 , Episodes 4 , 1h";
      break;
    case 3:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 2 , 45Min";
      cout << "\nSeason 2 , Episodes 2 , 45Min";
      cout << "\nSeason 3 , Episodes 2 , 45Min";

      break;
    case 4:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 5 , 45hr";
      cout << "\nSeason 2 , Episodes 5 , 30Min";

      break;
    case 5:
      cout << "\nDetails: ";
      cout << "\nSeason 1 , Episodes 4 , 1hr";
      cout << "\nSeason 2 , Episodes 8 , 45Min";
      cout << "\nSeason 3 , Episodes 7 , 40Min";
      cout << "\nSeason 4 , Episodes 2 , 50Min";
      break;
    default:
      cout << "Invalid Input";
      break;
    }
  }

};
class MOVIES {

  string v;
  int p, o, i, l;

  public:

    void select_movie() {

      cout << "\n1) Horror" << endl;
      cout << "2) Romance" << endl;
      cout << "3) Comedy" << endl;
      cout << "Select Number:";
      cin >> v;

      while (isNumeric(v) != true) {
        cout << "Your input is wrong please re-enter input in a number= ";
        cin.ignore();
        cin >> v;
      }

      l = stoi(v);

      switch (l) {
      case 1:
        display_Horror();
        break;
      case 2:
        display_Romance();
        break;
      case 3:
        display_Comedy();
        break;
      default:
        cout << "Invalid selection" << endl;
      }

    }
  void display_Horror() {
    cout << "\nWhat would you like to watch";
    cout << "\n 1. The Silence" << endl;
    cout << " 2. The Grudge" << endl;
    cout << " 3. Hell Hole" << endl;
    cout << " 4. Uninvited" << endl;
    cout << " 5. Alive" << endl;

    cout << "Select Number:";
    cin >> p;
    switch (p) {
    case 1:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 30Min";

      break;
    case 2:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 33Min";

      break;
    case 3:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 30Min";

      break;
    case 4:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 27Min";

      break;
    case 5:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 38Min";
      break;
    default:
      cout << "Invalid Input";
      break;
    }
  }
  void display_Romance() {
    cout << "\nWhat would you like to watch";
    cout << "\n 1. The Notebook" << endl;
    cout << " 2. Purple Hearts" << endl;
    cout << " 3. No Limit" << endl;
    cout << " 4. A Perfect Pairing" << endl;
    cout << " 5. HoliDate" << endl;
    cout << "Select Number:";
    cin >> o;
    switch (o) {
    case 1:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 30Min";

      break;
    case 2:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 33Min";

      break;
    case 3:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 30Min";

      break;
    case 4:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 27Min";

      break;
    case 5:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 38Min";
      break;
    default:
      cout << "Invalid Input";
      break;
    }
  }

  void display_Comedy() {
    cout << "\nWhat would you like to watch";
    cout << "\n 1. 3 Idiots" << endl;
    cout << " 2. The Other Guys" << endl;
    cout << " 3. Jumanji" << endl;
    cout << " 4. Fukrey" << endl;
    cout << " 5. Ludo" << endl;
    cout << "Select Number:";
    cin >> i;

    switch (i) {
    case 1:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 30Min";

      break;
    case 2:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 33Min";

      break;
    case 3:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 30Min";

      break;
    case 4:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 27Min";

      break;
    case 5:
      cout << "\nDetails: ";
      cout << "\nMovie Time 1 hr 38Min";
      break;
    default:
      cout << "Invalid Input";
      break;
    }

  }

};
class Categories {
  private: TV_SHOWS t1;
  MOVIES m1;
  string selection;
  int h;

  public:

    void select_categories() {

      cout << "Press 1 to select TV Shows" << endl;
      cout << "Press 2 to select Movies" << endl;
      cout << "Select Number:";
      cin >> selection;

      while (isNumeric(selection) != true) {
        cout << "Your input is wrong please re-enter input in a number= ";
        cin.ignore();
        cin >> selection;
      }

      h = stoi(selection);

      switch (h) {
      case 1:
        cout << "\nSelect Genres ";
        t1.select_show();
        break;
      case 2:
        cout << "\nSelect Genres ";
        m1.select_movie();
        break;
      default:
        cout << "Invalid Selection, Please Try Again" << endl;
        break;
      }

    }

};

class Account: public Categories {
  private: string account_name,
  account_password;

  public: void set_account() {

    cout << "Enter Username = ";
    getline(cin >> ws, account_name);
    fstream myFile("User Info.txt", ios::in | ios::out | ios::app);
    myFile << "User Name: " << account_name;
    cout << "Enter Password = ";
    cin >> account_password;
    myFile << "\nUser Password: " << account_password << endl;
    myFile.close();
    cout << "\n\t*Welcome " << account_name << "*\n" << endl;
    cout << "\tPlease Select the categories" << endl;

  }
};

int main() {
  displayMessage();
  Account acc;
  string a;
  int i;
  char choice;

  while (true) {
    cout << "\nPress 1 for login" << endl;
    cout << "Press 0 for exit" << endl;
    cout << "Select Number:";
    cin >> a;

    while (isNumeric(a) != true) {
      cout << "Your input is wrong please re-enter input in a number= ";
      cin.ignore();
      cin >> a;
    }

    i = stoi(a);

    if (i == 0) {
      break;
    } else if (i == 1) {
      cout << "\n\tEnter the details of your account: " << endl;
      acc.set_account();
      acc.select_categories();

      cout << endl;
    } else {
      cout << "\n" << "Select a Valid Number" << endl;
    }
  }

  return 0;
}

