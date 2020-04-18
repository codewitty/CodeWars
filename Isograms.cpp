// Accepted Solution; Time complexity: O(n).

bool is_isogram(std::string str) {
  bool res = true; // Variable to store result
  
  // Convert all chars to lower case
  for (int i = 0; i < str.length(); i++) 
        str[i] = tolower(str[i]);
        
  // Sort all chars in the string
  sort(str.begin(), str.end());
  
  //One loop to check for repeating characters
  for (int i = 0; i < str.length(); ++i) {
      if (tolower(str[i]) == tolower(str[i + 1])) {
          res = false; // if any matches, set res to false and break
          break;
          }
        }
   return res;
}


// Driver code for testing

/*
// Driver code for testing

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_map>

using namespace std;

bool is_isogram(std::string str) {
  bool res = true;
  for (int i = 0; i < str.length() - 1; ++i) {
    for (int j = i + 1; j < str.length(); ++j) {
      if (tolower(str[i]) == tolower(str[j])) {
          res = false;
          break;
          }
        }
      }
   return res;
}

int main() {
  string a = "Dermatoglyphics";
  if (is_isogram(a))
    cout << "HOORAY!!" << endl;
  else
    cout << "wonk wonk!!" << endl;
  return 0;
}
*/
