#include <iostream>
#include <stdint-gcc.h>

enum class DateFormat
{
    D_M_Y,
    M_Y,
    D_M,
    M_D_Y
};

struct Date
{
  private:
    uint16_t day;
    uint16_t month;
    uint16_t year;
    DateFormat printFormat;

  public:
    Date();
    Date(uint16_t day, uint16_t month, uint16_t year);
    void setPrintFormat(DateFormat printFmt);
    void printDate();
    ~Date() = default;
};

Date::Date()
    : day(0), month(0), year(0), printFormat(DateFormat::D_M_Y)
{
}

Date::Date(uint16_t _day, uint16_t _month, uint16_t _year)
    : day(_day), month(_month), year(_year), printFormat(DateFormat::D_M_Y)
{
}

void Date::setPrintFormat(DateFormat printFmt)
{
    this->printFormat = printFmt;
}

void Date::printDate()
{

    switch (this->printFormat)
    {
    case DateFormat::D_M_Y:
        std::cout << "Date is: " << day << "/" << month << "/" << year << "\n";
        break;
    case DateFormat::M_Y:
        std::cout << "Date is: " << month << "/" << year << "\n";
        break;
    case DateFormat::D_M:
        std::cout << "Date is: " << day << "/" << month << "\n";
        break;
    case DateFormat::M_D_Y:
        std::cout << "Date is: " << month << "/" << day << "/" << year << "\n";
        break;

    default:
        std::cout << "Invalid date format! \n";
        break;
    }
}

int main(int argc, char const *argv[])
{
    Date today{1, 2, 2023};
    today.setPrintFormat(DateFormat::D_M);
    today.printDate();
    return 0;
}
