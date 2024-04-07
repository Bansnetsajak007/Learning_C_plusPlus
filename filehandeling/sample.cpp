#include<iostream>
#include <fstream>
#include<string.h>
#include<string>
using namespace std;

void createDatabase() {
    string dbname;
    string fileFormat = ".db";
    cout<<"Enter database name: ";
    cin>>dbname;
    fstream file(dbname + fileFormat); 
    cout<<"Database "<<dbname <<"created successfully";
}

static void repl() {
  char line[1024];
  for (;;) {
    cout<<">> ";

    if (!fgets(line, sizeof(line), stdin)) {
      printf("\n");
      break;
    }

    //command processor

    if(strcmp(line, "createDatabase") == 0) {
        createDatabase();
    }

    if(strcmp(line, "exit\n") == 0) {
        break;
    }

  }
}

int main(int argc, const char* argv[]) {

  if (argc == 1) {
    repl();
  } else if (argc == 2) {
    cout<<"Testing...";
  } 
  }
