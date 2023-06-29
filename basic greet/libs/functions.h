#include "case.h"
#include "color.h"

using namespace std;

string get_name()
{
    string name;
    string askq = msj_color("What's your name", "cyan", "");
    cout << askq << endl;
    getline(cin, name);
    return name;
}

void asnwer(string ans)
{
    cout << ans << endl;
}

void greet(string name)
{
    name[0] = toupper(name[0]);
    const string gr = msj_color("Hello " + name + ", good day.", "blue", "");
    asnwer(gr);
}

void ask(string name)
{
    string res;
    string askq = msj_color("How are you?", "cyan", "");
    name[0] = toupper(name[0]);
    cout << askq;
    getline(cin, res);

    res = to_lower_case(res);

    if (res == "fine" || res == "good" || res == "nice" || res == "very good")
    {
        askq = msj_color("Oh! Good!", "green", "");
    }
    else
    {
        askq = msj_color("Oh sorry " + name + ", I hope you get better...", "red", "");
    }
    asnwer(askq);
}