#include<bits/stdc++.h>
using namespace std;
int main()
{
    //In Priority queues the first element of the queue is the greatest of all elements in the queue.
    //elements are in nonincreasing order(maxheap)
    priority_queue<int>g1;

    //How to create a min-heap for the priority queue? 
    //priority_queue <int, vector<int>, greater<int>> g1;  
    
    //push() - Adding Value From back.
    g1.push(10);
    g1.push(30);
    g1.push(20);
    g1.push(5);
    g1.push(1);

    //empty() – Returns whether the container is empty.
    if (g1.empty())
        cout << "empty"<<endl;
    else
        cout << "not empty"<<endl;
    
    //size() - Returns the size of the queue.
    cout<<g1.size()<<endl;

    //top() - Returns a reference to the topmost element of the queue.
    cout<<g1.top()<<endl;

    //pop() - Deletes the first element of the queue.
    g1.pop();
cout<<endl;
    //
    while (! g1.empty() ) {
    cout << g1.top() << "\n";
    g1.pop();
}


  
    
}

