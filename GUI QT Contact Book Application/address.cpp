#include "Address.h"

// Default Peramerized Constructor
Address::Address(QString House, QString Street, QString City, QString Country)
    : House{House}, Street{Street}, City{City}, Country{Country} {}

// Copy Constructor
Address::Address(const Address &source)
    : House{source.House}, Street{source.Street}, City{source.City}, Country{source.Country} {}

// Destructor
Address::~Address() {}

// Setter for House
void Address::setHouseName(QString House)
{
    this->House = House;
}

// Getter for House
QString Address::getHouseName() const
{
    return this->House;
}

// Setter for Street
void Address::setStreetName(QString Street)
{
    this->Street = Street;
}

// Getter for Street
QString Address::getStreetName() const
{
    return this->Street;
}

// Setter for City
void Address::setCityName(QString City)
{
    this->City = City;
}

// Getter for City
QString Address::getCityName() const
{
    return this->City;
}

// Setter for Country
void Address::setCountryName(QString Country)
{
    this->Country = Country;
}

// Getter for Country
QString Address::getCountryName() const
{
    return this->Country;
}

// Check for equal addresses
bool Address::operator==(const Address &source) const
{
    return (this->House == source.House && this->Street == source.Street && this->City == source.City && this->Country == source.Country);
}

// Copy the address
Address &Address::operator=(const Address &source)
{
    this->setHouseName(source.House);
    this->setStreetName(source.Street);
    this->setCityName(source.City);
    this->setCountryName(source.Country);

    return *this;
}
