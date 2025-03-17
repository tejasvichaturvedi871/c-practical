# Cpp-practical
code
##c-practical-


## 1
#include <iostream> 

#include <vector> 

#include <set> 
 
double seriesSum(int n) { 

   double sum=0; 
   
   for (int i =1; i <= n; i++) {  
   
      double term 1.0/ pow(1, 1); 
      
      if ( i% 2==0) {
      
         sum = term;
         
      } else { 
      
         sum += term;
         
      }
      
   }
   
   return sum; 
   
} 

int main() {  

   int n; 
   
   cout << "Enter the number of terms: "; 
   
   cin>>n; 
   
   cout "Sum of series: <<< seriesSum(n) endl; 
   
   return 0; 
   
}



##2
#include <iostream> 

#include <vector> 

#include <set> 


void removeDuplicates (vector<int>& arr) { 

     set<int>uniqueElements(arr.begin(), arr.end()): 
     
     arr.assign(uniqueElements.begin(), uniqueElements.end()); 
     
}

int main() { 

     vector<int arr (1, 2, 2, 3, 4, 4, 5, 6, 6); 
     

     cout << "Original array: "; 
     
     for (int num :arr) cout<<num << " ";
     

     removeDuplicates(arr); 
     
     cout<< "\nArray after removing duplicates: ";
     
     for (int num arr) cout<< num<<"*; 
     
      return 0; 
      
}




     
##3


 #include <iostream> 
 
#include <string> 

#include <map> 

  using namespace std; 
  

void countOccurrences (string str) { 

   map char, int freq; 
   

   for (char : str) { 
   
       if (isalpha(c)) {
       
          freq[tolower(c)]++; 
          
      }  
      
   } 
   
   cout<< "Character Frequency Table:\n";
   
 
   for (auto pair freq) { 
   
       cout<<< pair.first<< " -> " << pair.second << endl;
       
   }
   
}

