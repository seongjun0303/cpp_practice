#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 *  This is a sample program that I wrote in order to set up c++ extension in visual studio code
 **/
int main(){
    vector<string> msg {"Hello", "C++", "World", "from", "and the c++ extension!"};

    int i = 0;
    for (const string& word : msg){
        cout << word << " ";
        i++;
    }
    cout << endl;
}