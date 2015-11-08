/*	This program is the solution for Project Euler Problem 22,
 * 	For simplifying, I replaced ',' with ' ' (A blank space),
 * 	and removed all " from the input data.
 * 	For changing the input data, either write another funtion or use any text editor ;)
 * 	I have uploaded my modified input text too.
*/



#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
int strValue(std::string s);
using namespace std;
int main(){
    vector<string> str;
    string temp;
    while(cin>>temp){
        str.push_back(temp);
    }
    sort(str.begin(), str.end());

    int num=1, sum=0;
    for(string s:str){
        sum+= (strValue(s) * num);
        ++num;
    }
    cout<<sum<<endl;
}
int strValue(string s){
    int v=0;
    for(char a:s){
        v+= (a-64);
    }
    return v;
}
