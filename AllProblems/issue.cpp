#include<iostream>

using namespace std;

void chill(char a) {
    const int size = 10;
    int pos;
    int arr[size];

    switch (a)
    {
    case 'a':
        cout<< "element deletion\n";
        cout<<"Enter the value number you want to delete: ";
        cin >>pos;
        if(pos > size) {
            cout<<"invalid input";
        } else {
            --pos;
            for (int i = pos; i < size; i++)
            {
                arr[i] = arr [i+1];
            }
            
        }
        break;
    case 'b': 
        cout<<"enter element to insert";
        cout <<"Input" <<size <<"numbers\n";
        for (int i = 0; i < size; i++)
        {
            cout<< "value" <<i+1 << ": ";
            cin>>arr[i];
        }
        break;
    }

}

int main(void) {
    char choice;
    do
    {
        cout<<"[a] Delete element value" <<endl;
        cout<<"[b] insert element value" <<endl;
        cout<<"[c] end program" <<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        chill(choice);
    } while (choice != 'c');
    return 0;
}
