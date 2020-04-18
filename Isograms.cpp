// Accepted Solution; 

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
