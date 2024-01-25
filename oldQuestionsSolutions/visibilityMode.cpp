/*

VISIBILITY MODE IN INHERITANCE

In C++, inheritance provides a way to create a new class that is a modified version of an existing class. Visibility modes in C++ (public, private, and protected) determine how the members (attributes and methods) of the base class are accessible in the derived class.

1. **Public Inheritance:**
   - In public inheritance, public members of the base class remain public members of the derived class.
   - Protected members of the base class remain protected members of the derived class.
   - Private members of the base class are not accessible in the derived class.

   ```cpp
   class Base {
   public:
       int publicMember;
   protected:
       int protectedMember;
   private:
       int privateMember;
   };

   class Derived : public Base {
       // publicMember is still public in the derived class
       // protectedMember is still protected in the derived class
       // privateMember is not accessible in the derived class
   };
   ```

2. **Private Inheritance:**
   - In private inheritance, public and protected members of the base class become private members of the derived class.
   - Private members of the base class are not accessible in the derived class.

   ```cpp
   class Base {
   public:
       int publicMember;
   protected:
       int protectedMember;
   private:
       int privateMember;
   };

   class Derived : private Base {
       // publicMember is now private in the derived class
       // protectedMember is now private in the derived class
       // privateMember is not accessible in the derived class
   };
   ```

3. **Protected Inheritance:**
   - In protected inheritance, public and protected members of the base class become protected members of the derived class.
   - Private members of the base class are not accessible in the derived class.

   ```cpp
   class Base {
   public:
       int publicMember;
   protected:
       int protectedMember;
   private:
       int privateMember;
   };

   class Derived : protected Base {
       // publicMember is now protected in the derived class
       // protectedMember is now protected in the derived class
       // privateMember is not accessible in the derived class
   };
   ```

The choice between public, private, and protected inheritance depends on the desired level of access control and encapsulation for the derived class. Public inheritance is the most common and is often used when modeling an "is-a" relationship between the base and derived classes.
*/