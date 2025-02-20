# AI-Resume-Screener

# AI-Powered Resume Screening System

##  Overview
The **AI-Powered Resume Screening System** is a C++-based application designed to help HR teams automatically filter and rank job applications. It analyzes resumes based on job-specific skills, experience, and requirements, assigning a matching score to each candidate.

##  Features
-  **Automated Resume Parsing** (Extracts text from PDFs using `pdftotext`)
-  **Keyword Matching & Scoring** (Boost library for text processing)
-  **SQLite Database Integration** (Stores candidate scores)
-  **Command-Line Interface (CLI) for HR Teams**
-  **Fast & Lightweight** (C++ for performance optimization)

##  Project Structure
```
 AI-Resume-Screener
 ┣  data
 ┃ ┣  resume.pdf            # Sample resume (PDF)
 ┃ ┣  resume.txt            # Extracted text from resume
 ┣  src
 ┃ ┣  main.cpp              # Main program logic
 ┃ ┣  resume_parser.cpp     # Resume text extraction
 ┃ ┣  resume_parser.h       # Header file for resume parser
 ┃ ┣  scoring.cpp           # Resume scoring algorithm
 ┃ ┣  scoring.h             # Header file for scoring
 ┃ ┣  database.cpp          # SQLite database integration
 ┃ ┣  database.h            # Header file for database
 ┃ ┣  pdf_to_text.sh        # Shell script for PDF text extraction
 ┣  include
 ┃ ┣  sqlite3.h             # SQLite library header
 ┣  build                   # Compiled binary files
 ┣  CMakeLists.txt          # CMake configuration
 ┣  README.md               # Documentation
```

##  How to Set Up & Run
### 1️ Install Dependencies
```bash
sudo apt install poppler-utils libboost-all-dev sqlite3 libsqlite3-dev
```

### 2️ Extract Text from Resume (PDF → TXT)
```bash
chmod +x src/pdf_to_text.sh
./src/pdf_to_text.sh
```

### 3️ Compile & Run the Project
```bash
mkdir build && cd build
cmake ..
make
./resume_screener
```

##  How It Works
1️ Reads a **resume text file** (extracted from PDF).
2️ Uses **Boost.Regex** to match job-related keywords.
3️ Assigns **points per skill match** and calculates a total score.
4️ Saves **results in an SQLite database**.
5️ Displays whether the candidate is **suitable for an interview**.

##  Example Output
```
 Resume Screening Results:
--------------------------------
Matching Score: 70/100
 Suitable for Interview
```

##  Future Improvements
-  **GUI Support** (Qt-based UI for better visualization)
-  **Machine Learning Ranking** (AI-based resume filtering)
-  **Scanned PDF Support** (OCR integration for image-based resumes)

##  Contributing
Feel free to submit **pull requests**, report **issues**, or suggest **new features**!

##  License
This project is licensed under the **Suhaffinity Co.,ltd**.