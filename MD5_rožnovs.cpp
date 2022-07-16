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




