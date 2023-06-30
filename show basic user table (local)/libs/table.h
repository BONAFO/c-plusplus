#include "users_data.h"
#include "color.h"
#include <iomanip>

void show_as_table(auto data)
{
    cout << right;
    cout << msj_color(data->name, "blue", "") << setw(30 - size(data->name)) << msj_color(to_string(data->age), "yellow", "") << endl;
}

void show_users()
{
    auto database = get_users();

    cout << setw(50) << msj_color("USERS TABLE", "white","red") << endl;
    cout << right;
    cout << msj_color("NAME", "black","cyan") << setw(30 - 3) << msj_color("AGE", "black","cyan") << endl;
    for (size_t i = 0; i < 6; i++)
    {
        show_as_table(database[i]);
    }
}



