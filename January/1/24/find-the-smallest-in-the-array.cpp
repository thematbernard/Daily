// Given an array of integers your solution should find the smallest integer.

// For example:

// Given [34, 15, 88, 2] your solution will return 2
// Given [34, -345, -1, 100] your solution will return -345
// You can assume, for the purpose of this kata, that the supplied array will not be empty.


//My Solution
#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  int smallest;
  int size = list.size();
  int index = 0;
  
    smallest = list.at(index);
  
   for( int i = 0; i < size; i++){
     if(smallest > list.at(i))
       index = i;
       smallest = list.at(index);
     }
  
  return smallest;
}