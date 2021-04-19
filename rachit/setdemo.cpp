#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {9,8,6,5,};
    s.insert(34);
    //sets dont encourage duplicates

    //reading and inserting into set
    for(int i=0;i<3;i++) 
    {
        int num;
        cin>>num;s.insert(num);
    }

    for(auto x:s)
        cout<<x<<"  ";
        cout<<endl;

    s.erase(5);

    auto it1 = s.lower_bound(6);
    auto it2 = s.upper_bound(6);
    
    cout<<*it1<<" "<<*it2<<endl;

    //Search for an element in logn time
    auto it = s.find(9);
    if(it == s.end())
        cout<<"Not present";
    else{
        cout<<"Found "<<*it<<endl;

    }



}

