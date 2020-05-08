#include <string>
using namespace std;

string rot13(string msg)
{
  string res;
  for(size_t i = 0; i < msg.length(); ++i) {
    if (isalpha(msg[i])) {
      char a = msg[i];
      int b = int(a);
      if (b < 78 || (b >= 97 && b <= 109)) {
        a = a + 13;
      }
      else if (b >= 78 && b < 91) {
        a = (b - 78) + 65;
      }
      else
        a = (b - 110) + 97;
      res.push_back(a);
    }
    else
        res.push_back(msg[i]);
        }
      
  return res;
}
// ######################################################################################
/*
Driver code

#include <iostream>
#include <string>

using namespace std;

string rot13(string msg)
{
  string res;
  for(size_t i = 0; i < msg.length(); ++i) {
    if (isalpha(msg[i])) {
      char a = msg[i];
      int b = int(a);
      if (b < 78 || (b >= 97 && b <= 109)) {
        a = a + 13;
      }
      else if (b >= 78 && b < 91) {
        a = (b - 78) + 65;
      }
      else
        a = (b - 110) + 97;
      res.push_back(a);
    }
    else
        res.push_back(msg[i]);
        }
      
  return res;
}

int main() {
  string s = "test";
  cout << rot13(s) << endl;
  return 0;
}
*/
