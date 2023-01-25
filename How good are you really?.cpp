// There was a test in your class and you passed it. Congratulations!
// But you're an ambitious person. You want to know if you're better than the average student in your class.

// You receive an array with your peers' test scores. Now calculate the average and compare your score!

// Return True if you're better, else False!

// Note:
// Your points are not included in the array of your class's points. For calculating the average point you may add your point to the given array!

//My Solution
#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
  int size = classPoints.size();
  int sum = 0;
  int average = 0;
  
  for(int i = 0; i < size; i++){
    sum += classPoints.at(i);
  }
  
  sum += yourPoints;
  
  average = sum/(size + 1);
  
  if(yourPoints > average)
    return true;
  
  return false;
  
}