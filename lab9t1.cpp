#include <iostream>
#include <string>

const int MAX_EMPLOYEES = 5; // maximum number of employees

// Employee class definition
class Employee {
public:
    Employee(int id, std::string name, std::string cell, std::string address) : id_(id), name_(name), cell_(cell), address_(address) {}

    // getters
    int getID() const { return id_; }
    std::string getName() const { return name_; }
    std::string getCell() const { return cell_; }
    std::string getAddress() const { return address_; }

    // login/logout functions
    void login() { isLoggedIn_ = true; }
    void logout() { isLoggedIn_ = false; }

private:
    int id_;
    std::string name_;
    std::string cell_;
    std::string address_;
    bool isLoggedIn_ = false;
};

int main() {
    // create array of five employees
    Employee employees[MAX_EMPLOYEES] = {
        Employee(1, "John Smith", "123-456-7890", "123 Main St."),
        Employee(2, "Jane Doe", "234-567-8901", "456 Park Ave."),
        Employee(3, "Bob Johnson", "345-678-9012", "789 Center Blvd."),
        Employee(4, "Alice Williams", "456-789-0123", "321 Maple St."),
        Employee(5, "Tommy Thompson", "567-890-1234", "654 Oak Ave.") };

    // ask the user to enter the size of the employee array
    int size;
    std::cout << "Enter the number of employees: ";
    std::cin >> size;

    // assign each employee a card and an office
    for (int i = 0; i < size; i++) {
        int cardSerial = 1000 + i;
        int office = 100 + i;
        std::cout << "Employee " << employees[i].getName() << " has been issued card #" << cardSerial << " and assigned to office #" << office << std::endl;
    }

    // ask the user if each employee has logged in today
    for (int i = 1; i <= 10; i++) {
        std::cout << "Has employee " << i << " logged in today (y/n)? ";
        char response;
        std::cin >> response;
        if (response == 'y') {
            employees[i - 1].login();
        }
    }

    // show report
    std::cout << "ID\tName\tCard serial number\tOffice\tStatus" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << employees[i].getID() << "\t" << employees[i].getName() << "\t" << (1000 + i) << "\t\t" << (100 + i) << "\t";

    }
}
