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

string read_text(){
    string text;
   cout<<"please enter text : " ;
   cin>>text;
   return text;
}

void read_array(int arr[100],int &arr_length){
    cout<<"please enter number of element : ";
    cin>>arr_length;
    cout<<"enter array element : \n";
    for(int i = 0;i<arr_length;i++){
    cout<<"element ["<<i+1<<"] : ";
    cin>>arr[i]; 
    }
    cout<<endl;

}

} 

