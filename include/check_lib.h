#pragma once

#include <iostream>
#include <cmath>
#include "Processing_Lib.h"

using namespace std;

namespace check_lib
{
  bool is_perfect_number(int number)
  {
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
      if (number % i == 0)
      {
        sum += i;
      }
    }
    return number == sum;
  }

  enum enprim_number
  {
    yes = 1,
    no
  };

  enprim_number check_prime_number(int number)
  {

    int M = round(number / 2);
    int i = 2;
    while (i <= M)
    {

      if (number % i == 0)
      {
        return enprim_number::no;
      }
      i++;
    }

    return enprim_number::yes;
  }



  bool check_number_is_palindrome_or_not(int number)
  {
    return number == processing_numbers::reversed_number(number);
  }

}
