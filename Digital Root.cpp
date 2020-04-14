// Taken from : https://www.codewars.com/kata/541c8630095125aba6000c00

#include <iostream>
#include <vector>
using namespace std;
//Factorial function

int digital_root(int n)
{
    // Trying for a true recursive solution
    int res = 0;
    if (n % 10 == n)
      return n;
    int r = n % 10;
    res = r + digital_root(n/10);
    if (res % 10 == res)
      return res;
    else
      digital_root(res);
   
    // Accepted Solution: One while loop used.
      int res = 0;
      
      while (n != 0) {
      
      res += n % 10;
      n = n/10;
      
      if (res >= 10 && n == 0)
        return digital_root(res);
      }
      return res;
         
      /*
      Rachel's attempts
      if ((n%10 == n) ? return n:return (n%10 + digital_root(n/10))) > 9 ){
        return digital_root(n);
      }
      return n;
      */
      /*
      if 
      if (n%10 == n){
        return n;  
      }
      return n%10 + digital_root(n/10);
      ) > 9
      if 
      return digital_root(n)
      
      return n;
      */
 }
int main(){
   vector<int> num = {16, 195, 992, 167346, 0, 876876875, };
   for (int i = 0; i < num.size(); ++i)
    cout<<"Factorial of entered number: "<< digital_root(num[i]) << endl;
   return 0;
}
