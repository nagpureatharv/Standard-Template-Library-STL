#include <bits/stdc++.h>
using namespace std;
int main()
{
    //unordered_map is an associated container that stores elements formed by the combination of key-value and a mapped value. 
    //The key value is used to uniquely identify the element and the mapped value is the content associated with the key.
    //Keys are unique. Same key cannot be used to store more than 1 values.
    //Element are unordered way.
    //Internally unordered_map is implemented using Hash Table.

    unordered_map <int,int>g1;
    g1[1] = 2;
    g1[8] = 3;
    g1[5] = 3;
    
    //at(): This function in C++ unordered_map returns the reference to the value with the element as key k.
    auto ita = g1.at(1);
    cout<<ita<<endl;

    // If key not found in map iterator to end is returned
    if (g1.find(8) == g1.end())
        cout <<"key"<< " not found"<<endl;
    // If key found then iterator to that key is returned
    else
        cout << "Key Found" << endl;

    //empty() – Returns whether the map is empty.
    if (g1.empty()) {
        cout << "True"<<endl;
    }
    else {
        cout << "False"<<endl;
    }

    //erase(): erase elements in the container in the unordered_map container,we have to put ky in brackets.
    g1.erase(8);

    //Printing the Unordered map.
    for(auto it = g1.begin();it!=g1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    //counting the number occure in array
    int arr[] = {7,1,0,3,5,0,1,3,2,5,7,3,8,9,9}
    unordered_map<int,int> usermap;
    
    for(int i=0;i<15;i++){
    int key = arr[i];
    usermap[key]++;
    }
    
      for(auto it = g1.begin();it!=g1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    //output -
    // 9 2
    //8 1
    //2 1 
    //3 3
    //5 2 etc..
    
}
