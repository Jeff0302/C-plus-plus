#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //[]表示函數名，()參數列表，{}函數體
    for_each(v.begin(), v.end(), [&](int a){cout << a << " ";});

}