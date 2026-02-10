#pragma once

#include<iostream>

using namespace std;

namespace read_lib
{
 
float read_positive_number(string message){
float number ;
do{
cout<<message;
cin>>number;
}while(number<=0);

return number;
}

string read_password(string message)
{
    string password;
    cout << message;
    cin >> password;
    return password;
}

} 

