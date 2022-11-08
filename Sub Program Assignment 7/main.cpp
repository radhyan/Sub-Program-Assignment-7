#include <iostream>
#include <string>
using namespace std;

string string_from_right(string word, int n){
    long length = word.length();
    return word.substr((length-n), n);
}
int main(){
 int n;
 string word;
 
 cout << "Input the number of characters retrieved from the right: ";
 cin >> n;
 cout << "Input a string: ";
 getline (cin >> ws, word);
 
 cout << "Output: " << string_from_right(word, n) << endl;
}
