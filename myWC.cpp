//author: Ndumiso Zondi
//Desciption: Application to count the number of words, lines and characters and displays it to standard input

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    //word count
    string word;
    string line;
    int wordCount=0;
    int charCount=0;
    int lineCount=0;

    while (getline(cin, line)){
    lineCount++;
    istringstream stream(line); //input stream of words delimited by a space
    while (stream >>  word) {
        
        //char counter 
        int cc=0;
        for (int i=0; i<word.length(); ++i) {
        if (isalnum(word[i]))  ++cc;
        }
        charCount = charCount+cc;

        if (cc>0) ++wordCount;
        
    }}
    if (lineCount==0) ++lineCount;
    cout << "line count: " << lineCount << " Word Count: " << wordCount << " character count: " << charCount << endl;

    return 0;
        
}