int main() { 

   string input; 
   
   cout<< "Enter a string:"; 
   
   getline(cin, input);  
   

   countoccurrences(input); 
   
   return 0;
   


##4

#include <iostream>

#include <cstring> 

using namespace std; 


void displayASCII (string str) { 

   cout << "ASCII values: \n";
   
   for (char c: str) {  
   
      cout << c << " ->" << int(c) << endl;
      
    } 
    
}  


void concatenateStrings (char str1[], char str2[]) {

   int i= strlen(str1), j = 0; 
   
   while (str2[j] != '\0') { 
   
      str1[i] = str2[j];  
      
      i++; j++;  
      
   }  
   
   str1[i] = '\0'; 
   
} 


bool compareStrings (char str1[], char str2[]) { 

   int i = 0; 
   
   while (str1[i] != '\0' && str2[i] != '\0') { 
   
       if (str1[i] != str2[i]) 
       
           return false; 
           
       t++;  
       
   }   
   
   return str1[i] = str2[i]; 
   
}


int stringLength(char* str) { 

   int len = 0; 
   
   while (*str != '\0') {  
   
       len++; 
       
       str++; 
       
   } 
   
return len; 

}


void toUppercase (char str[]) { 

   int i = 0; 
   
   while (str[i] != '\0') { 
   
       if (str[i] >= 'a' && str[i] <= 'z') { 
       
           str[i] = 32; 
           
       } 
       
       i++; 
       
   } 
   
} 


void reverseString(char str[]) { 

   int len = stringLength (str); 
   
   for (int i = 0; i < len / 2; i++) {
   
      swap(str[i], str[len-i-1]); 
      
   } 
   
} 


int main() { 

    char str1[100], str2[100];
    
    
    cout << "Enter first string: "; 
    
    cin >> str1; 
    
    cout << "Enter second string: "; 
    
    cin >> str2; 
    

    displayASCII(str1); 
    


    concatenateStrings (str1, str2); 
    
    cout << "Concatenated String: " << str1 << endl; 
    

    cout << "Strings are << (compareStrings (str1, str2) ? "equal": "not equal") << endl; 
    

    cout << "Length of first string: " << stringLength(str1) << endl; 
    

    toUppercase(str1); 
    
    cout << "Uppercase String: "<< str1 << endl;
    

} 


void reverseString(char str[]) { 

   int len = stringLength(str); 
   
   for (int i = 0; i < len / 2; i++) { 
   
      swap(str[i], str[len i 1]); 
      
   } 
   
} 

int main() { 

   char str1[100], str2[100]; 
   

   cout << "Enter first string: "; 
   
   cin >> str1; 
   
   cout << "Enter second string: 
   
   cin >> str2; 
   

   displayASCII(str1); 
   

   concatenateStrings (str1, str2); 
   
   cout << "Concatenated String: <<<< str1 << endl; 
   

   cout << "Strings are <<< (compareStrings (str1, str2) ? "equal": "not equal") <<< endl; 
   

   cout << "Length of first string: <<<<< stringLength(str1) << endl; 
   

   cout << "Uppercase String: <<<<< str1 << endl; 
   

   reverseString(str1); 
   
   cout << "Reversed String: <<<< str1 << endl; 
   
   return 0; 
   
}


##5 


#include <iostream> 

#include <vector> 


vector<int> mergeArrays (vector<int>& arr1, vector<int>& arr2) { 

   vector<int> merged; 
   
   int i = 0, j = 0;
   
   
   while (i < arr1.size() && jarr2.size()) { 
   
      if (arr1[i] < arr2[j])
      
         merged.push_back(arr1[i++]); 
         
      else 
      
         merged.push_back(arr2[j++]); 
         
   } 
   
   while (i < arr1.size()) merged.push_back(arr1[i++]); 
   
   while (j < arr2.size()) merged.push_back(arr2[j++]); 
   
   return merged; 
   
} 

int main() { 

    vector<int> arr1= {(1, 3, 5, 5,7};
    
    vector<int> arr2 = {2, 4, 6, 8)}; 
    
    vector<int> merged = mergeArrays (arr1, агг2); 
    
    cout << "Merged sorted array: "; 
    
    for (int num: merged) cout << num << " "; 
    
    return 0;
    
}   

##6


#include <iostream> 

#include <vector> 


// Recursive binary search 

int binarySearchRecursive (vector<int> arr, int left, int right, int key) { 

   If (left right) return -1; 
   
   int mid left (right left)/2;
   

   if(arr[mid] key) return mid;
   
   if (arr[mid] key) return binarySearchRecursive(arr, left, mid-1, key); 
   
   return binarySearchRecursive(arr, mid +1 ,right,key); 
   
} 


// Iterative binary search 

int binarySearchIterative(vector<int> arr, int key) { 

  int left =0, right =arr.size() - 1; 
  
  while (left <= right) { 
  
     int mid =left + (right - left)/2; 
     
     if (arr[mid] == key) return mid; 
     
     if (arr[mid] > key) right = mid-1;
     
     else left = mid -1; 
     
  }
  
return -1; 

} 


int main() { 

  vector<int> arr= (1, 3, 5, 7, 9, 11); 
  
  int key = 5; 
  

// Recursive search 


  int indexRec binarySearchRecursive(arr, 0, arr.size() - 1, key); 
  
  cout<<" Recursive Binary Search:"<< (indexRec !=-1 ? "Found at index" + to_string(indexRec): "Not found") << endl; 
  

// Iterative search

  int indexIter = binarySearchIterative(arr, key);  
  
  cout << "Iterative Binary Search:"<< (indexIter !=-1 ? "Found at index" + to_string(indexIter): "Not found") << endl;
  

  return 0;
  
}


##7


#include <iostream> 

    
// Recursive GCD 

int gcdRecursive(int a, int b) { 

  return (b==0) ? a: gcdRecursive(b, a% b); 
  
} 

 
// Non-recursive GCD 

int gcdIterative(int a, int b) { 

   while (b != 0) { 
   
       int temp =b; 
       
       b = a%b;
       
       a =temp; 
       
   } 
   
   return a; 
   
}  

int main() {  

   int a, b;  
   
   cout<< "Enter two numbers: "; 
   
   cin >> a >> b; 
   
   
   cout << "GCD (Recursive):  "<< gcdRecursive(a, b) << endl;
   
   cout << "GCD (Iterative): "<< gcdIterative(a, b)<< endl; 
   
   return 0; 
   
} 


##8

#include <iostream>

using namespace std; 


class Matrix { 

    int mat[3][3]; 
    

public:  

    void input() { 
    
       cout << "Enter matrix (3x3):\n"; 
       
       for (int i=0; i < 3 i++) 
       
           for (int j = 0 j < 3; j++) 
           
               cin >> mat [i][j]; 
               
    } 
    
 
    void display() {  
    
       for (int i = 0 i < 3 i++) { 
       
           for (int j = 0 j <= 3 ; j++)
           
               cout << mat[i][j] << "" ;
               
           cout << endl; 
           
       }  
       
    } 
    

    Matrix operator+(Matrix m) { 
    
        Matrix res; 
        
        for (int i = 0; i < 3 i++) 
        
            for (int j = 0; j < 3 j++) 
            
                res.mat[i][j] = mat[i][j]+ m.mat[i][j]; 
                
        return res; 
        
    } 
    

    Matrix operator*(Matrix m) { 
    
        Matrix res; 
        
        for (int i = 0; i < 3; i++) 
        
            for (int j = 0; j < 3; j++)  {
            
                res.mat[i][j]=0;
                
                for (int k = 0; k < 3; k++) 
                
                    res.mat[i][j] += mat[i][k]*m.mat[k][j]; 
                    
            }  
            
        return res;  
        
    }    
    

    Matrix transpose() { 
    
        Matrix res; 
        
        for (int i = 0; i < 3; i++) 
        
            for (int j = 0; j < 3; j++) 
            
                res.mat[i][j] = mat[j][i]; 
                
        return res; 
        
   } 
   
}; 

 
int main() { 

   Matrix A, B, C; 
   
   int choice; 
   
  
   A.input(); 
   
   B.input(); 
   
 
   do { 
   
      cout << "\nMenu:\n1. Sum\n2. Product\n3. Transpose\n4. Exit\nEnter choice: "; 
      
      cin >> choice; 
      

      switch (choice) {
         case 1: 
            C=A+B; 
            C.display(); 
            break; 
         case 2:
            C =A*B; 
            C.display(); 
            break; 
         case 3:  
            C =A.transpose(); 
            C.display(); 
            break; 
         case 4: 
            cout << "Exiting...\n"; 
            break; 
         default: 
            cout << "Invalid choice!"; 
      } 
   } while (choice != 4); 
   
   return 0; 
   
}


##9


#include <iostream>   

using namespace std; 


class Person { 

protected: 

   string name; 
   
   int age; 


public: 

   void input() { 
   
      cout << "Enter name and age:  
      
      cin >> name >> age; 
      
   }
   
   void display() { 
   
      cout << "Name: "<< name << ", Age: " << age << endl; 
      
   } 
   
}; 


class Student public Person { 

   string course; 
   

public: 

   void input() { 
   
      Person::input(); 
      
      cout << "Enter course: 
      
      cin >> course; 
      
   } 
   
   void display() { 
   
      Person::display(); 
      
      cout << "Course: " << course << endl; 
      
   } 
   
}; 


class Employee public Person { 

   int salary;  
   
public: 

   void input() {
   
      Person::input(); 
      
      cout << "Enter salary: ";  
      
      cin >> salary; 
      
   }
   
   void display() { 
   
      Person::display(); 
      
      cout << "Salary: " << salary << endl;
      
   }
   
};


int main() { 

   Student s; 
   
   Employee e; 
   

   cout << "Enter student details:\n"; 
   
   s.input(); 
   

   cout << "Enter employee details:\n"; 
   
   e.input();
   
   
   cout << "\nStudent Details:\n"; 
   
   s.display();
   

   
   cout << "\nEmployee Details:\n"; 
   
   e.display();
   
   
   return 0; 
   
}



##10

#include <iostream> 

using namespace std; 


class Triangle { 

public: 

   // Area with base & height
   
   double area(double base, double height) { 
   
   return 0.5 *base*height; 
   
   } 
   

   // Area with 3 sides (Heron's formula) 
   
   double area(double a, double b, double c) { 
   
      double s (a + b + c) / 2; 
      
      return sqrt(s* (s-a)*(s-b)*(s-c)); 
      
   } 
   
}; 


int main() { 

   Triangle t; 
   
   cout << "Area (Base, Height): " << t.area(5, 10) << endl; 
   
   cout << "Area (Three Sides): " << t.area(3, 4, 5) << endl;
   
   return 0;
   
}


   
##11


#include <iostream> 

#include <stdexcept> 

using namespace std; 


class MatrixException: public exception { 

public: 

   const char* what() const throw() { 
   
      return "Matrix dimensions are incompatible!"; 
      
   } 
   
}; 


void checkCompatibility(int rows1, int cols1, int rows2, int cols2) { 

   if (cols1 != rows2) throw MatrixException(); 
   
} 


int main() { 

   try { 
   
      checkCompatibility(2, 6, 4, 2); 
      
   } catch (MatrixException e) { 
   
      cout << "Eггог: <<<< e.what() << endl; 
      
   } 
   
   return 0; 
   
}   


##12


#include <iostream> 

#include <stdexcept> 

using namespace std; 


class PrimeException: public exception { 

public: 

   const char what() const throw() { 
   
       return "Number must be greater than 11"; 
       
   } 
   
}; 


// Function to check if a number is prime 

bool isPrime(int num) { 

   if (num < 2) 
   
      throw PrimeException(); 
      
   for(int i=2; i*i <=num; i++) { 
   
      if (num % i == 0) 
      
         return false; 
         
   }
   
   return true; 
   
}


int main() { 

   int num; 
   
   cout << "Enter a number: "; 
   
   cin >> num; 
   

   try { 
   
      if (isPrime(num)) 
      
      cout << num << " is a prime number.\n"; 
      
      else 
      
         cout << num << " is not a prime number.\n"; 
         
   } catch (PrimeException& e) { 
   
      cout << "Eггог: " <<e.what() << endl; 
      
   } 
   
   return 0;    
   
}



##13

#include <iostream using namespace std; 


class Student { 

public: 

   int rollNo; string name; 
   
   string className; 
   
   int year; 
   
   float totalMarks; 
   

   void input() { 
   
      cout << "Enter Roll No, Name, Class, Year, and Total Marks: ";
      
      cin>> rollNo >> name>> className >> year>> totalMarks; 
      
   } 

   void display() { 
   
      cout << "Roll No: " <<rollNo <<", Name: "<< name 
      
           << " , Class: " << className << ",Year:" <<year 
           
           << " , Total Marks: " << totalMarks << endl; 
           
   } 
   
}; 


int main() { 

   Student students [5]; 
   
 
   // Taking input for 5 students 
   
   for (int i = 0; i < 5; i++) { 
   
      cout << "Enter details for Student " << i +1 << ":\n"; 
      
      students[i].input(); 
      
   } 
cout<<"\nStudent Details: \n"; 

for (int i=0; i < 5; 1++) { 

students[i].display(); 

} 

return 0; 

} 



##14
#include <cstdio>  // For file handling functions


int main() {

    FILE *source, *destination;
    
    char ch;
    

    // Open the source file in read mode

    
    source = fopen("source.txt", "r");
    
    if (source == nullptr) {
    
        printf("Error: Source file not found or could not be opened.\n");
        
        return 1;  // Exit if source file can't be opened
        
    }
    

    // Open the destination file in write mode
    
    destination = fopen("destination.txt", "w");
    
    if (destination == nullptr) {
    
        printf("Error: Could not open destination file for writing.\n");
        
        fclose(source);  // Close source file before exiting
        
        return 1; 
        
    }
    

    // Copy contents from source to destination
    
    while ((ch = fgetc(source)) != EOF) {
    
        fputc(ch, destination);
        
    }
    

    printf("File copy successful.\n");
    

    // Close both files
    
    fclose(source);
    
    fclose(destination);
    

    return 0;
    
}


   
# Practical 1
![Image](https://github.com/user-attachments/assets/76ffaa46-ba24-4a1e-9100-9056000e9d63)
# Practical 2
![Image](https://github.com/user-attachments/assets/7aff984d-bff7-49ab-9e0b-81d590403226)
# Practical 3
![Image](https://github.com/user-attachments/assets/8969d6b1-6d59-4e8d-a275-d4d014bd523b)
# Practical 4
![Image](https://github.com/user-attachments/assets/6343487c-2de6-4fe9-9970-53ac6e5585e5)

![Image](https://github.com/user-attachments/assets/3423ee37-ea5a-4304-b9e9-d7aaa1747f5d)

![Image](https://github.com/user-attachments/assets/1da2f343-df38-4430-a16a-db7cec179773)

![Image](https://github.com/user-attachments/assets/603e7842-7fcd-486f-9d13-a641bfac8539)
# Practical 5
![Image](https://github.com/user-attachments/assets/d6916006-385f-4d27-ac3c-aae3fb488d4f)

![Image](https://github.com/user-attachments/assets/ff4e5e32-4270-4b9c-adcf-b741044383fb)

# Practical 6
![Image](https://github.com/user-attachments/assets/0ac4bb85-ee8e-4828-b011-78ab9eef3e5d)

![Image](https://github.com/user-attachments/assets/e63082a9-49f1-4d3c-8bb1-055e60caba7b)

![Image](https://github.com/user-attachments/assets/7ed61c31-67b3-40e2-b562-7abe48c24d71)

![Image](https://github.com/user-attachments/assets/ef09da2a-13fc-478d-9bd2-ed42a18240eb)



# Practical 7
![Image](https://github.com/user-attachments/assets/36ad369c-355a-4f9a-8bb2-6e2b71a184a6)

![Image](https://github.com/user-attachments/assets/f2299b5a-363d-4a7c-8544-161bce176bbf)

# Practical 8
![Image](https://github.com/user-attachments/assets/5d6e3971-43cc-4749-b916-92f524121d65)

![Image](https://github.com/user-attachments/assets/e0850dff-71a2-4e87-a9eb-ca9b0d8d1512)

![Image](https://github.com/user-attachments/assets/589298ab-a178-4839-98ae-e520f126c3d1)

![Image](https://github.com/user-attachments/assets/5dc1d491-5492-48b9-8fe0-5ef578670d5f)

![Image](https://github.com/user-attachments/assets/7ca76098-9a41-43a5-84e1-f6872161f56d)

![Image](https://github.com/user-attachments/assets/51e1d1f6-01db-4bfa-a982-faaafa3830c0)

![Image](https://github.com/user-attachments/assets/c845e91c-7eec-4d6b-ad4c-41768cca3bff)

![Image](https://github.com/user-attachments/assets/503c3f50-9120-4fc5-b8f5-24c359c3c5bc)

# Practical 9
![Image](https://github.com/user-attachments/assets/c47b6497-312e-48b6-97fe-5ec97387c801)

![Image](https://github.com/user-attachments/assets/c7b45149-2bed-443c-8021-3e0211789b9d)

![Image](https://github.com/user-attachments/assets/54c0b1fd-e7c5-4684-8f62-c8648b0987d8)

![Image](https://github.com/user-attachments/assets/338a6cd3-6eda-41b2-bd30-9de40e98f94d)


# Practical 10
![Image](https://github.com/user-attachments/assets/54677528-b053-4a3b-bd4a-831d7b171b33)

![Image](https://github.com/user-attachments/assets/070fca5d-cbe7-495a-8914-22808cbea69a)

![Image](https://github.com/user-attachments/assets/feaf312b-4dc7-4c46-a307-eba5e463a445)

# Practical 11
![Image](https://github.com/user-attachments/assets/ad2afc45-3937-4e55-8f52-2b6379bbaf5f)

![Image](https://github.com/user-attachments/assets/040e66ab-7880-4a54-8175-9e6794866bce)

![Image](https://github.com/user-attachments/assets/98a84d49-4f7b-4e04-9cd2-36a327c7fa9c)

 # Practical 13
 ![Image](https://github.com/user-attachments/assets/0cae5a4e-6b5b-4941-bc96-ab1fd7db7f35)

![Image](https://github.com/user-attachments/assets/6af94761-e467-4aa5-a49c-c4202bb9c079)

![Image](https://github.com/user-attachments/assets/8b2cc76e-e17d-448f-935e-7754ba0d56d7)

![Image](https://github.com/user-attachments/assets/bc4d854e-0f99-48c0-a1bd-98f6e532eec8)

# Practical 14
![Image](https://github.com/user-attachments/assets/4c513704-fa59-4815-92e0-6a401f560e92)

![Image](https://github.com/user-attachments/assets/08ae09c0-92b6-4322-adcd-238f4f8a85af)

![Image](https://github.com/user-attachments/assets/c0ffb5c8-ccba-4a7b-a7b1-02d6b0c9b34d)
##c-practical-
## 1
#include <iostream> 
#include <vector> 
#include <set> 
 
double seriesSum(int n) { 
   double sum=0; 
   for (int i =1; i <= n; i++) {  
      double term 1.0/ pow(1, 1); 
      if ( i% 2==0) {
         sum = term;
      } else { 
         sum += term;
      }
   } 
   return sum; 
} 
int main() {  
   int n; 
   cout << "Enter the number of terms: "; 
   cin>>n; 
   cout "Sum of series: <<< seriesSum(n) endl;  
   return 0; 
}


