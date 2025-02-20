#include <iostream>
#include "resume_parser.h"
#include "scoring.h"
#include "database.h"

using namespace std;

int main() {
    string filePath = "data/resume.txt";  // Extracted resume text file

    // Sample job requirements
    vector<string> jobSkills = {"C++", "Machine Learning", "SQL", "TensorFlow", "Boost", "Data Science"};

    string resumeText = readResume(filePath);
    if (resumeText.empty()) {
        cerr << "Error: Resume text extraction failed.\n";
        return 1;
    }

    int score = calculateScore(resumeText, jobSkills);

    // Save results in the database
    insertResumeData("John Doe", score);

    // Display results
    cout << "\n🔍 Resume Screening Results:\n";
    cout << "--------------------------------\n";
    cout << "Matching Score: " << score << "/100\n";
    cout << (score >= 50 ? "✅ Suitable for Interview" : "❌ Not a Good Fit") << endl;

    return 0;
}

