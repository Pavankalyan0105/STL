#include <iostream>
#include <map>

using namespace std;

int main(){

    map<int , int> m;

    m[60] = 1;
    // m[54] = 43;
    m[54]++;

    cout<<m[54]<<endl;

    map<char , int> m2;
    
    string str = "Pavankalyan0105";

    for(char x: str){
        m2[x]++;
    }
    cout<<m2['a']<<endl;
    cout<<m2['0']<<endl;

    auto it = m2.find('z');
    m2.erase('0');

    cout<<m2['0']<<endl;



}