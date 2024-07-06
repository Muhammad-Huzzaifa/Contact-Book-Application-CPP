#include "ContactBook.hpp"

// Default Constructor
ContactBook::ContactBook()
{
    this->loadFromFile();
    this->loadForSearchHistory();
    this->saveForFrequentlyViewedContacts();
    this->loadGroupsFromFile();
}

// Destructor
ContactBook::~ContactBook()
{
    this->saveToFile();
    this->saveForSearchHistory();
    this->saveForFrequentlyViewedContacts();
    this->saveGroupsToFile();
}

// Merge Duplicates
void ContactBook::mergeEqualContacts()
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        for (size_t j{0}; j < i; ++j)
        {
            if (this->All_Contacts_Stored[i] == this->All_Contacts_Stored[j])
            {
                this->All_Contacts_Stored.erase(i);
                this->Contacs_In_String.erase(i);
                --i;
                break;
            }
        }
    }
}

// Sorting the contacts
void ContactBook::sortByFirstName()
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size() - 1; ++i)
    {
        for (size_t j{0}; j < this->All_Contacts_Stored.size() - i - 1; ++j)
        {
            if (this->All_Contacts_Stored[j] > this->All_Contacts_Stored[j + 1])
            {
                Contact temp{this->All_Contacts_Stored[j]};
                this->All_Contacts_Stored[j] = this->All_Contacts_Stored[j + 1];
                this->All_Contacts_Stored[j + 1] = temp;
                string _temp{this->Contacs_In_String[j]};
                this->Contacs_In_String[j] = this->Contacs_In_String[j + 1];
                this->Contacs_In_String[j + 1] = _temp;
            }
        }
    }
}

// Adding Contact
void ContactBook::addContact(Contact &source)
{
    this->All_Contacts_Stored.push_back(source);
    this->Contacs_In_String.push_back(source.getFirstName() + " " + source.getLastName() + " " + source.getPhoneNumber());

    this->mergeEqualContacts();
    this->sortByFirstName();
    this->saveToFile();
}

// Deleting Contact
void ContactBook::deleteContact(size_t index)
{
    for (size_t i{0}; i < this->Searched_Contacts.size(); ++i)
    {
        if (this->Searched_Contacts[i] == this->All_Contacts_Stored[index])
        {
            this->Searched_Contacts.erase(i);
            this->Searched_Contacts_Count.erase(i);
            break;
        }
    }

    for (size_t i{0}; i < this->Group_Names.size(); ++i)
    {
        for (size_t j{0}; j < this->Groups[i].size(); ++j)
        {
            if (this->Groups[i][j] == this->All_Contacts_Stored[index])
            {
                this->Groups[i].erase(j);
                break;
            }
        }
    }

    this->All_Contacts_Stored.erase(index);
    this->Contacs_In_String.erase(index);

    this->saveToFile();
    this->saveForSearchHistory();
    this->saveForFrequentlyViewedContacts();
}

// Edit Contact
void ContactBook::editContact(size_t index, Contact &source)
{
    for (size_t i{0}; i < this->Searched_Contacts.size(); ++i)
    {
        if (this->Searched_Contacts[i] == this->All_Contacts_Stored[index])
        {
            this->Searched_Contacts[i] = source;
            break;
        }
    }

    for (size_t i{0}; i < this->Frequently_Viewed_Contacts.size(); ++i)
    {
        if (this->Frequently_Viewed_Contacts[i] == this->All_Contacts_Stored[index])
        {
            this->Frequently_Viewed_Contacts[i] = source;
            break;
        }
    }

    for (size_t i{0}; i < this->Group_Names.size(); ++i)
    {
        for (size_t j{0}; j < this->Groups[i].size(); ++j)
        {
            if (this->Groups[i][j] == this->All_Contacts_Stored[index])
            {
                this->Groups[i][j] = source;
                break;
            }
        }
    }

    this->All_Contacts_Stored[index] = source;
    this->Contacs_In_String[index] = (source.getFirstName() + " " + source.getLastName() + " " + source.getPhoneNumber());

    this->mergeEqualContacts();
    this->sortByFirstName();
    this->saveToFile();
    this->saveForSearchHistory();
    this->saveForFrequentlyViewedContacts();
}

// Delete contact from searched contacts
void ContactBook::deleteContactFromSearch(size_t index)
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Searched_Contacts[index])
        {
            this->deleteContact(i);
            break;
        }
    }
}

