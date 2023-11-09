#include <iostream>
#include <string>
#include <math.h>

using namespace std;
int countDigits3(int n){
  //will count the initial number which will completely divide it
  int N=n;
  int count =0;
  while(n>0){
    int lastdigit= n%10;
    if(lastdigit!=0){
      count+= (N%lastdigit)==0;
    }


    n=n/10;
  }	
  return count;
}

int countDigits2(int n){
  int count =(int)(log10(n)+1);
  return count;
}
int countDigits(int n){
  int count = 0;
  while(n>0){
    n=n/10;
    count++;
    //space complexity--> 0(1)
    //Time complexity --> 0(logn)
  }
  return count;
}
int countDigitsBrute(int n){
  string s = to_string(n);
  return s.length();
  // Time Complexity: O(log(n))

  // Space Complexity: O(log(n))
}
int main() {
  int n;
  cin>>n;
  cout<<countDigits(n)<<endl;
  cout<<countDigitsBrute(n)<<endl;
  cout<<countDigits2(n)<<endl;
  cout<<countDigits3(n);
}