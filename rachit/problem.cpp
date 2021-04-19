#include <iostream>
#include <set>
using namespace std;


int main(){
    set<pair<int ,int> > s;

    s.insert({0,10});
    s.insert({11,20});
    s.insert({21,30});
    s.insert({300,332});

    
    auto it = s.upper_bound({333,INT16_MAX});
    if(it == s.begin()){
        cout<<"Not Found";
        exit(1);
    }

    it--;
    pair<int ,int> p = *it;
    int point = 333;

    if(p.first <= point and p.second >= point)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }



}