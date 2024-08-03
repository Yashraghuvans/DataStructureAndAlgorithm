#include<bits/stdc++.h>
using namespace std;

int main() {
    FILE* fptr;

    fptr = fopen("test.txt", "r");

    if (fptr != NULL) {
        string content;
        char line[1000]; // Temporary buffer for reading a line

        while (fgets(line, sizeof(line), fptr)) {
            content.append(line); // Append the read line to the string
        }
        cout<<content.c_str()<<endl; // Convert string to c-style string for printf
    } else {
      cout<<"Error opening file: test.txt\n"<<endl;
    }

    fclose(fptr); // Explicitly close the file

    return 0;
}
