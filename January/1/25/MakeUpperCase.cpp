
//Write a function which converts the input string to uppercase.

//My solution
#include <string>
#include <cstring>

std::string makeUpperCase (const std::string& input_str)
{
  std::string string;
  
  for( int index = 0; index < input_str.length(); index++)
    string.push_back(input_str[index]);
  
  for(int i = 0; i < input_str.length(); i++){
    if (string[i] == ' ')
      string[i] = ' ';
    else if(string[i] >= 'a' && string[i] <= 'z')
      string[i] = string[i] - 32;
  }
  return string;