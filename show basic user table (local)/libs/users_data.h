using namespace std;

class User
{

public:
    int age;
    string name;

    void set_age(int new_age)
    {
        age = new_age;
    }
    void set_name(string new_name)
    {
        name = new_name;
    }

    void set_data(string new_name, int new_age)
    {
        set_age(new_age);
        set_name(new_name);
    }
};

auto get_users()
{
    static User *users[5];
    users[0] = new User;
    users[1] = new User;
    users[2] = new User;
    users[3] = new User;
    users[4] = new User;
    users[5] = new User;

    users[0]->set_data("Naomi", 29);
    users[1]->set_data("Tina", 21);
    users[2]->set_data("Yoshino", 25);
    users[3]->set_data("Kurumi", 18);
    users[4]->set_data("Kotori", 19);
    users[5]->set_data("Bonafo", 9);

    return users;
}
