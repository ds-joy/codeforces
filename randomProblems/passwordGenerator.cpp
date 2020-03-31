#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "A strong password should contain at least 8 character." << endl;
    cout << "Please enter the length of the password: " ;
    int length;
    cin >> length;
    cout << "Choose any option: " << endl;
    cout << "The password contains: " << endl;
    cout << "1.Only lowercase letters." << endl;
    cout << "2.Lowercase + Uppercase letters." << endl;
    cout << "3.Lowercase + Uppercase letters + Numbers." << endl;
    cout << "4.Lowercase + Uppercase letters + Numbers + Special characters." << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;


    int a;
    char b;

    switch(choice)
    {
        case 1:
            {
                cout << "Your Password: ";
                for(int i=1; i<=length; i++)
                {
                    int srand((int) time(0));
                    //to get random int
                    //between 97 to 122
                    a = 97 + rand()%26;
                    b = (char) a;
                    cout << b;
                }
                return 0;

            }
        case 2:
            {
                cout << "Your Password: ";
                for(int i=1; i<=length; i++)
                {
                    int srand((int) time(0));
                    //to get random int
                    //between 97 to 122
                    a = 65 + rand()%57;
                    if(a>90 && a<97)
                        a = a + 8 + rand()%18;
                    b = (char) a;
                    //cout << a;
                    cout << b;
                }
                return 0;

            }
        case 3:
            {
                cout << "Your Password: ";
                for(int i=1; i<=length; i++)
                {
                    int srand((int) time(0));
                    //to get random int
                    //between 97 to 122
                    if(i%3==0)
                        a = 48 + rand()%10;
                    else
                        a = 65 + rand()%57;
                    if(a>90 && a<97)
                        a = a + 8 + rand()%18;
                    b = (char) a;
                    //cout << a;
                    cout << b;
                }
               return 0;

            }
        case 4:
            {
                cout << "Your Password: ";
                for(int i=1; i<=length; i++)
                {
                    int srand((int) time(0));
                    //to get random int
                    //between 97 to 122
                    if(i%3==0)
                        a = 48 + rand()%10;
                    else if(i%4==0)
                        a = 33 + rand()%26;
                    else
                        a = 65 + rand()%57;

                    b = (char) a;
                    //cout << a;
                    cout << b;
                }
                return 0;
            }

    }
    cout << "Invalid input" << endl;

    return 0;
}
