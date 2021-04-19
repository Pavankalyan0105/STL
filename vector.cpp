#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector< int >arr(10);
    arr = {1,2,3,4,65,7};
    arr.push_back(45);
   // arr.reserve(10);
    
    cout<<endl<<arr.front();

    cout<<endl<<arr.back();

    cout<<endl<<arr.size();

    cout<<endl<<arr.capacity();
    return 0;
}