// Edit contact from search history
void ContactBook::edidSearchContact(size_t index, Contact &source)
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Searched_Contacts[index])
        {
            this->editContact(i, source);
            break;
        }
    }
}

// Delete contact from frequently viewed contacts
void ContactBook::deleteContactFromFrequently(size_t index)
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Frequently_Viewed_Contacts[index])
        {
            this->deleteContact(i);
            break;
        }
    }
}

// Edit contact from frequently viewed contacts
void ContactBook::editFrequetlyViewedContact(size_t index, Contact &source)
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Frequently_Viewed_Contacts[index])
        {
            this->editContact(i, source);
            break;
        }
    }
}

// Delete contact from advance search
void ContactBook::deleteContactFromAdvanceSearch(size_t index)
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Advance_Searched_Contacts[index])
        {
            this->deleteContact(i);
            break;
        }
    }
}

// Edit contact from advance search
void ContactBook::editContactFromAdvanceSearch(size_t index, Contact &source)
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Advance_Searched_Contacts[index])
        {
            this->editContact(i, source);
            break;
        }
    }
}

// Functions that make advance search
void ContactBook::advanceSearch(string &source)
{
    Vector<Contact> temp;

    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->Contacs_In_String[i].find(source) != string::npos)
            temp.push_back(this->All_Contacts_Stored[i]);
    }

    this->Advance_Searched_Contacts = temp;
}

// Returns the searched contact from advance search array
Contact ContactBook::search(size_t index)
{
    modifySearchHistory(this->Searched_Contacts, this->Searched_Contacts_Count, this->Advance_Searched_Contacts[index]);
    this->saveForSearchHistory();
    this->saveForFrequentlyViewedContacts();

    return this->Advance_Searched_Contacts[index];
}

// Getting total count for stored contacts
size_t ContactBook::totalContactsCount()
{
    return this->All_Contacts_Stored.size();
}

// Getting the count for searched contacts
size_t ContactBook::totalSearchContactsCount()
{
    return this->Searched_Contacts.size();
}

// Getting the frequently viewed contacts count
size_t ContactBook::totalFrequentlyViewedContactsCount()
{
    return this->Frequently_Viewed_Contacts.size();
}

// Getting total count for advanced searched contacts
size_t ContactBook::totalAdvanceContactCount()
{
    return this->Advance_Searched_Contacts.size();
}

// Function that creates a group
void ContactBook::addGroup(string &name)
{
    this->Group_Names.push_back(name);
    Vector<Contact> group;
    this->Groups.push_back(group);
    this->saveGroupsToFile();
}

// Delete group function
void ContactBook::deleteGroup(size_t index)
{
    this->Group_Names.erase(index);
    this->Groups.erase(index);
    this->saveGroupsToFile();
}

// Add contact to group function
void ContactBook::addContactToGroup(size_t index, Contact &source)
{
    this->Groups[index].push_back(source);
    this->mergeEqualContactsInGroup(index);
    this->Groups[index].sort();
    this->saveGroupsToFile();
}

// Delete contact from group function
void ContactBook::deleteContactFromGroup(size_t index, size_t cindex)
{
    this->Groups[index].erase(cindex);
    this->saveGroupsToFile();
}

// Getting the total number of groups
size_t ContactBook::totalGroupsCount()
{
    return this->Group_Names.size();
}

// Getting the total contacts in a group
size_t ContactBook::totalContactsInGroup(size_t index)
{
    return this->Groups[index].size();
}

// Merge equal contacts in certain group
void ContactBook::mergeEqualContactsInGroup(size_t index)
{
    for (size_t i{0}; i < this->Groups[index].size(); ++i)
    {
        for (size_t j{0}; j < i; ++j)
        {
            if (this->Groups[index][i] == this->Groups[index][j])
            {
                this->Groups[index].erase(i);
                --i;
                break;
            }
        }
    }
}

// Saving Contnt from file
void ContactBook::loadFromFile()
{
    ifstream file{"Contacts.txt", ios::in};

    if (!file.is_open())
    {
        cout << "Error occuring in opening file for reading...\n";
        return;
    }

    string firstName, lastName, phoneNumber, emailAddress, House, Street, City, Country;
    if (!isEmptyFile(file))
    {
        while (!file.eof())
        {
            getline(file, firstName);
            getline(file, lastName);
            getline(file, phoneNumber);
            getline(file, emailAddress);
            getline(file, House);
            getline(file, Street);
            getline(file, City);
            getline(file, Country);
            file.ignore();
            Contact source{firstName, lastName, phoneNumber, emailAddress, Address(House, Street, City, Country)};
            this->All_Contacts_Stored.push_back(source);
            this->Contacs_In_String.push_back(source.getFirstName() + " " + source.getLastName() + " " + source.getPhoneNumber());
        }
    }

    file.close();
}

