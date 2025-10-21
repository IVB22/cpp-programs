 #include <iostream> 
  #include <map>  
  using namespace std;   
  int main()  
  {   
     map <int, strings> students;  
     cout << "=== MAP OPERATIONS ===" << endl;  
     students[101] = "Alice"; students[102] = "Bob";  
     students[103] = "Charlie";  
     students.insert({104, "David"}); 
     cout << "Students after insertion:" << endl;  
     for (auto x : students) 
     cout << "Roll No: " << x.first << " Name: " << x.second << endl;  
     cout << "\nAccess element with key 102: " << students[102] << endl;  
     int key = 103; 
     auto it = students.find(key);   
     if (it != students.end())  
        cout << "Found student with Roll No " << key << ": " << it->second << endl;  
     else  
        cout << "Student with Roll No " << key << " not found!" << endl; 
     students.erase(101);  
     cout << "\nAfter deleting key 101:" << endl; 
     for (auto x : students)  
     cout << "Roll No: " << x.first << " Name: " << x.second << endl;  
     cout << "\nTotal students: " << students.size() << endl; 
     return 0;  
}
