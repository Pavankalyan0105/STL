#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {3,4,2,1,4,33,3};



    reverse(v.begin(), v.end());
    for(int i:v)
        cout<<i<<" ";
        cout<<endl;


    sort(v.begin(), v.end());
    for(int i:v)
        cout<<i<<" ";
        cout<<endl;

   

    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());

    cout<<"max ele is "<<max<<endl;
    cout<<"min ele is "<<min<<endl;


    bool x = binary_search(v.begin(), v.end(),5);

    if(x)  cout<<"Found";
    else    cout<<"Not found";

    cout<<endl;

    int s =accumulate(v.begin(), v.end() , 0);
    cout<<"Total sum is "<<s<<endl;

 

    auto it1 = lower_bound(v.begin(),v.end() , 3);
    auto it2 = upper_bound(v.begin(), v.end() ,3);

    cout<<"lower and upper bounds of 3 and 3"<<endl;


    cout<<*it1<<endl<<*it2<<endl;

   

    v.erase(v.begin()+1);
    cout<<"After removing ele at pos 1"<<endl;


    for(int i:v)
        cout<<i<<" ";
        cout<<endl;

    v.erase(unique(v.begin(), v.end()) , v.end());

    cout<<"After removing dups"<<endl;
    for(int i:v)
        cout<<i<<" ";
        cout<<endl;


}