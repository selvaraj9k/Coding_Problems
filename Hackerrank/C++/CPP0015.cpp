/*
  https://www.hackerrank.com/challenges/c-tutorial-class/problem
 */
#include <iostream>
#include <sstream>
using namespace std;
class Student{
    int age;
    int standard;
    string first_name;
    string last_name;
    public:
    Student()
    {
        age=0;
        standard=0;
        first_name.clear();
        last_name.clear();
    }
    void set_age(int Newage)
    {
        age = Newage;
    }
    void set_standard(int Newstandard)
    {
        standard = Newstandard;
    }
    void set_first_name(string Newfirstname)
    {
      first_name = Newfirstname;
    }
    void set_last_name(string Newlastname)
    {
        last_name = Newlastname;
    }

    int get_age()
    {
        return age;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    int get_standard()
    {
        return standard;
    }
    string to_string()
    {
        stringstream ss;
        string s=",";
        ss << age << s << first_name << s << last_name << s << standard;
        return ss.str();
    }
};

int main() {
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
    cout << st.to_string();

    return 0;
}
