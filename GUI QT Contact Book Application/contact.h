#ifndef CONTACT_H
#define CONTACT_H

#include "Address.h"

// Contact class thta stores the contact information including address
class Contact
{
    // Public access specifeir, so this can be accessed from outside of the class
public:
    // Default Perameterized Constructor
    Contact(QString = "First Name", QString = "Last Name", QString = "03000000000", QString = "email@gmail.com", Address = Address());

    // Copy Constructor
    Contact(const Contact &);

    // Destructor
    ~Contact();

    // Setter for firstName
    void setFirstName(QString);
    // Getter for firstName
    QString getFirstName() const;

    // Setter for lastName
    void setLastName(QString);
    // Getter for lastName
    QString getLastName() const;

    // Setter for phoneNumber
    void setPhoneNumber(QString);
    // Getter for phoneNumber
    QString getPhoneNumber() const;

    // Setter for emailAddress
    void setEmail(QString);
    // Getter for emailAddress
    QString getEmail() const;

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

    // Private access specifeir,  so this can be accessed only within the class's scope
private:
    QString firstName, lastName, phoneNumber, emailAddress;
    Address *address;
};

// Check phone number is valid
bool isValidPhoneNumber(const QString &);

// Check email is valid
bool isValidEmail(const QString &);

#endif // CONTACT_H
