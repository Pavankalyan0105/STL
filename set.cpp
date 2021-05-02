#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(34);
    s.insert(3233);
    s.insert(4);
    s.insert(56);
    s.insert(23434);

    for(int i=0;i<s.size();i++){
        cout<<<<"  ";
    }
}