#pragma once // To prevent multiple inclusions

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Address class that stores complete address information
class Address
{
    // Public access specifeir, so this can be accessed from outside of the class
public:
    // Default Perameterized Constructor
    Address(string = "House_Name", string = "Street_Name", string = "City_Name", string = "Country_Name");

    // Copy Constructor
    Address(const Address &);

    // Destructor
    ~Address();

    // Setter for house
    void setHouseName(string);
    // Getter for house
    string getHouseName() const;

    // Setter for street
    void setStreetName(string);
    // Getter for street
    string getStreetName() const;

    // Setter for city
    void setCityName(string);
    // Getter for city
    string getCityName() const;

    // Setter for country
    void setCountryName(string);
    // Getter for country
    string getCountryName() const;

    // Check if the addresses are equal
    bool operator==(const Address &) const;

    // Copy the address
    Address &operator=(const Address &);

    // Operator Overload For cin
    friend istream &operator>>(istream &, Address &);
    // Operator Overload For cout
    friend ostream &operator<<(ostream &, const Address &);

    // Private access specifeir,  so this can be accessed only within the class's scope
private:
    string House, Street, City, Country;
};