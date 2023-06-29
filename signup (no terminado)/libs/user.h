
class User
{
    int age;
    string name;

private:
    void set_name(string new_name)
    {
        name = new_name;
    }
    void set_age(int new_age)
    {
        age = new_age;
    }

public:
    void set_data(string new_name, int new_age)
    {
        set_name(new_name);
        set_age(new_age);
    }

    string get_name()
    {
        log(name);
        return name;
    }

    int get_age()
    {
        return age;
    }
};
;
