#include<bits/stdc++.h>
using namespace std ;

int main()
{
    vector<int> g1;
    vector<int>g2;
  
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    //size() – Returns the number of elements in the vector.
    cout<<g1.size();//op-5

    //empty() – Returns whether the container is empty.
    if (g1.empty())
        cout << "\nVector is empty";
    else
        cout << "\nVector is not empty";

    //at(g) – Returns a reference to the element at position ‘g’ in the vector
     cout<< g1.at(4);//op-5

    //front() – Returns a reference to the first element in the vector
    cout<<g1.front();//op-1

    //back() – Returns a reference to the last element in the vector
    cout<<g1.back();//op-5

    //assign

    //push_back() – It push the elements into a vector from the back
    g1.push_back(2);

    //pop_back() – It is used to pop or remove elements from a vector from the back.
    g1.pop_back();


    //insert() – It inserts new elements before the element at the specified position
    g1.insert(g1.end(),2);
    g1.insert(g1.begin(),3);

    //erase() – It is used to remove elements from a container from the specified position or range.
    g1.erase(g1.begin()+2 , g1.begin()+4);
    g1.erase(g1.end());

    //swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
    // Swaps g1 and g2
    g1.swap(g2);

    //clear() – It is used to remove all the elements of the vector container
    g1.clear();
    
}