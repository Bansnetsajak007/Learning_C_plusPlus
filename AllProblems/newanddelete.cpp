/*
    The new and delete operators in C++ are basically to used to dynamically allocate the memory during runtime.
    They allow you to allocate memory for objects on the heap and deallocate that memory when it's no longer needed. 
*/


// new and delete operators in detail

/*
Certainly, let's simplify the `new` and `delete` operators in C++ with a straightforward example.

### `new` Operator:

- The `new` operator is used to dynamically allocate memory for an object or an array on the heap.

```cpp
#include <iostream>

int main() {
    // Dynamically allocate an integer on the heap
    int *ptr = new int;

    // Assign a value to the dynamically allocated integer
    *ptr = 42;

    // Use the dynamically allocated integer
    std::cout << "Dynamically allocated value: " << *ptr << std::endl;

    // Don't forget to free the allocated memory
    delete ptr;

    return 0;
}
```

In this example, `new int` allocates memory for an integer on the heap, and `delete ptr` frees that memory when you're done using it.

### `delete` Operator:

- The `delete` operator is used to deallocate memory that was previously allocated using `new`.

```cpp
#include <iostream>

int main() {
    // Dynamically allocate an array of integers on the heap
    int *arr = new int[5];

    // Assign values to the dynamically allocated array
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    // Use the dynamically allocated array
    std::cout << "Dynamically allocated values: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Don't forget to free the allocated array
    delete[] arr;

    return 0;
}
```

In this example, `new int[5]` allocates memory for an array of five integers on the heap, and `delete[] arr` frees that memory when you're done using the array.

Remember, using `new` and `delete` requires careful memory management to avoid memory leaks. In modern C++, using smart pointers and containers like `std::vector` is often recommended for safer memory management.
*/


#include<iostream>
#include<string>

using namespace std;

class Person{
    private:
        string name;
        
    public:
        Person(const string &n) : name(n) {
            cout <<"Creating the instance" <<endl;
        }

        ~Person()  {
            cout <<"Destroying the instance" <<endl;
        }

        void display_name(){cout << "Hi, Iam  " << name <<endl;}  
};


int main(){

    //creating the pointer that points to instance of Person class (points to memory location of Person class objects)
    Person *personPointer = new Person("Sajak");

    personPointer->display_name();

    delete personPointer;
    
    return 0;
}