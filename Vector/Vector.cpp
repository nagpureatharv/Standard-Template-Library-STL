#include<bits/stdc++.h>
using namespace std ;

int main()
{
    //Creating the vector.
    vector<int>g1;

    for(int i= 0; i< 5 ; i++)
    {
        //push_back: Adding Value From back.
        g1.push_back(i);
        //01234
    }

    //begin() – Returns an iterator pointing to the first element in the vector.
    //end() – Returns an iterator pointing  that follows the last element in the vector.
    //auto - Create variable of requried type.
    for(auto j= g1.begin() ; j< g1.end() ; j++)
    {
        cout<< *j;
        //01234
    }
    //rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning) It moves from last to first element.
    //rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    for(auto k= g1.rbegin() ; k< g1.rend() ; k++)
    {
        cout<<*k;
    }

   


}