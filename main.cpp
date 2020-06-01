#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// function and parameters examples
     void youngest(string chocolate, string quality = "medium", int rating = 3){
        cout << chocolate << "Milk, " << "Quality " << quality << ", rating " << rating << endl;
     }

int main()
{

    // cin example
    int y;
    cout << "Enter a number" << endl;
    cin >> y;
    cout << endl;


     // cout example
     cout << "Congratulations!" << endl;
     cout << "You have won 50% off a trip for " << y << " To: \n";
     cout << "Beautiful Hawaii! \n\n";


     // basic calculator example
     int x,z;
     cout << "Type a number \n";
     cin >> x;
     cout << endl;
     cout << "Type Another number \n";
     cin >> z;
     cout << endl;
     cout << "Your total is: \n";
     cout << "$" << (x + z) / 2;
     cout << endl << "\n";


     // ASCII example
     char a = 73;
     cout << a << "\n\n";


     // if else example
     if(10 == 9){
        cout << (10+9);
     } else {
        cout << (10-9);
     }
     cout << endl << "\n";


     // array and loop example, other loops such as do, while and switch is the same as in JavaScript
     string peoples[] = {"Kakashi", "Naruto", "Sasuke", "Sakura", "Neji"};

     for(int i = 0; i < 5; i++){
        cout << peoples[i] << endl;
     }
     cout << endl;

     // constant variable and cmath examples
     const double growth_rate = 12.0;
     cout << "The Square root of " << growth_rate << " is: " << sqrt(growth_rate) << endl;
     cout << "The power of " << growth_rate << " squared is: " << pow(growth_rate, 2) << endl << "\n";
     cout << "The integer value is " << static_cast<int>(sqrt(growth_rate)) << endl << endl;
     cin.ignore();

     // get line example
     string part_2;
     cout << "Enter your name: ";
     getline(cin, part_2);
     cout << "Welcome: " << part_2 << endl << endl;


    // function and parameters example
     youngest("Dream", "Excellent", 5);
     youngest("Dairy");
     youngest("Dark", "low", 1);
     cout << endl;

     // && || examples

     string name;
     string surname;

     cout << "Enter your name: ";
     cin >> name;
     cout << endl;
     cout << "Enter your surname: ";
     cin >> surname;
     cout << endl;

     if((name == "Josh") && (surname == "Arendse")){
        cout << "Young Rich Nigga ";
     }

     // switch case example
     int choose;
     cout << "What would you like to do?" << endl;
     cout << "1.Create a new file" << endl;
     cout << "2.Open a file" << endl;
     cout << "3.Upload a file"<< endl;
     cout << "4.Exit \n" << endl;
     cout << "Enter a value from 1-4: ";
     cin >> choose;

     switch (choose){
    case 1:
        cout << "A file has been created \n";
        break;

    case 2:
        cout << "Choose a file to open \n";
        break;

    case 3:
        cout << "Choose a file to upload (max: 5MB) \n";
        break;

    case 4:
        cout << "You have Exited the program \n";
        break;

    default:
        cout << "Please enter either 1,2,3 or 4 \n";
     }
}
