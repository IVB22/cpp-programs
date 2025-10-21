 #include <iostream> 
#include <deque>   
using namespace std; 
int main() { 
    deque<int> dq; 
    cout << "=== DEQUE OPERATIONS ===" << endl; 
    dq.push_back(10); 
    dq.push_back(20); 
    dq.push_front(5); 
    cout << "Deque elements after insertion: "; 
    for (int x : dq) 
    cout << x << " "; 
    dq.pop_front();                                                                                                     
    cout << "\nDeque after deleting front element: ";                           
    for (int x : dq) 
    cout << x << " ";    
    dq.pop_back(); 
    cout << "\nDeque after deleting last element: "; 
    for (int x : dq) 
    cout << x << " ";    
    cout << "\nFront element: " << dq.front(); 
    cout << "\nBack element: " << dq.back(); 
    dq.push_front(1); 
    dq.push_back(50); 
    cout << "\nDeque after adding 1 (front) and 50 (back): "; 
    for (int x : dq) 
    cout << x << " ";   
    cout << endl; 
    return 0; 
}