// Saving Content to File
void ContactBook::saveToFile()
{
    ofstream file{"Contacts.txt", ios::out};

    if (!file.is_open())
    {
        cout << "Error occuring in opening file for writing...\n";
        return;
    }

    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        file << this->All_Contacts_Stored[i].getFirstName() << endl;
        file << this->All_Contacts_Stored[i].getLastName() << endl;
        file << this->All_Contacts_Stored[i].getPhoneNumber() << endl;
        file << this->All_Contacts_Stored[i].getEmail() << endl;
        file << this->All_Contacts_Stored[i].getAddress().getHouseName() << endl;
        file << this->All_Contacts_Stored[i].getAddress().getStreetName() << endl;
        file << this->All_Contacts_Stored[i].getAddress().getCityName() << endl;
        file << this->All_Contacts_Stored[i].getAddress().getCountryName() << endl;
        if (i < this->All_Contacts_Stored.size() - 1)
            file << endl;
    }

    file.close();
}

// Load from file for search history
void ContactBook::loadForSearchHistory()
{
    ifstream file("SearchHistory.txt");

    if (!file.is_open())
    {
        cout << "Error occuring in opening file for reading...\n";
        return;
    }

    int count;
    string firstName, lastName, phoneNumber, emailAddress, House, Street, City, Country;
    if (!isEmptyFile(file))
    {
        while (!file.eof())
        {
            file >> count;
            this->Searched_Contacts_Count.push_back(count);
            file.ignore();
            getline(file, firstName);
            getline(file, lastName);
            getline(file, phoneNumber);
            getline(file, emailAddress);
            getline(file, House);
            getline(file, Street);
            getline(file, City);
            getline(file, Country);
            file.ignore();
            Contact source{firstName, lastName, phoneNumber, emailAddress, Address(House, Street, City, Country)};
            this->Searched_Contacts.push_back(source);
        }
    }

    file.close();
}

// Saving content to search history file
void ContactBook::saveForSearchHistory()
{
    ofstream file("SearchHistory.txt");

    if (!file.is_open())
    {
        cout << "Error occuring in opening file for writing...\n";
        return;
    }

    for (size_t i{0}; i < this->Searched_Contacts.size(); ++i)
    {
        file << this->Searched_Contacts_Count[i] << "\n";
        file << this->Searched_Contacts[i].getFirstName() << endl;
        file << this->Searched_Contacts[i].getLastName() << endl;
        file << this->Searched_Contacts[i].getPhoneNumber() << endl;
        file << this->Searched_Contacts[i].getEmail() << endl;
        file << this->Searched_Contacts[i].getAddress().getHouseName() << endl;
        file << this->Searched_Contacts[i].getAddress().getStreetName() << endl;
        file << this->Searched_Contacts[i].getAddress().getCityName() << endl;
        file << this->Searched_Contacts[i].getAddress().getCountryName() << endl;
        if (i < this->Searched_Contacts.size() - 1)
            file << endl;
    }

    file.close();
}

