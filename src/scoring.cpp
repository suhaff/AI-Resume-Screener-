#include "scoring.h"
#include <boost/algorithm/string.hpp>
#include <regex>

using namespace std;

// Function to calculate skill match score
int calculateScore(const string& resumeText, const vector<string>& jobSkills) {
    int score = 0;
    string text = resumeText;
    boost::algorithm::to_lower(text);

    for (const string& skill : jobSkills) {
        regex skillRegex("\\b" + skill + "\\b", regex_constants::icase);
        auto words_begin = sregex_iterator(text.begin(), text.end(), skillRegex);
        auto words_end = sregex_iterator();
        int count = distance(words_begin, words_end);

        if (count > 0) {
            score += count * 10;
        }
    }

    return score;
}
