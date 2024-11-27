//author: Ndumiso Zondi
//Desciption: Application to count the number of words, lines and characters and displays it to standard input

#include <iostream>
#include <string>
using namespace std;

int main(){
    //word count
    string word;
    int wordCount=0;
    int charCount=0;
    int lineCount=1;
    while (cin >> word) {
        ++wordCount;
        //char count
        for (int i=0; i<word.length(); ++i) ++charCount;

        //line cound
        if (word.substr(word.length()-2,word.length()-1)=="\n" && word.length()>2) ++lineCount;
    }

    cout << "line count: " << lineCount << "Word Count: " << wordCount << "character count: " << charCount << endl;

    return 0;
        
}