// Dealing with frequently viewed contacts
void ContactBook::saveForFrequentlyViewedContacts()
{
    Vector<Contact> temp;

    int first{0}, second{0}, third{0};

    if (this->Searched_Contacts.size() < 3)
    {
        for (size_t i{0}; i < this->Searched_Contacts.size(); ++i)
            temp.push_back(this->Searched_Contacts[i]);
    }

    else
    {
        for (size_t i{0}; i < this->Searched_Contacts_Count.size(); ++i)
        {
            if (this->Searched_Contacts_Count[i] > first)
            {
                third = second;
                second = first;
                first = this->Searched_Contacts_Count[i];
            }
            else if (this->Searched_Contacts_Count[i] > second)
            {
                third = second;
                second = this->Searched_Contacts_Count[i];
            }
            else if (this->Searched_Contacts_Count[i] > third)
                third = this->Searched_Contacts_Count[i];
        }

        for (size_t i{0}; i < this->Searched_Contacts.size(); ++i)
        {
            if (this->Searched_Contacts_Count[i] == first || this->Searched_Contacts_Count[i] == second || this->Searched_Contacts_Count[i] == third)
                temp.push_back(this->Searched_Contacts[i]);
        }
    }

    this->Frequently_Viewed_Contacts = temp;

    ofstream file{"FrequentlyViewdContacts.txt"};

    if (!file.is_open())
    {
        cout << "Error occuring in opening file for writing...\n";
        return;
    }

    for (size_t i{0}; i < this->Frequently_Viewed_Contacts.size(); ++i)
    {
        file << this->Frequently_Viewed_Contacts[i].getFirstName() << endl;
        file << this->Frequently_Viewed_Contacts[i].getLastName() << endl;
        file << this->Frequently_Viewed_Contacts[i].getPhoneNumber() << endl;
        file << this->Frequently_Viewed_Contacts[i].getEmail() << endl;
        file << this->Frequently_Viewed_Contacts[i].getAddress().getHouseName() << endl;
        file << this->Frequently_Viewed_Contacts[i].getAddress().getStreetName() << endl;
        file << this->Frequently_Viewed_Contacts[i].getAddress().getCityName() << endl;
        file << this->Frequently_Viewed_Contacts[i].getAddress().getCountryName() << endl;
        if (i < this->Frequently_Viewed_Contacts.size() - 1)
            file << endl;
    }

    file.close();
}

// Loading groups data from file
void ContactBook::loadGroupsFromFile()
{
    ifstream file("Groups.txt");

    if (!file.is_open())
    {
        cout << "Error occuring in opening file for reading...\n";
        return;
    }

    string groupName;
    string firstName, lastName, phoneNumber, emailAddress, House, Street, City, Country;
    int index{0};
    Vector<Contact> temp;
    if (!isEmptyFile(file))
    {
        while (!file.eof())
        {
            string line;
            getline(file, line);
            if (line[0] == '#')
            {
                string temp{line.substr(1)};
                this->addGroup(temp);
                getline(file, firstName);
                getline(file, lastName);
                getline(file, phoneNumber);
                getline(file, emailAddress);
                getline(file, House);
                getline(file, Street);
                getline(file, City);
                getline(file, Country);
                file.ignore();
                Contact source{firstName, lastName, phoneNumber, emailAddress, Address(House, Street, City, Country)};
                this->addContactToGroup(index, source);
                index++;
            }
            else
            {
                firstName = line;
                getline(file, lastName);
                getline(file, phoneNumber);
                getline(file, emailAddress);
                getline(file, House);
                getline(file, Street);
                getline(file, City);
                getline(file, Country);
                file.ignore();
                Contact source{firstName, lastName, phoneNumber, emailAddress, Address(House, Street, City, Country)};
                this->addContactToGroup(index - 1, source);
            }
        }
    }

    for (size_t i{0}; i < this->Groups.size(); ++i)
    {
        this->mergeEqualContactsInGroup(i);
        this->Groups[i].sort();
    }

    file.close();
}

// Saving groups in a file
void ContactBook::saveGroupsToFile()
{
    ofstream file("Groups.txt");

    if (!file.is_open())
    {
        cout << "Error occuring in opening file for reading...\n";
        return;
    }

    for (size_t i{0}; i < this->Group_Names.size(); ++i)
    {
        file << "#" << this->Group_Names[i] << endl;
        for (size_t j{0}; j < this->Groups[i].size(); ++j)
        {
            file << this->Groups[i][j].getFirstName() << endl;
            file << this->Groups[i][j].getLastName() << endl;
            file << this->Groups[i][j].getPhoneNumber() << endl;
            file << this->Groups[i][j].getEmail() << endl;
            file << this->Groups[i][j].getAddress().getHouseName() << endl;
            file << this->Groups[i][j].getAddress().getStreetName() << endl;
            file << this->Groups[i][j].getAddress().getCityName() << endl;
            file << this->Groups[i][j].getAddress().getCountryName() << endl;
            if (!(i == this->Group_Names.size() - 1 && j == this->Groups[i].size() - 1)) 
                file << endl;
        }
    }

    file.close();
}

// Displaying the Contact
ostream &operator<<(ostream &out, const ContactBook &source)
{
    for (size_t i{0}; i < source.All_Contacts_Stored.size(); ++i)
        out << i + 1 << "#\n"
            << source.All_Contacts_Stored[i];

    return out;
}

