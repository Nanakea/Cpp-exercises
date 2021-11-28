#include <iostream>

using namespace std;

int main()
{
    /// /n is the same as endL(ine)
    
    string phrase = "Study at home at 2am";
    string phrasesub;
    phrasesub = phrase.substr(6, 5);
    cout << phrase;

    return 0;
}