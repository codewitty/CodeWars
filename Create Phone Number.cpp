#include <string>

std::string createPhoneNumber(const int arr [10]){
  //your code here
  std::string res = "(";
  
  for (int i = 0; i < 3; ++i) {
    res.push_back(arr[i] + '0');
}
  res += ") ";
  for (int i = 3; i < 6; ++i) {
    res.push_back(arr[i] + '0');
}
  res += "-";
  for (int i = 6; i < 10; ++i) {
    res.push_back(arr[i] + '0');
}
  return res;
  }
