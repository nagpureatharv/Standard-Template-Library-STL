#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Sets are containers which store only unique values
    //The values in the sets are stored in some specific order (like ascending or descending).
    //Elements can only be inserted or deleted, but cannot be modified.
    //Elements can only be inserted or deleted, but cannot be modified.

    set<int> g1;

    // insert elements in random order
    g1.insert(40);
    g1.insert(30);
    g1.insert(70);
    g1.insert(20);
    g1.insert(60);
    g1.insert(90);

    // assigning the elements from g1 to g2
    set<int> s2(g1.begin(), g1.end());

   //begin() – Returns an iterator to the first element in the set.
   auto itb = g1.begin();
   cout<<*itb << endl;

   //end() – Returns an iterator to the theoretical element that follows the last element in the set.
   auto ite = g1.end();
   cout<<*ite << endl;

   //size() – Returns the number of elements in the set.
   cout<<g1.size()<< endl;

   //checking if set is empty
    if (g1.empty()) {
        cout << "Set is empty";
    }
    else {
        cout << "Set is not empty" <<endl;
    }

    //find() - find the element in the set
    auto itf = g1.find(90);
    if ( itf == g1.end() ) {  
    // not found  
     cout<<"Element not found";  
    }   
    else {  
        // found  
        cout << "Iterator points to " << *itf<< endl;  
    } 

    //erase() - Delete the element from the set.
    g1.erase(90);
    
    //it point hte define index in set ex-4
    auto it = g1.begin();
        advance(it, 4);
        int x = *it;
   
    //Printing the set.
    for(auto itr = g1.begin() ; itr != g1.end() ; itr++)
    {
        cout<<*itr<<" ";
    }

}
