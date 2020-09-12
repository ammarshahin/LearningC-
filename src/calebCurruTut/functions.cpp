#include "cstdio"
#include "iostream"
#include "stdint.h"
uint16_t power(uint8_t num, uint8_t pow);

int main()
{
    int u8_num, pow;
    std::cout << "enter a positive integer number: ";
    std::cin >> u8_num;
    std::cout << "enter a positive integer power: ";
    std::cin >> pow;
    printf("----------------------------------\nresult(%d^%d) = %u", u8_num, pow, power(u8_num, pow));
    return 0;
}

uint16_t power(uint8_t num, uint8_t pow)
{
    uint16_t u16_result = 1;
    for (; pow > 0; pow--)
    {
        u16_result *= num;
    }
    return u16_result;
}


uint16_t vfgdfmg (void)
{
    return 1520;
}
