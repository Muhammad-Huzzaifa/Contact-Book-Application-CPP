#include "contact.h"

// Default Peramerized Constructor
Contact::Contact(QString firstName, QString lastName, QString phoneNumber, QString emailAddress, Address address)
    : firstName{firstName}, lastName{lastName}, phoneNumber{phoneNumber}, emailAddress{emailAddress}
{
    this->address = new Address;
    *this->address = address;
}

// Copy Constructor
Contact::Contact(const Contact &source)
    : firstName{source.firstName}, lastName{source.lastName}, phoneNumber{source.phoneNumber}, emailAddress{source.emailAddress}
{
    this->address = new Address;
    *this->address = source.getAddress();
}

// Destructor
Contact::~Contact()
{
    delete this->address;
    this->address = nullptr;
}

// Setter for firstName
void Contact::setFirstName(QString firstName)
{
    this->firstName = firstName;
}

// Getter for firstName
QString Contact::getFirstName() const
{
    return this->firstName;
}

// Setter for lastName
void Contact::setLastName(QString lastName)
{
    this->lastName = lastName;
}

// Getter for lastName
QString Contact::getLastName() const
{
    return this->lastName;
}

// Setter for phoneNumber
void Contact::setPhoneNumber(QString phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

// Getter for phoneNumber
QString Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}

// Setter for emailAddress
void Contact::setEmail(QString emailAddress)
{
    this->emailAddress = emailAddress;
}

// Getter for emailAddress
QString Contact::getEmail() const
{
    return this->emailAddress;
}

// Setter for address
void Contact::setAddress(Address address)
{
    *this->address = address;
}

// Getter for address
Address Contact::getAddress() const
{
    return *this->address;
}

// Check for equal contacts
bool Contact::operator==(const Contact &source) const
{
    return (this->firstName == source.firstName && this->lastName == source.lastName && this->phoneNumber == source.phoneNumber && this->emailAddress == source.emailAddress && *(this->address) == *(source.address));
}

// Operator overload for assignment
Contact &Contact::operator=(const Contact &source)
{
    this->setFirstName(source.firstName);
    this->setLastName(source.lastName);
    this->setPhoneNumber(source.phoneNumber);
    this->setEmail(source.emailAddress);
    this->setAddress(*source.address);

    return *this;
}

// Operator oveload for less then sign for sorting contacts in ContactBook
bool Contact::operator>(const Contact &source) const
{
    return (this->firstName > source.firstName);
}

// Defining the check phone number function
bool isValidPhoneNumber(const QString &phoneNumber)
{
    if (phoneNumber.length() != 11)
        return false;

    for (int i = 0; i < 11; ++i)
    {
        if (phoneNumber.at(i) < '0' || phoneNumber.at(i) > '9')
            return false;
    }

    return true;
}

// Defining the check email function
bool isValidEmail(const QString &email)
{
    if (email.length() <= 10)
        return false;

    else if (!email.endsWith("@gmail.com"))
        return false;

    else if (email.contains(' '))
        return false;

    return true;
}
