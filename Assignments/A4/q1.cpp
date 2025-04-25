#include <iostream>

using namespace std;

class Student {

protected:
    string name_;
    string address_;
    int roll_number_;

public:
    Student(string name, string address, int roll_number)
        : name_(name), address_(address), roll_number_(roll_number) {}

      virtual void PrintInfo() const {
        cout << "Name: " << name_ << endl;
        cout << "Address: " << address_ << endl;
        cout << "Roll number: " << roll_number_ << endl;
      }


};

class BSStudent : public Student {

private:
    int year_;

public:
    BSStudent(string name, string address, int roll_number, int year)
        : Student(name, address, roll_number), year_(year) {}

    void PrintInfo() const override {
        Student::PrintInfo();
        cout << "Type: BS" << endl;
        cout << "Year: " << year_ << endl;
    }

};

class MSStudent : public Student {

protected:
    string advisor_;

public:
    MSStudent(string name, string address, int roll_number, string advisor)
        : Student(name, address, roll_number), advisor_(advisor) {}

    virtual void PrintInfo() const {
        Student::PrintInfo();
        cout << "Type: MS" << endl;
        cout << "Advisor: " << advisor_ << endl;
    }

};

class MSByResearchStudent : public MSStudent {

private:
    string thesis_status_;

public:
    MSByResearchStudent(string name, string address, int roll_number, string advisor, string thesis_status)
        : MSStudent(name, address, roll_number, advisor), thesis_status_(thesis_status) {}

    void PrintInfo() const override {
        MSStudent::PrintInfo();
        cout << "Type: MS-by-research" << endl;
        cout << "Thesis status: " << thesis_status_ << endl;
    }

};

class MSByCourseworkStudent : public MSStudent {
public:
    MSByCourseworkStudent(string name, string address, int roll_number, string advisor)
        : MSStudent(name, address, roll_number, advisor) {}

    void PrintInfo() const override {
        MSStudent::PrintInfo();
        cout << "Type: MS-by-coursework" << endl;
    }
};

int main() {

    BSStudent bs("Dayan Saeed", "Johar Town", 123456, 1);
    MSByResearchStudent mr("Ali Ahmad", "Cantt", 654321, "Dr. Abbas", "started");
    MSByCourseworkStudent mc("Abdullah", "DHA", 111111, "Dr. Rizwan");

    bs.PrintInfo();
    cout << endl;

    mr.PrintInfo();
    cout << endl;

    mc.PrintInfo();
    cout << endl;

}