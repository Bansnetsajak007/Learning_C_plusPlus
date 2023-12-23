//Create a simple linked list in C++ with functions to insert a node at the beginning, 
//delete a node, and display the list.

#include<iostream>

using namespace std;

// model to structure linked list node
 struct Node {
    int data; //only integer type
    Node* next;
    Node(int value) : data(value) , next(nullptr) {}
};

class LinkedList {
    private:
        Node* head; //creating first element of linked list

    public:
        LinkedList() : head(nullptr) {}

        void insertAtBeginning(int value) {
            Node* newNode = new Node(value); //init the value
            newNode->next = head;
            head = newNode;  //making new elemeant head
        }

        void deleteNode(int value) {
            if(head == nullptr) {
                cout << "List is empty. Cannot Delete\n";
                return; //terminats the program
            }

            Node* current = head;
            Node* prev = nullptr;

            while(current != nullptr && current->data !=value) {
                /*
                as soon as the condiition evaluates as false
                loop terminates
                */
                prev = current;
                current = current->next;
            }

            if(current == nullptr) {
                cout<< "Elemtnt with" <<value <<"notfound\n";
                return;
            }

            prev->next = current->next;
            delete current;
        }

        void displayList() {
            Node* current = head;
            while(current != nullptr) {
                cout<<current->data <<" ";
                current= current->next;
            }
        }
};


int main() {
    LinkedList mylist;

    mylist.insertAtBeginning(7);
    mylist.insertAtBeginning(9);
    mylist.insertAtBeginning(6);
    mylist.insertAtBeginning(5);

    mylist.insertAtBeginning(2);
    mylist.deleteNode(9);
    mylist.displayList();
    return 0;
}



