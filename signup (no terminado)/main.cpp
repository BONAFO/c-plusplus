#include <iostream>
#include "libs/log.h"
#include "libs/user.h"
#include "libs/signup.h"

using namespace std;




int main()
{

    User user1;
    signup(user1);    
    log(user1.get_name());
    return 0;
}
