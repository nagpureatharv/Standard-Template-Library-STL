#include<bits/stdc++.h>
using namespace std;
int main()
{
    // declaring set for storing string data-type
    unordered_set <int> g1;

    // insert()– Insert a new {element} in the unordered_set container.
    g1.insert(4);
    g1.insert(8);
    g1.insert(15);
    g1.insert(22);
    g1.insert(1);
    
    //count()– Count occurrences of a particular element in an unordered_set container.
    cout<<g1.count(22)<<endl;

    //find()– Search for an element in the container.
    if (g1.find(1) != g1.end()) {
        cout << "element found." << endl;
    }
    else {
        cout << "element not found" << endl;
    }

    //erase()– Remove either a single element or a range of elements ranging from start(inclusive) to end(exclusive).
    g1.erase(1);

    //size()– Return the number of elements in the unordered_set container.
    cout<<g1.size()<<endl;

    //empty()– Check if an unordered_set container is empty or not.
    if (g1.empty() == true)
        cout << "true" << endl;
    else
        cout << "false" << endl;

    //swap()– Exchange values of two unordered_set containers.
    //swap(g1,g2);

    //clear()– Removes all of the elements from an unordered_set and empties it.
    //g1.clear();

    //Printing the unorderedset.
    for(auto itf = g1.begin(); itf != g1.end(); itf++)
    {
        cout<<*itf<<" ";
    }

}