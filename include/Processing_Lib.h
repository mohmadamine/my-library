#pragma once

#include <iostream>

using namespace std;

namespace processing_numbers
{
    int reversed_number(int number)
    {
        short remainder = 0;
        int number2 = 0;
        while (number > 0)
        {
            remainder = number % 10;
            number2 = number2 * 10 + remainder;
            number = number / 10;
        }
        return number2;
    }

    void print_digits(int number)
    {
        short remainder = 0;
        while (number > 0)
        {
            remainder = number % 10;
            cout << remainder << endl;
            number = number / 10;
        }
    }

    void print_digit(int number)
    {
        int remainder = 0;
        while (number > 0)
        {
            remainder = number % 10;
            number = number / 10;
            cout << remainder << endl;
        }
    }

    int sum_of_digits(int number)
    {
        int sum = 0;
        int remainder = 0;
        while (number > 0)
        {
            remainder = number % 10;
            sum += remainder;
            number = number / 10;
        }
        return sum;
    }

    int reversed_digits(int number)
{
    int number2 = 0;
    int remainder = 0;
    while (number > 0)
    {
        remainder = number % 10;
        number2 = number2 * 10 + remainder;

        number = number / 10;
    }
    return number2;
}

void print_inverted_number_pattern(int number)
{
    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    cout << endl;
}

}
