#include <string>
#include <iostream>
using namespace std;

int main()
{
    string str ;
    char  str2[10];

    // Takes the whole line 
    //prefer using it


    getline(cin, str);

    str.copy(str2 , 3 , 0); 
    
    str+="f";
    str+="dr";
    str.pop_back();

    cout << str;
    cout<<"  "<<str2<<"  ";
}