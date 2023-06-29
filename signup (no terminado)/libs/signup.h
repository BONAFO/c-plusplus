#include "color.h"

void signup(User user)
{

    int age = 0;
    string name;
    string msj = msj_color("Hello! good day!", "cyan", "");
    log(msj);
    msj = msj_color("What is your name?", "cyan", "");
    log(msj);
    cin >> name;
    // msj = msj_color("How old are you?", "cyan", "");
    // log(msj);
    // cin >> age;
    user.set_data(name, age);
}

void user_created(User user)
{
    log(user.get_name());
    // string msj = msj_color("User " + user.get_name() + " created!","green","");
    // log(msj);
}