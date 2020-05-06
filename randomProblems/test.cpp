#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int secondInt;
    double secondDouble;
    string secondString;

    // Read and save an integer, double, and String to your variables.
    cin >> secondInt >> secondDouble;
    cin.ignore();
    getline(cin, secondString);

    // Print the sum of both integer variables on a new line.
   cout << i+secondInt << endl;

    // Print the sum of the double variables on a new line.
   cout << fixed <<(d+secondDouble) << setprecision(1) << endl;

    // Concatenate and print the String variables on a new line
    cout << s+secondString << endl;

    // The 's' variable above should be printed first.
    return 0;
}
