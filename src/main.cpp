#include <iostream>
#include "resume_parser.h"
#include "scoring.h"
#include "database.h"

using namespace std;

int main()
{
    string filePath = "data/resume.txt";  
    
    vector<string> jobSkills = {"C++", "Machine Learning", "SQL", "TensorFlow", "Boost", "Data Science"};

    string resumeText = readResume(filePath);
    if (resumeText.empty()) {
        cerr << "Error: Resume text extraction failed.\n";
        return 1;
    }

    int score = calculateScore(resumeText, jobSkills);

    insertResumeData("John Doe", score);

    cout << "\nResume Screening Results:\n";
    cout << "--------------------------------\n";
    cout << "Matching Score: " << score << "/100\n";
    cout << (score >= 50 ? "Suitable for Interview" : "Not a Good Fit") << endl;

    return 0;
}

