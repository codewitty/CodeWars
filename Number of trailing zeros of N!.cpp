long zeros(long n) {
    long count = 0;
    int divider = 5;
 
    while ((n/divider) > 0) {
        count += n/divider;
        divider = divider * 5;
    }
    
  return count;
}
