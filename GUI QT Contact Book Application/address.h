#ifndef ADDRESS_H
#define ADDRESS_H

#include<QString>

using namespace std;

// Address class that stores complete address information
class Address
{
    // Public access specifeir, so this can be accessed from outside of the class
public:
    // Default Perameterized Constructor
    Address(QString = "House_Name", QString = "Street_Name", QString = "City_Name", QString = "Country_Name");

    // Copy Constructor
    Address(const Address &);

    // Destructor
    ~Address();

    // Setter for house
    void setHouseName(QString);
    // Getter for house
    QString getHouseName() const;

    // Setter for street
    void setStreetName(QString);
    // Getter for street
    QString getStreetName() const;

    // Setter for city
    void setCityName(QString);
    // Getter for city
    QString getCityName() const;

    // Setter for country
    void setCountryName(QString);
    // Getter for country
    QString getCountryName() const;

    // Check if the addresses are equal
    bool operator==(const Address &) const;

    // Copy the address
    Address &operator=(const Address &);

    // Private access specifeir,  so this can be accessed only within the class's scope
private:
    QString House, Street, City, Country;
};

#endif // ADDRESS_H
