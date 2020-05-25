#include <string>
#include <vector>

using namespace std;

string range_extraction(std::vector<int> args) {
  string res = "";
  int first, last, a = 0;
  
  for (size_t i = 0; i < args.size(); i++) {
    a = i;
    first = args[i];
    if (i+1 < args.size())
      last = args[i+1];
    int count = 0;
    while (last == first + 1 && (i + 1) < args.size()) {
      count++;
      i++;
      first = args[i];
      if (i+1 < args.size())
        last = args[i+1];
      }
      if (count >= 2) {
        res += to_string(args[a]) + "-" + to_string(args[i]) + ",";
        }
      else {
        res += to_string(args[a]) + ",";
        i = a;
        }
      }
      res.pop_back();
      return res;
}
