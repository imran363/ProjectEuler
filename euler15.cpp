#include<iostream>
int main(){
const int gridSize = 20;
long paths = 1;

for (int i = 0; i < gridSize; i++) {
    paths *= (2 * gridSize) - i;
    paths /= i + 1;
}
std::cout<<paths<<std::endl;
}
