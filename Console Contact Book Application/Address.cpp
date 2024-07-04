#include "Address.hpp"

// Default Peramerized Constructor
Address::Address(string House, string Street, string City, string Country)
    : House{House}, Street{Street}, City{City}, Country{Country} {}

// Copy Constructor
Address::Address(const Address &source)
    : House{source.House}, Street{source.Street}, City{source.City}, Country{source.Country} {}

// Destructor
Address::~Address() {}

// Setter for House
void Address::setHouseName(string House)
{
    this->House = House;
}

// Getter for House
string Address::getHouseName() const
{
    return this->House;
}

// Setter for Street
void Address::setStreetName(string Street)
{
    this->Street = Street;
}

// Getter for Street
string Address::getStreetName() const
{
    return this->Street;
}

// Setter for City
void Address::setCityName(string City)
{
    this->City = City;
}

// Getter for City
string Address::getCityName() const
{
    return this->City;
}

// Setter for Country
void Address::setCountryName(string Country)
{
    this->Country = Country;
}

// Getter for Country
string Address::getCountryName() const
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

// Operator overload for cin
istream &operator>>(istream &in, Address &source)
{
    string line;

    // House
    cout << "House: ";
    getline(in, line);
    source.setHouseName(line);

    // Street
    cout << "Street: ";
    getline(in, line);
    source.setStreetName(line);

    // City
    cout << "City: ";
    getline(in, line);
    source.setCityName(line);

    // Country
    cout << "Country: ";
    getline(in, line);
    source.setCountryName(line);

    cout << endl;

    return in;
}

// Operator overload for cout
ostream &operator<<(ostream &out, const Address &source)
{
    out << "House: " << source.House << endl;
    out << "Street: " << source.Street << endl;
    out << "City: " << source.City << endl;
    out << "Country: " << source.Country << endl
        << endl;

    return out;
}