#pragma once

#include<iostream>

using namespace std;

namespace data_analyzer
{
int count_digit_frequency(int number,short digit_to_check){
int remainder = 0,freq_count=0;

while(number>0){
    remainder = number%10;
     number = number/10;
    if(digit_to_check == remainder){
        freq_count++;
    }
  
}
return freq_count;

}

int time_repeted(int number_to_check, int arr[100], int arr_length)
{
    int count = 0;
    for (int i = 0; i <= arr_length - 1; i++)
    {
        if (number_to_check == arr[i])
        {
            count++;
        }
    }
    return count;
}
}