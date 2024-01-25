/*
IMPORTANT CONCEPT IN INHERITANCE (diamond problem)

The diamond problem is a term used in object-oriented programming, especially in languages that support multiple inheritance, like C++. It arises when a class inherits from two classes that have a common ancestor.

Imagine you have a class A, and two other classes B and C, both inheriting from A. Now, let's say there's another class D that inherits from both B and C. Here's how it looks:

                                 A
                                / \
                               B   C
                                \ /
                                 D

 Now, let's say class A has a method (function) called doSomething(). Since both B and C inherit from A, they also have this method. When D inherits from both B and C, it essentially inherits the doSomething() method from both of them.

The problem arises when you try to create an object of class D and call doSomething(). The compiler gets confused about which version of doSomething() to use, as it has two potential paths through B and C. This ambiguity creates the diamond problem.

To solve this problem, C++ introduces virtual inheritance. By using the virtual keyword when inheriting from a common ancestor, you can ensure that there is only one instance of the shared base class. This way, the diamond problem is mitigated, and the compiler knows which version of doSomething() to use.    

In C++, you would use virtual inheritance like this:

    class A {
    public:
        virtual void doSomething() {
            // implementation
        }
    };

    class B : public virtual A {
        // ...
    };

    class C : public virtual A {
        // ...
    };

    class D : public B, public C {
        // ...
    };

in above code as you can see class Base1 and class Base2 inherits virtually from class Basecommon 
but what does it mean to inheit virtually

When a class inherits virtually from a common base class,The virtual keyword in the inheritance means that there will be only one shared instance of the BaseCommon class in the entire hierarchy, even if there are multiple paths through which it is inherited.

Without virtual inheritance, each derived class would have its own separate instance of the base class.

when you say "B and C are virtually inherited from A," it means that both B and C share a single instance of the BaseCommon class, providing a clear and unambiguous inheritance structure.

*/


//simplest example on how to solve ambigity issue in multipath inheritance


#include<iostream>

using namespace std;

class BaseCommon{
    public:
        virtual void display() {
            cout<<"display function of the base class";
        }
};

class Base1: public virtual BaseCommon {
    
};

class Base2: public virtual BaseCommon {
    
};

class Derived: public Base1, public Base2 {
    
};


int main() {
    Derived obj;
    obj.display();
    return 0;
}
