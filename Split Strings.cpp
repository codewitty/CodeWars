// Taken from https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    // Declare variables to store temp string and final result
    std::string temp;
    std::vector<std::string> res;
    
    // Loop through string and add 2 characters to res if the second character is not NULL
    for (int i = 0; i < s.size(); i+=2) {
      if (s[i+1]){
        res.push_back(s.substr(i, 2));
      }
      else {
        temp = s.substr(i,1) + '_';
        res.push_back(temp);
        }
    }
    return res;
}

//#######################################################
// Driver code for testing
//#######################################################

#include <iostream>
#include <vector>
#include <string>

using namespace std;
//Factorial function

vector<string> solution(const std::string &s)
{
    vector<string> res;
    string ress;
    for (int i = 0; i < s.size(); i+=2) {
      if (s[i+1]){
        cout << s.substr(i, 2) << endl;
        res.push_back(s.substr(i, 2));
      }
      else {
        ress = s.substr(i,1) + '_';
        res.push_back(ress);
        }
    }
    return res; // Your code here
}

void print(std::vector <string> const &a) {
   std::cout << "The vector elements are : ";
   
   for(int i=0; i < a.size(); i++)
      std::cout << a.at(i) << ' ';
}

int main(){
   string s = "abcde";
   print(solution(s));
   return 0;
}
