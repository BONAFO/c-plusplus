#include "cctype"

using namespace std;


string to_lower_case(string word){
    string endw = word;
      for (auto& x : endw) {
        x = tolower(x);
    }

    return endw;
}


string to_upper_case(string word){
    string endw = word;
      for (auto& x : endw) {
        x = toupper(x);
    }

    return endw;
}

