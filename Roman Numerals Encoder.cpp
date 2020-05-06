// Taken from https://www.codewars.com/kata/51b62bf6a9c58071c600001b/train/cpp

string solution(int number){
  // convert the number to a roman numeral
  std::string res;
  while (number >= 1000) {
    number -= 1000;
    res += "M";
    }
    if (number >= 900) {
      number -= 900;
      res += "CM";
      }
  while (number >= 500) {
    number -= 500;
    res += "D";
    }
    if (number >= 400) {
      number -= 400;
      res += "CD";
      }
  while (number >= 100) {
    number -= 100;
    res += "C";
    }
    if (number >= 90) {
      number -= 90;
      res += "XC";
      }
  while (number >= 50) {
    number -= 50;
    res += "L";
    }
    if (number >= 40) {
      number -= 40;
      res += "XL";
      }
  while (number >= 10) {
    number -= 10;
    res += "X";
    }
    if (number >= 9) {
      number -= 9;
      res += "IX";
      }
  while (number >= 5) {
    number -= 5;
    res += "V";
    }
     if (number >= 4) {
      number -= 4;
      res += "IV";
      }
  while (number >= 1) {
    number -= 1;
    res += "I";
    }
   return res;
}
