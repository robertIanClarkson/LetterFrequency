#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getStringFreq( string &text ) {
   vector<int> freq(26);
   char current;
   for( int i = 0; i < text.length(); i++ ) {
       current = text.at(i);
      if(current >= 65 && current <= 90) {
         current = current + 32;
      }
      if(current >= 97 && current <= 122) {
         freq[current - 97] += 1;
      }
   }
   return freq;
}

void printVector( vector<int> v) {
    char letter = 'a';
    cout << endl;
    for(int i = 0; i < v.size(); i++) {
        cout << letter << ": " << v.at(i) << endl;
        letter += 1;
    }
    cout << endl;
}

int main() {
   string testText;
   cout << "Enter Text: ";
   getline(cin, testText);
   cout << endl << "You entered: " << testText << endl;
   vector<int> numLetters = getStringFreq(testText); //fix
   printVector(numLetters);
   return 0;
}
