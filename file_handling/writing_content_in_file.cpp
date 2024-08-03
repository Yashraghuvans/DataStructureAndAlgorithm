#inlcude <bits.stdc++.h>
#include <fstream>

int main() {
    std::ofstream fptr("test.txt"); // Open in write mode

    if (fptr.is_open()) {
        fptr << "content to be updated" << std::endl;  // Write with endl for newline
        fptr.close();
    } else {
        std::cerr << "Error opening file: test.txt\n";
    }

    return 0;
}
