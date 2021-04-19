#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool f(int x , int y){
    return x>y;
}

int main(){
   
    vector<int> v = {5,7,9,8,6,2,3,8,6};

    //APpending elements
    v.push_back(3);

    //Printin the elements and can also be done like normal array
    for(auto i=v.begin();i!=v.end(); i++)
        cout<<*i<<"  ";
        cout<<endl;

    // sorting some range of values
    //sort(v.begin(),v.begin()+4);

    sort(v.begin() , v.end());

    for(auto i=v.begin();i!=v.end(); i++)
        cout<<*i<<"  ";
        cout<<endl;

    //Works when sorted return 0 or 1
    bool present = binary_search(v.begin(),v.end() , 6);
    cout<<present<<endl;


    //2  3  3  5  6  6  7  8  8  9  
    //upper bound return iterator of the element >= to given value 
    //lower bound return iterator of the element < to given value
    // worls only  if sorted
    vector<int>::iterator it1 = lower_bound(v.begin(),v.end() ,8);
    auto it2 = upper_bound(v.begin(),v.end() ,8);

    //By subtracting the two iterators we can achieve the frequency of that value
    cout<<"Count of 8 is "<<it2-it1<<endl;




    //Sortin in reverse order
    sort(v.begin(),v.end() , f);//f is comparator functing we have to implement
     
    for(int x: v)
    {
        cout<<x<<" - ";
    }
    cout<<endl;




    cout<<*it1<<"  "<<*it2<<endl;
}