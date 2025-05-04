#pragma once // To prevent multiple inclusions

#include "Address.hpp"

// Contact class thta stores the contact information including address
class Contact
{
    // Public access specifeir, so this can be accessed from outside of the class
public:
    // Default Perameterized Constructor
    Contact(string = "First Name", string = "Last Name", string = "03000000000", string = "email@gmail.com", Address = Address());

    // Copy Constructor
    Contact(const Contact &);

    // Destructor
    ~Contact();

    // Setter for firstName
    void setFirstName(string);
    // Getter for firstName
    string getFirstName() const;

    // Setter for lastName
    void setLastName(string);
    // Getter for lastName
    string getLastName() const;

    // Setter for phoneNumber
    void setPhoneNumber(string);
    // Getter for phoneNumber
    string getPhoneNumber() const;

    // Setter for emailAddress
    void setEmail(string);
    // Getter for emailAddress
    string getEmail() const;

    // Setter for address
    void setAddress(Address);
    // Getter for address
    Address getAddress() const;

    // Check if the contacts are equal
    bool operator==(const Contact &) const;

    // Operator Overload for assignment
    Contact &operator=(const Contact &);

    // Operator overload for less then sign for sorting contacts by first name
    bool operator>(const Contact &) const;

    // Operator Overload For cin
    friend istream &operator>>(istream &, Contact &);
    // Operator Overload For cout
    friend ostream &operator<<(ostream &, const Contact &);

    // Private access specifeir,  so this can be accessed only within the class's scope
private:
    string firstName, lastName, phoneNumber, emailAddress;
    Address *address;
};

// Check phone number is valid
bool isValidPhoneNumber(const string &);

// Validate the phone number then set
string validatePhoneNumber(string &);

// Check email is valid
bool isValidEmail(const string &);

// Validate email address then set
string validateEmail(string &);