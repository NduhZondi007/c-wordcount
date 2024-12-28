//author: Ndumiso Zondi
//Desciption: Application to count the number of words, lines and characters and displays it to standard input

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int main() {
    //word count
    string word;
    string line;
    int wordCount = 0;
    int charCount = 0;
    int lineCount = 0;
    map<char,int> m;
    

    while (getline(cin, line))
    {
        lineCount++;
        istringstream stream(line); //input stream of words delimited by a space
        while (stream >> word) {

            //char counter 
            int cc = 0;
            for (int i = 0; i < word.length(); ++i) {
                char w = word[i];
                
                if (isalnum(w))
                {
                    //map frequency
                    if (m[w]) m[w]=m[w]+1;
                    else m[w]=1;
                    ++cc;
                }
            }
            charCount = charCount + cc;

            if (cc > 0) ++wordCount;
        }
    }

    if (lineCount == 0) ++lineCount;
    cout << "\nline count: " << lineCount << " Word Count: " << wordCount << " character count: " << charCount << endl;

    //frequency printout
    cout << "[ ";
    for (const auto& f : m) {
        cout << f.first <<":"<< m[f.first] << ", ";
    }
    cout << "]" << endl;

    return 0;

}