#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

string deletevowels(string &str){
    string nstr;
    for (auto beg = str.begin(); beg != str.end(); beg++) {
        if(*beg != 'a' &&*beg != 'e' &&*beg != 'i' &&*beg != 'o' &&*beg != 'u' &&*beg != 'y' ){
            nstr += *beg;
        }
    }
    return nstr;
}


string insertSep(string &str){

    string nstr = "";
    for (auto beg = str.begin(); beg != str.end(); beg++) {
        nstr += ".";
        nstr += *beg;

    }
    return nstr;
}

int main() {
    string msg;
    cin >> msg;

    transform(msg.begin(), msg.end(), msg.begin(), [](unsigned char c) { return tolower(c); });



    msg =deletevowels(msg);
    cout << insertSep(msg);
    return 0;
}
