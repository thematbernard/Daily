// Complete the square sum function so that it squares each number passed into it and then sums the results together.

// For example, for [1, 2, 2] it should return 9 because 1^2 + 2^2 + 2^2 = 9.

//My solution
#include <vector>

int square_sum(const std::vector<int>& numbers)
{
  int sum;
  int total;
  int length = numbers.size();
  
  total = 0;
  for(int i = 0; i < length; i++){
    sum = numbers[i]*numbers[i];
    total += sum;
  }

    return total;
}