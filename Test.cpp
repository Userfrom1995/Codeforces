#include <iostream>
#include <vector>
#include <unordered_set>
#include <fstream>
#include <chrono>
#include <string>
using namespace std;

int main() {
    std::string myString ;
    myString = "123456789";

    int start1 = 6, end1 = 8; // Range 1: [6, 9]
    int start2 = 7, end2 = 8; // Range 2: [7, 8]

    // Calculate the start and end of the overlap
    int overlap_start = std::max(start1, start2);
    int overlap_end = std::min(end1, end2);

    // Check if there's an overlap
    if (overlap_start <= overlap_end) {
        // Number of common elements is the difference between overlap_end and overlap_start + 1
        int common_elements = overlap_end - overlap_start + 1;
        std::cout << "Number of common elements: " << common_elements << std::endl;
    } else {
        std::cout << "No common elements." << std::endl;
    }

    return 0;
}


