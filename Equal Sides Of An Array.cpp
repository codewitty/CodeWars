#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {

  int res = - 1;
  
  // Check for edge case of empty array or array of size 1
  if (numbers.size() < 2)
    return 0;
  
  for(int i = 0; i < numbers.size(); i++) {
    // Variables to store sum of array values
    int left = 0; 
    int right = 0;
    // Iterator variables
    int j = 0;
    int n = i + 1;
    
    // Check sum of array values to left of
    while (j < i){
        left += numbers[j];
        ++j;
      }
     while (n < numbers.size()) {
        right += numbers[n];
        ++n;
        }
      // Check if sums on both sides are equal and return index if true.
      if (left == right) {
        res = i;
        break;
        }
      }
    return res;
    
}
