#include <iostream>
using namespace std;

class Date
{
private: ////Deklarējam klases objekta mainīgos "diena, mēnesis, gads".
    int day;
    int month;
    int year;

public:
    //UZDEVUMA 1.1 punkts
    Date(); //noklusejuma konstruktors
    Date(int dayValue, int monthValue, int yearValue) //konstruktors ar parametriem
    {
        day = dayValue;
        month = monthValue;
        year = yearValue;
    }

    //UZDEVUMA 1.1 punkts
    void setDate(int dayValue, int monthValue, int yearValue) // datuma iestatisana
    {
        day = dayValue;
        month = monthValue;
        year = yearValue;
    }
    int getDate() //datuma noskaidrošana
    {
        return day;
    }
    void print()
    {
        cout << "Date: "  << endl;
    }
};

//UZDEVUMA 1.2 punkts
int main()
{
    Date a;
    a.print();


    return 0;
}

//TODO: check code review (and remove notes once done):
// Comments
// * English is the language of choice
// * Excessive/obvious comments are usually considered as a bad practice, code should be readable itself, only business or technically tricky moments to be commented
// ** (Reference to tasks sub-points are ok, as can be considered business-valuable info)
// Default value of date commonly referred to Unix time (https://en.wikipedia.org/wiki/Unix_time) is 00:00:00 UTC Thursday, 1 January 1970
// getDate() returning day only - shady, but might be required by task
// Documentation - highly recommended to have Readme.md file nearby with complete task description
