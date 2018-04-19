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
*** 4.practice 'file io' command.*
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
