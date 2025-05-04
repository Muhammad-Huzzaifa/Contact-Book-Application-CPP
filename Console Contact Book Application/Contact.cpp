#include "Contact.hpp"

// Default Peramerized Constructor
Contact::Contact(string firstName, string lastName, string phoneNumber, string emailAddress, Address address)
    : firstName{firstName}, lastName{lastName}
{
    this->setPhoneNumber(phoneNumber);
    this->setEmail(emailAddress);
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
void Contact::setFirstName(string firstName)
{
    this->firstName = firstName;
}

// Getter for firstName
string Contact::getFirstName() const
{
    return this->firstName;
}

// Setter for lastName
void Contact::setLastName(string lastName)
{
    this->lastName = lastName;
}

// Getter for lastName
string Contact::getLastName() const
{
    return this->lastName;
}

// Setter for phoneNumber
void Contact::setPhoneNumber(string phoneNumber)
{
    this->phoneNumber = validatePhoneNumber(phoneNumber);
}

// Getter for phoneNumber
string Contact::getPhoneNumber() const
{
    return this->phoneNumber;
}

// Setter for emailAddress
void Contact::setEmail(string emailAddress)
{
    this->emailAddress = validateEmail(emailAddress);
}

// Getter for emailAddress
string Contact::getEmail() const
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
    return this->firstName > source.firstName;
}

// Operator overload for cin
istream &operator>>(istream &in, Contact &source)
{
    string line;

    // First Name
    cout << "First_Name: ";
    getline(in, line);
    source.setFirstName(line);

    // Last Name
    cout << "Last_Name: ";
    getline(in, line);
    source.setLastName(line);

    // Phone Number
    cout << "Phone: ";
    getline(in, line);
    source.setPhoneNumber(line);

    // Email Address
    cout << "Email: ";
    getline(in, line);
    source.setEmail(line);

    // Adress
    in >> *(source.address);

    return in;
}

// Operator overload for cout
ostream &operator<<(ostream &out, const Contact &source)
{
    out << "First_Name: " << source.firstName << endl;
    out << "Last_Name: " << source.lastName << endl;
    out << "Phone: " << source.phoneNumber << endl;
    out << "Email: " << source.emailAddress << endl;
    out << *(source.address);

    return out;
}

// Defining the check phone number function
bool isValidPhoneNumber(const string &phoneNumber)
{
    if (phoneNumber.length() != 11)
        return false;

    else
    {
        for (size_t i{0}; i < 11; ++i)
        {
            if (phoneNumber[i] < '0' || phoneNumber[i] > '9')
                return false;
        }
    }

    return true;
}

// Defing the validate phone number function
string validatePhoneNumber(string &phoneNumber)
{
    if (isValidPhoneNumber(phoneNumber))
        return phoneNumber;

    else
    {
        while (!isValidPhoneNumber(phoneNumber))
        {
            cout << "Invalid Phone Number!! Enter again: ";
            getline(cin, phoneNumber);
        }
    }

    return phoneNumber;
}

// Defining the check email function
bool isValidEmail(const string &email)
{
    if (email.length() <= 10)
        return false;

    else if (email.substr(email.length() - 10) != "@gmail.com")
        return false;

    else if (email.find(' ') != string::npos)
        return false;

    return true;
}

// Defining the validate email function
string validateEmail(string &email)
{
    if (isValidEmail(email))
        return email;

    else
    {
        while (!isValidEmail(email))
        {
            cout << "Invalid Email Address!! Enter again: ";
            getline(cin, email);
        }
    }

    return email;
}