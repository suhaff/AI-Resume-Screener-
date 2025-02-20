#include "resume_parser.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Function to read resume text from a file
string readResume(const string& filePath) {
    ifstream file(filePath);
    if (!file) {
        cerr << "Error: Cannot open resume file.\n";
        return "";
    }

    stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}
