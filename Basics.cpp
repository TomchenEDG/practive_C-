/////////////////////////////////////////////////////////////////////////////
/*
*** 1.practice 'cout' , 'namespace' , sizeof() command.
*/
/////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main()
{
    /*
    *** "print char for hello world ! "
    */

    //print "Hello world!"
    cout << "Hello world!"<< "\n";
    cout << "int size:" << sizeof(int) << "\n";
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 2.practice 'const' command.
*/
/////////////////////////////////////////////////////////////////////////////

#include "iostream"

using namespace std;

int main(){
   const int weightGoal = 100;
   cout<<'int weightGoal:'<<weightGoal<<'\n';
   weightGoal = 200;
   cout<<'int weightGoal:'<<weightGoal<<'\n';
   return 0;
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 3.practice 'enumerate constants' command.
*/
/////////////////////////////////////////////////////////////////////////////

#include "iostream"

using namespace std;

int main()
{
    //Define MONTH as having 12 possible values.
    enum MONTH{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    //Define bestMonth as the variable type MONTH.
    MONTH bestMonth;
    //assign bestMonth one of the value of MONTH.
    bestMonth = Jan;
    //now we can check the value of bestMonth just like any other variable.
    if (bestMonth == Jan)
    {
        cout<<"I'm not sure January is the best month.\n";
    }
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 4.practice "file io" command.
*/
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    //create an output stream to write to the file.
    //append the line to the end of file.
    ofstream myfileI("input.txt", ios::app);
    if (myfileI.is_open())
    {
        myfileI << "I am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for reading.";

    //create an input stream to read the file.
    ifstream myfileO("input.txt");
    //During of the creation ifstream, the file is opened.
    //so we do not explicitly open the file .
    if (myfileO.is_open())
    {
        while getline(myfileO, line)
        {
            cout << line << '\n';
        }
        myfileO.close();
    else cout << "Unable to open the file for reading.";
    return 0;
    }
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 5.practice "Header File" command.
*/
/////////////////////////////////////////////////////////////////////////////

/*
main.hpp
#include <iostream>
using namespace std;
*/

#include "main.hpp"
int main()
{
    cout << "Hello, I use the header files";
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 6.practice "user input" command.
*/
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Define two int variable and one string variable.
    int year = 0;
    int age = 0;
    string name = "";

    //print a message to the user.
    cout << "What year is your favorite?\n";
    //get the user response and assign it to the variable year.
    cin >> year;
    //out the response to user.
    cout << "How interesting! your favorite year is " << year << '!\n';

    cout << "At what age did you learn to ride bike?\n";
    cin >> age;
    cout << "How interesting! your learn to ride at " << age << '!\n';

    cout << "What's your name?";
    cin >> name;
    cout << "Your name is " << name << '!\n';
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 7.practice "getline()" command.*
*/
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1, address1, phoneNo1;
    string name2, addfess2, phoneNo2;

    cout << "User1 what's your name?\n";
    getline(cin, name1);
    cout << "User1 what's your address?\n";
    getline(cin, address1);
    cout << "User1 what's your phoneNo?\n";
    getline(cin, phoneNo1);

    cout << "User2 what's your name?\n";
    getline(cin, name2);
    cout << "User2 what's your address?\n";
    getline(cin, address2);
    cout << "User2 what's your phoneNo?\n";
    getline(cin, phoneNo2);

    cout << "\n\n" << name1 << "\n";
    cout << "\t\t" << address1 << "\n";
    cout << "\t\t" << phoneNo1 << "\n";

    cout << "\n\n" << name2 << "\n";
    cout << "\t\t" << adress2 << "\n";
    cout << "\t\t" << phoneNo2 << "\n";
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 8.practice "covert string" command.*
*/
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string stringLenth, stringWidth;
    float Lenth = 0;
    float Width = 0;
    float area = 0;

    cout << "Enter your number of the Lenth of room :";
    getline(cin, stringLenth);
    stringstream(stringLenth) >> Lenth;
    cout << "Enter Width:";
    getline(cin, stringWidth);
    stringstream(stringWidth) << Width;

    area = Lenth * Width;
    cout << "Your room the area is :" << area << endl;
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 9.practice "Arithmetic Operations" command.*
*/
/////////////////////////////////////////////////////////////////////////////

#inculde <iostream>
#inculde <cmath>
using namespace std;

int main()
{
    //Dimension of the Cube
    float cubeSide = 5.4;
    //Dimension of the Sphere
    float SphereRadius = 2.33;
    //Dimension of the cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;

    //Find volume of cube
    volCube = pow(cubeSide, 3);
    //Find volume of sphere
    volSphere = (4.0/3.0)*M_PI*pow(SphereRadius, 3);
    //Find volume of cone
    //M_PI is in the cmath library, it does not need to reference
    //the namespace std.on the other hand, pow() is need to reference it.
    volCone = M_PI * pow(coneRadius, 2) * (coneHeight/3);

    cout << "the volCone:" << volCube << "\n"
    cout << "the volSphere:" << volSphere << "\n"
    cout << "the volCone:" << volCone << endl
    return 0;
}

/////////////////////////////////////////////////////////////////////////////
/*
*** 10.practice "Relational operator" command.*
*/
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //instead of printing 0 and 1,create an array where.
    string Torf[] = {"False", "True"}

    int a = 100;
    int b = 33;
    int c = 33;

    cout << "a > b is " << Torf[a>b];
    cout << "a < b is " << Torf[a<b];
    cout << "a != b is " << Torf[a!=b];
    cout << "a <= b is " << Torf[a<=b];
    cout << "a >= b is " << Torf[a>=b];
    return 0;
}