// Returns the stored contacts
Vector<Contact> ContactBook::Contacts()
{
    return this->All_Contacts_Stored;
}

// Display the stored contacts names
void ContactBook::displayContactsNames()
{
    for (size_t i{0}; i < this->All_Contacts_Stored.size(); ++i)
        cout << i << "# " << this->All_Contacts_Stored[i].getFirstName() + " " + this->All_Contacts_Stored[i].getLastName() << endl;
}

// Returns the single contact by index
Contact ContactBook::getContactByIndex(size_t index)
{
    return this->All_Contacts_Stored[index];
}

// Returns the searched contacts
Vector<Contact> ContactBook::SearchedContacts()
{
    return this->Searched_Contacts;
}

// Returns the count for each searched contact
Vector<int> ContactBook::SearchedContactsCount()
{
    return this->Searched_Contacts_Count;
}

// Display the names of searched contacts with their count
void ContactBook::displaySearchedContactsNames()
{
    for (size_t i{0}; i < this->Searched_Contacts.size(); ++i)
        cout << i << "# " << this->Searched_Contacts[i].getFirstName() + " " + this->Searched_Contacts[i].getLastName() << " : " << this->Searched_Contacts_Count[i] << endl;
}

// Returns the single contact from search history
Contact ContactBook::getSearchContactByIndex(size_t index)
{
    return this->Searched_Contacts[index];
}

// Returns the frequently viewed contacts array
Vector<Contact> ContactBook::FrequentlySearchedContacts()
{
    return this->Frequently_Viewed_Contacts;
}

// Display the names of frequently viewed contacts
void ContactBook::displayFrequentlyViewedContactsNames()
{
    for (size_t i{0}; i < this->Frequently_Viewed_Contacts.size(); ++i)
        cout << i << "# " << this->Frequently_Viewed_Contacts[i].getFirstName() + " " + this->Frequently_Viewed_Contacts[i].getLastName() << endl;
}

// Returns the single contact by index from frequently viewed contacts
Contact ContactBook::getFrequentlyViewedByIndex(size_t index)
{
    return this->Frequently_Viewed_Contacts[index];
}

// Returns the array of advance searched contacts
Vector<Contact> ContactBook::AdvanceSearchedContacts()
{
    return this->Advance_Searched_Contacts;
}

// Display the names of advance searched contacts
void ContactBook::displayAdvanceSearchedContactsNames()
{
    for (size_t i{0}; i < this->Advance_Searched_Contacts.size(); ++i)
        cout << i << "# " << this->Advance_Searched_Contacts[i].getFirstName() + " " + this->Advance_Searched_Contacts[i].getLastName() << endl;
}

// Return the single contact from advance search
Contact ContactBook::getAdvanceSearchedByIndex(size_t index)
{
    return this->Advance_Searched_Contacts[index];
}

// Display the groups names
void ContactBook::displayGroupNames()
{
    for (size_t i{0}; i < this->Group_Names.size(); ++i)
        cout << i << "# " << this->Group_Names[i] << endl;
}

// Display the contacts within the group names
void ContactBook::displayGroupContactsNames(size_t index)
{
    for (size_t i{0}; i < this->Groups[index].size(); ++i)
        cout << i << "# " << this->Groups[index][i].getFirstName() + " " + this->Groups[index][i].getLastName() << endl;
}

// Returns the singl contact from any group
Contact ContactBook::getGroupContactByIndex(size_t index, size_t cindex)
{
    return this->Groups[index][cindex];
}

// Checking the empty file
bool isEmptyFile(ifstream &file)
{
    return (file.peek() == ifstream::traits_type::eof());
}

// Check if the contact is already exist or not?
bool isContactExist(Vector<Contact> &contacts, const Contact &source)
{
    for (size_t i{0}; i < contacts.size(); ++i)
    {
        if (contacts[i] == source)
            return true;
    }

    return false;
}

// Modifying the search history according to the search
void modifySearchHistory(Vector<Contact> &contacts, Vector<int> &counts, Contact &source)
{
    if (!isContactExist(contacts, source))
    {
        contacts.insert(0, source);
        counts.insert(0, 1);
    }
    else
    {
        for (size_t i{0}; i < contacts.size();)
        {
            if (contacts[i] == source)
            {
                int count = counts[i];

                contacts.erase(i);
                counts.erase(i);

                contacts.insert(0, source);
                counts.insert(0, count + 1);

                break;
            }
            else
                ++i;
        }
    }
}
