#include <iostream>
#include<cmath>

using namespace std;

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
     string peeps[] = {"Kakashi", "Naruto", "Sasuke", "Sakura", "Neji"};

     for(int i = 0; i < 5; i++){
        cout << peeps[i] << endl;
     }
     cout << endl;

     // constant variable and cmath examples
     const double growth_rate = 12.0;
     cout << "The Square root of " << growth_rate << " is: " << sqrt(growth_rate) << endl;
     cout << "The power of " << growth_rate << " squared is: " << pow(growth_rate, 2) endl << "\n";
}
