/*
explanation with example

 **Here's an explanation of virtual and pure virtual functions, using a real-world example:**

**Imagine a family of cooks:**

- **Grandparent Cook (base class):** Defines a virtual function `makeDish()`, but doesn't provide a recipe (implementation).
- **Parent Cook (derived class):** Inherits from Grandparent Cook and overrides `makeDish()` with their signature recipe (e.g., lasagna).
- **Child Cook (derived class):** Inherits from Parent Cook and further specializes `makeDish()` with their own unique recipe (e.g., pizza).

**Virtual Functions:**

- **Declaration:** Grandparent Cook declares `virtual void makeDish()`.
- **Purpose:** Allows derived classes to provide customized implementations, ensuring the correct version is called at runtime based on the object's actual type.
- **Example:** When you ask a Child Cook to `makeDish()`, they'll bake a pizza, even though the function technically belongs to the Grandparent Cook.

**Pure Virtual Functions:**

- **Declaration:** Grandparent Cook declares `virtual void makeDish() = 0;`.
- **Purpose:** Makes the base class abstract, meaning you can't create instances of it directly. Derived classes must provide implementations for these functions.
- **Example:** Grandparent Cook can't cook anything specific, but it ensures all Cooks have a `makeDish()` recipe, even if it's different for each type of Cook.

**Key Points:**

- **Virtual:** Enables runtime polymorphism (choosing the right function at runtime).
- **Pure Virtual:** Enforces implementation in derived classes and creates abstract base classes.
- **Abstract Base Classes:** Serve as blueprints, defining common behavior for derived classes.
- **Polymorphism:** Allows treating objects of different types (Parent Cook and Child Cook) as the same type (Grandparent Cook) for flexibility.

**Additional Notes:**

- Virtual functions have a slight performance overhead due to runtime lookups.
- Abstract base classes provide a powerful mechanism for designing flexible and extensible class hierarchies.
- Pure virtual functions are often used to define interfaces that derived classes must adhere to.

*/

//code example

#include <iostream>

class Cook {  // Base class (abstract)
public:
    virtual void makeDish() = 0;  // Pure virtual function
};

class ParentCook : public Cook {  // Derived class
public:
    void makeDish() override {
        std::cout << "Making lasagna!\n";
    }
};

class ChildCook : public ParentCook {  // More derived class
public:
    void makeDish() override {
        std::cout << "Baking pizza!\n";
    }
};

int main() {
    Cook* cook1 = new ParentCook();
    Cook* cook2 = new ChildCook();

    cook1->makeDish();  // Output: Making lasagna!
    cook2->makeDish();  // Output: Baking pizza!

    delete cook1;
    delete cook2;

    return 0;
}
