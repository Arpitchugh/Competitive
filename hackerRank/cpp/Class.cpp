#include <iostream>
#include <sstream>
using namespace std;

class Student
{
public:
    int age, standard;
    string name, caste;

    //age
    void set_age(int a)
    {
        age = a;
    }
    int get_age()
    {
        return age;
    }
    //standard
    void set_standard(int std)
    {
        standard = std;
    }
    int get_standard()
    {
        return standard;
    }
    //name
    void set_first_name(string n)
    {
        name = n;
    }
    string get_first_name()
    {
        return name;
    }
    //name
    void set_last_name(string c)
    {
        caste = c;
    }
    string get_last_name()
    {
        return caste;
    }

    //cout
    string t_string()
    {
        string s = "";
        s += to_string(age);
        s += ",";
        s += name;
        s += ",";
        s += caste;
        s += ",";
        s += to_string(standard);
        return s;
    }
};

int main()
{
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.t_string();

    return 0;
}