// Taken from https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/train/cpp

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> res;
    std::string ress;
    for (int i = 0; i < s.size(); i+=2) {
      if (s[i+1]){
        res.push_back(s.substr(i, 2));
      }
      else {
        ress = s.substr(i,1) + '_';
        res.push_back(ress);
        }
    }
    return res; // Your code here
}
