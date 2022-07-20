##include <iostream>
#include <string>
using namespace std;

class Date
{
private: ////Deklarējam klases objekta mainīgos "diena, mēnesis, gads".
    int day;
    int month;
    int year;

public:
//UZDEVUMA 1.1 punkts
    Date()
    {
        day = 1;
        month = 1;
        year = 1970;
    }

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
    string getDate() //datuma noskaidrošana
    {
        return std::to_string(day) + "." + std::to_string(month) +  "." +  std::to_string(year);
    }
    void print()
    {
        cout << "Date: "  << getDate() << endl;
    }


//UZDEVUMA 1.2 punkts

    int getInDays()
    {
        int monthsInYear = 12;
        int daysInMonth = 30;

        return   this->day +
                (this->month - 1)*daysInMonth +
                (this->year - 1)*monthsInYear*daysInMonth;      //month/year - 1 = январь не считается за 30 дней, не прошел еще январь. год не прошел - 1.
    }


    int daysBetween(Date* other) //функиця с именем daysBetween принемает в себя параметр с именем others типа Date* и возвращает значение типа int.
    {
        return abs(this->getInDays() - other->getInDays()); //abs - дает положительное число.
    }


//UZDEVUMA 1.3 punkts

      Date* dateUpdate()
    {

        if (month)
        {
            if (day >= 30)
            {
            // Go to next month
            ++month, day=1;
            }
            else
            {
                ++day;
            }
        }

        Date* newDate = new Date(this->day, this->month, this->year); //объекты, класса и параметры перечитать.
        return newDate;
    }


};

    //UZDEVUMA 1.2 punkts
int main()
{
    Date* a = new Date();    //date*  - tip peremennoj(ukazatel na objekt klassa "DATE", a - imja peremennoj, new - videlenie pamati i sozdanie novogo objekta klassa, (date()
    Date* b = new Date(29,1,2022);
    a->print();
    b->print();

    cout << "Days Between" <<endl;
    //cout << a->daysBetween(a) <<endl;
    cout << a->daysBetween(b) <<endl;   // this = a, other = b;

    cout << "Next Date";

    Date* c = b->dateUpdate();  cout<<endl;
    c->print();
    //b->print();
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
