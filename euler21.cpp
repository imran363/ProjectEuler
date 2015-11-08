#include<iostream>
#include<cmath>
#define lim 10000
using namespace std;
int sumOfDivisors(int);
int main(){
    int a=0,b=0, sum=0;
    for(int i=1; i<lim; ++i){
        a = sumOfDivisors(i);
        if(a>i && a< lim){
            b= sumOfDivisors(a);
            if(b == i)
                sum+= (a+b);
        }
    }
    std::cout<<sum<<std::endl;

}

int sumOfDivisors(int n){
    int sum=1;
    int sq = sqrt(n) + 1;
    for (int i = 2; i < sq; ++i){
        if (n % i == 0)
        sum+= (i+ n/i);
    }
    return sum;
}
