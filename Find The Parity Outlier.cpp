int FindOutlier(std::vector<int> arr)
{
    // Variables to store answers
    int resultEven = 0;
    int resultOdd = 0;
    int oddCount = 0;
    int evenCount = 0;
    
    for (unsigned int i = 0; i < arr.size(); ++i) {
      // Check if element is even or odd
      if (abs(arr[i]) % 2 == 0){
        evenCount++;
        resultEven = arr[i];
        }
      else {
        oddCount++;
        resultOdd = arr[i];
        }
     }
    // Since there is only one outlier just return the result 
    // that is less than 2 
    return evenCount < 2? resultEven: resultOdd;
}
