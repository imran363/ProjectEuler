/*  Solution to Project Euler Problem 24,
*   simply using C++ Library,
*   Fast and Efficient.
*/


#include<iostream>
#include<algorithm>

int main () {
  int a[] = {0,1,2,3,4,5,6,7,8,9};

  std::sort (a,a+10); // Not necessary, only for typo confirmation :p
    for(int i=1; i<1000000; ++i){
        std::next_permutation(a, a+10);
    }

  for(auto i:a)
    std::cout<<i;

  return 0;
}
