#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<numeric>
#include<sstream>
using namespace std;
int main(){
    int m;
    bool a = true;
    bool b = false;
    int x = 10;
    int y = 5;
    m = ((x|y)+(a+b));
    cout<<m;
    return 0;
}