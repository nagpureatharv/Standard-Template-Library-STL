#include <bits/stdc++.h>
using namespace std;

int main()
{
    //It is a datastructure which stores a key value pair.
    //Elements are referenced using their keys not by position(unlike arrays).
    //The elements are stored in orders as per keys(i.e. they are pre-sorted).
    //Internal implementation is like a binary search tree.
    //Size is increased and decreased automatically, according to storage needs.
    //Keys are unique. Same key cannot be used to store more than 1 values

    map<int, int>g1;

    // insert elements in random order.
    g1[1] = 100;
    g1.insert(pair<int, int>(2, 30));
    g1.insert(pair<int, int>(3, 60));
    g1.insert(pair<int, int>(4, 20));
    g1.insert(pair<int, int>(5, 50));
    g1.insert(pair<int, int>(6, 50));
    g1.insert(pair<int, int>(7, 100));

   //begin() – Returns an iterator to the first element in the map.
   auto itb = g1.begin();
   cout<<itb->first<<" "<<itb->second<<endl;

   //end() – Returns an iterator to the theoretical element that follows the last element in the map.
   auto ite = g1.end();
   cout<<ite->first<<" "<<ite->second<<endl;

   //size() – Returns the number of elements in the map.
   cout<<g1.size()<<endl;

   //empty() – Returns whether the map is empty.
   if (g1.empty()) {
        cout << "True"<<endl;
    }
   else {
        cout << "False"<<endl;
    }

    //erase(iterator position) – Removes the element at the position pointed by the iterator.
    g1.erase(4);
   
    // printing map gquiz1
    for (auto it = g1.begin(); it != g1.end(); it++)
    {
        cout<<it->first<<" "<< it->second<<endl;
    }
   
    // Deleting the map elements
    g1.clear();

}