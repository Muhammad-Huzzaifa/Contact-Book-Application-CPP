#include "contactbook.h"

// Constructor
ContactBook::ContactBook()
{
    this->loadFromFile();
    this->mergeEqualContacts();
    this->sortByFirstName();
    this->saveToFile();
    this->loadForSearchHistory();
    this->saveForFrequentlyViewedContacts();
    this->loadGroupsFromFile();
}

// Destructor
ContactBook::~ContactBook() {}

// Merge Duplicates
void ContactBook::mergeEqualContacts()
{
    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        for (quint32 j{0}; j < i; ++j)
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
    for (quint32 i{0}; i < this->All_Contacts_Stored.size() - 1; ++i)
    {
        for (quint32 j{0}; j < this->All_Contacts_Stored.size() - i - 1; ++j)
        {
            if (this->All_Contacts_Stored[j] > this->All_Contacts_Stored[j + 1])
            {
                Contact temp(this->All_Contacts_Stored[j]);
                this->All_Contacts_Stored[j] = this->All_Contacts_Stored[j + 1];
                this->All_Contacts_Stored[j + 1] = temp;
                QString _temp(this->Contacs_In_String[j]);
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
void ContactBook::deleteContact(quint32 index)
{
    for (quint32 i{0}; i < this->Searched_Contacts.size(); ++i)
    {
        if (this->Searched_Contacts[i] == this->All_Contacts_Stored[index])
        {
            this->Searched_Contacts.erase(i);
            this->Searched_Contacts_Count.erase(i);
            break;
        }
    }

    for (quint32 i{0}; i < this->Group_Names.size(); ++i)
    {
        for (quint32 j{0}; j < this->Groups[i].size(); ++j)
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
    this->saveGroupsToFile();
}

// Edit Contact
void ContactBook::editContact(quint32 index, Contact &source)
{
    for (quint32 i{0}; i < this->Searched_Contacts.size(); ++i)
    {
        if (this->Searched_Contacts[i] == this->All_Contacts_Stored[index])
        {
            this->Searched_Contacts[i] = source;
            break;
        }
    }

    for (quint32 i{0}; i < this->Frequently_Viewed_Contacts.size(); ++i)
    {
        if (this->Frequently_Viewed_Contacts[i] == this->All_Contacts_Stored[index])
        {
            this->Frequently_Viewed_Contacts[i] = source;
            break;
        }
    }

    for (quint32 i{0}; i < this->Group_Names.size(); ++i)
    {
        for (quint32 j{0}; j < this->Groups[i].size(); ++j)
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
    this->saveGroupsToFile();
}

// Delete contact from searched contacts
void ContactBook::deleteContactFromSearch(quint32 index)
{
    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Searched_Contacts[index])
        {
            this->deleteContact(i);
            break;
        }
    }
}

// Edit contact from search history
void ContactBook::edidSearchContact(quint32 index, Contact &source)
{
    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Searched_Contacts[index])
        {
            this->editContact(i, source);
            break;
        }
    }
}

// Delete contact from frequently viewed contacts
void ContactBook::deleteContactFromFrequently(quint32 index)
{
    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Frequently_Viewed_Contacts[index])
        {
            this->deleteContact(i);
            break;
        }
    }
}

// Edit contact from frequently viewed contacts
void ContactBook::editFrequetlyViewedContact(quint32 index, Contact &source)
{
    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Frequently_Viewed_Contacts[index])
        {
            this->editContact(i, source);
            break;
        }
    }
}

// Delete contact from advance search
void ContactBook::deleteContactFromAdvanceSearch(quint32 index)
{
    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Advance_Searched_Contacts[index])
        {
            this->deleteContact(i);
            break;
        }
    }
}

// Edit contact from advance search
void ContactBook::editContactFromAdvanceSearch(quint32 index, Contact &source)
{
    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->All_Contacts_Stored[i] == this->Advance_Searched_Contacts[index])
        {
            this->editContact(i, source);
            break;
        }
    }
}

// Functions that make advance search
void ContactBook::advanceSearch(QString &source)
{
    Vector<Contact> temp;
    for (quint32 i = 0; i < this->All_Contacts_Stored.size(); ++i)
    {
        if (this->Contacs_In_String[i].indexOf(source) != -1)
            temp.push_back(this->All_Contacts_Stored[i]);
    }

    this->Advance_Searched_Contacts = temp;
}

// Returns the searched contact from advance search array
Contact ContactBook::search(quint32 index)
{
    modifySearchHistory(this->Searched_Contacts, this->Searched_Contacts_Count, this->Advance_Searched_Contacts[index]);

    this->saveForSearchHistory();
    this->saveForFrequentlyViewedContacts();

    return this->Advance_Searched_Contacts[index];
}

// Getting total count for stored contacts
quint32 ContactBook::totalContactsCount()
{
    return this->All_Contacts_Stored.size();
}

// Getting the count for searched contacts
quint32 ContactBook::totalSearchContactsCount()
{
    return this->Searched_Contacts.size();
}

// Getting the frequently viewed contacts count
quint32 ContactBook::totalFrequentlyViewedContactsCount()
{
    return this->Frequently_Viewed_Contacts.size();
}

// Getting total count for advanced searched contacts
quint32 ContactBook::totalAdvanceContactCount()
{
    return this->Advance_Searched_Contacts.size();
}

// Function that creates a group
void ContactBook::addGroup(QString &name)
{
    this->Group_Names.push_back(name);
    Vector<Contact> group;
    this->Groups.push_back(group);
    this->saveGroupsToFile();
}

// Delete group function
void ContactBook::deleteGroup(quint32 index)
{
    this->Group_Names.erase(index);
    this->Groups.erase(index);
    this->saveGroupsToFile();
}

// Add contact to group function
void ContactBook::addContactToGroup(quint32 index, quint32 cindex)
{
    this->Groups[index].push_back(this->All_Contacts_Stored[cindex]);
    this->mergeEqualContactsInGroup(index);
    this->Groups[index].sort();
    this->saveGroupsToFile();
}

// Delete contact from group function
void ContactBook::deleteContactFromGroup(quint32 index, quint32 cindex)
{
    this->Groups[index].erase(cindex);
    this->saveGroupsToFile();
}

// Getting the total number of groups
quint32 ContactBook::totalGroupsCount()
{
    return this->Group_Names.size();
}

// Getting the total contacts in a group
quint32 ContactBook::totalContactsInGroup(quint32 index)
{
    return this->Groups[index].size();
}

// Merge equal contacts in certain group
void ContactBook::mergeEqualContactsInGroup(quint32 index)
{
    for (quint32 i{0}; i < this->Groups[index].size(); ++i)
    {
        for (quint32 j{0}; j < i; ++j)
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
    QFile file("Contacts.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Error occurs in opening the Contacts.txt for reading";
        return;
    }
    QTextStream in(&file);

    QString firstName, lastName, phoneNumber, emailAddress, House, Street, City, Country;
    while (!in.atEnd())
    {
        firstName = in.readLine();
        lastName = in.readLine();
        phoneNumber = in.readLine();
        emailAddress = in.readLine();
        House = in.readLine();
        Street = in.readLine();
        City = in.readLine();
        Country = in.readLine();
        in.readLine();
        if (firstName != "" && lastName != "" && phoneNumber != "" && emailAddress != "" && House != "" && Street != "" && City != "" && Country != "")
        {
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
    QFile file("Contacts.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Error occurs in opening the Contacts.txt for writing";
        return;
    }
    QTextStream out(&file);

    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
    {
        out << this->All_Contacts_Stored[i].getFirstName() << "\n";
        out << this->All_Contacts_Stored[i].getLastName() << "\n";
        out << this->All_Contacts_Stored[i].getPhoneNumber() << "\n";
        out << this->All_Contacts_Stored[i].getEmail() << "\n";
        out << this->All_Contacts_Stored[i].getAddress().getHouseName() << "\n";
        out << this->All_Contacts_Stored[i].getAddress().getStreetName() << "\n";
        out << this->All_Contacts_Stored[i].getAddress().getCityName() << "\n";
        out << this->All_Contacts_Stored[i].getAddress().getCountryName() << "\n";
        if (i < this->All_Contacts_Stored.size() - 1)
            out << "\n";
    }

    file.close();
}


// Load from file for search history
void ContactBook::loadForSearchHistory()
{
    QFile file("SearchHistory.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Error occurs in opening the SearchHistory.txt for reading";
        return;
    }
    QTextStream in(&file);

    quint32 count;
    QString firstName, lastName, phoneNumber, emailAddress, House, Street, City, Country;
    while (!in.atEnd())
    {
        in >> count;
        this->Searched_Contacts_Count.push_back(count);
        in.readLine();
        firstName = in.readLine();
        lastName = in.readLine();
        phoneNumber = in.readLine();
        emailAddress = in.readLine();
        House = in.readLine();
        Street = in.readLine();
        City = in.readLine();
        Country = in.readLine();
        in.readLine();
        if (firstName != "" && lastName != "" && phoneNumber != "" && emailAddress != "" && House != "" && Street != "" && City != "" && Country != "")
        {
            Contact source{firstName, lastName, phoneNumber, emailAddress, Address(House, Street, City, Country)};
            this->Searched_Contacts.push_back(source);
        }
    }

    file.close();
}

// Saving content to search history file
void ContactBook::saveForSearchHistory()
{
    QFile file("SearchHistory.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Error occurs in opening the SearchHistory.txt for writing";
        return;
    }
    QTextStream out(&file);

    for (quint32 i{0}; i < this->Searched_Contacts.size(); ++i)
    {
        out << QString::number(this->Searched_Contacts_Count[i]) << "\n";
        out << this->Searched_Contacts[i].getFirstName() << "\n";
        out << this->Searched_Contacts[i].getLastName() << "\n";
        out << this->Searched_Contacts[i].getPhoneNumber() << "\n";
        out << this->Searched_Contacts[i].getEmail() << "\n";
        out << this->Searched_Contacts[i].getAddress().getHouseName() << "\n";
        out << this->Searched_Contacts[i].getAddress().getStreetName() << "\n";
        out << this->Searched_Contacts[i].getAddress().getCityName() << "\n";
        out << this->Searched_Contacts[i].getAddress().getCountryName() << "\n";
        if (i < this->Searched_Contacts.size() - 1)
            out << "\n";
    }

    file.close();
}

// Dealing with frequently viewed contacts
void ContactBook::saveForFrequentlyViewedContacts()
{
    Vector<Contact> temp;

    quint32 first{0}, second{0}, third{0};

    if (this->Searched_Contacts.size() < 3)
    {
        for (quint32 i{0}; i < this->Searched_Contacts.size(); ++i)
            temp.push_back(this->Searched_Contacts[i]);
    }

    else
    {
        for (quint32 i{0}; i < this->Searched_Contacts_Count.size(); ++i)
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

        for (quint32 i{0}; i < this->Searched_Contacts.size(); ++i)
        {
            if (this->Searched_Contacts_Count[i] == first || this->Searched_Contacts_Count[i] == second || this->Searched_Contacts_Count[i] == third)
                temp.push_back(this->Searched_Contacts[i]);
        }
    }

    this->Frequently_Viewed_Contacts = temp;

    QFile file("FrequentlyViewdContacts.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Error occurs in opening the FrequentlyViewdContacts.txt for writing";
        return;
    }
    QTextStream out(&file);

    for (quint32 i{0}; i < this->Frequently_Viewed_Contacts.size(); ++i)
    {
        out << this->Frequently_Viewed_Contacts[i].getFirstName() << "\n";
        out << this->Frequently_Viewed_Contacts[i].getLastName() << "\n";
        out << this->Frequently_Viewed_Contacts[i].getPhoneNumber() << "\n";
        out << this->Frequently_Viewed_Contacts[i].getEmail() << "\n";
        out << this->Frequently_Viewed_Contacts[i].getAddress().getHouseName() << "\n";
        out << this->Frequently_Viewed_Contacts[i].getAddress().getStreetName() << "\n";
        out << this->Frequently_Viewed_Contacts[i].getAddress().getCityName() << "\n";
        out << this->Frequently_Viewed_Contacts[i].getAddress().getCountryName() << "\n";
        if (i < this->Frequently_Viewed_Contacts.size() - 1)
            out << "\n";
    }

    file.close();
}

// Loading groups data from file
void ContactBook::loadGroupsFromFile()
{
    QFile file("Groups.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << "Error occurs in opening the Groups.txt for reading";
        return;
    }
    QTextStream in(&file);

    QString firstName, lastName, phoneNumber, emailAddress, House, Street, City, Country;
    quint32 index{0};
    Vector<Contact> temp;

    while (!in.atEnd())
    {
        QString line;
        line = in.readLine();
        if (line[0] == '#')
        {
            QString temp = line.mid(1);
            this->Group_Names.push_back(temp);
            Vector<Contact> group;
            this->Groups.push_back(group);
            firstName = in.readLine();
            lastName = in.readLine();
            phoneNumber = in.readLine();
            emailAddress = in.readLine();
            House = in.readLine();
            Street = in.readLine();
            City = in.readLine();
            Country = in.readLine();
            in.readLine();
            if (firstName != "" && lastName != "" && phoneNumber != "" && emailAddress != "" && House != "" && Street != "" && City != "" && Country != "")
            {
                Contact source{firstName, lastName, phoneNumber, emailAddress, Address(House, Street, City, Country)};
                this->Groups[index].push_back(source);
                this->mergeEqualContactsInGroup(index);
                this->Groups[index].sort();
            }
            index++;
        }
        else
        {
            firstName = line;
            lastName = in.readLine();
            phoneNumber = in.readLine();
            emailAddress = in.readLine();
            House = in.readLine();
            Street = in.readLine();
            City = in.readLine();
            Country = in.readLine();
            in.readLine();
            if (firstName != "" && lastName != "" && phoneNumber != "" && emailAddress != "" && House != "" && Street != "" && City != "" && Country != "")
            {
                Contact source{firstName, lastName, phoneNumber, emailAddress, Address(House, Street, City, Country)};
                this->Groups[index - 1].push_back(source);
                this->mergeEqualContactsInGroup(index - 1);
                this->Groups[index - 1].sort();
            }
        }
    }

    for (quint32 i{0}; i < this->Groups.size(); ++i)
    {
        this->mergeEqualContactsInGroup(i);
        this->Groups[i].sort();
    }

    file.close();
}

// Saving groups in a file
void ContactBook::saveGroupsToFile()
{
    QFile file("Groups.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Error occurs in opening the Groups.txt for writing";
        return;
    }
    QTextStream out(&file);

    for (quint32 i{0}; i < this->Group_Names.size(); ++i)
    {
        out << "#" << this->Group_Names[i] << "\n";
        for (quint32 j{0}; j < this->Groups[i].size(); ++j)
        {
            out << this->Groups[i][j].getFirstName() << "\n";
            out << this->Groups[i][j].getLastName() << "\n";
            out << this->Groups[i][j].getPhoneNumber() << "\n";
            out << this->Groups[i][j].getEmail() << "\n";
            out << this->Groups[i][j].getAddress().getHouseName() << "\n";
            out << this->Groups[i][j].getAddress().getStreetName() << "\n";
            out << this->Groups[i][j].getAddress().getCityName() << "\n";
            out << this->Groups[i][j].getAddress().getCountryName() << "\n";
            if (!(i == this->Group_Names.size() - 1 && j == this->Groups[i].size() - 1))
                out << "\n";
        }
    }

    file.close();
}

// Display the stored contacts names
Vector<QString> ContactBook::displayContactsNames()
{
    Vector<QString> names;
    for (quint32 i{0}; i < this->All_Contacts_Stored.size(); ++i)
        names.push_back(this->All_Contacts_Stored[i].getFirstName() + " " + this->All_Contacts_Stored[i].getLastName());
    return names;
}

// Returns the single contact by index
Contact ContactBook::getContactByIndex(quint32 index)
{
    return this->All_Contacts_Stored[index];
}

// Display the names of searched contacts with their count
Vector<QString> ContactBook::displaySearchedContactsNames()
{
    Vector<QString> names;
    for (quint32 i{0}; i < this->Searched_Contacts.size(); ++i)
        names.push_back(this->Searched_Contacts[i].getFirstName() + " " + this->Searched_Contacts[i].getLastName() + " (" + QString::number(this->Searched_Contacts_Count[i]) + ")");
    return names;
}

// Returns the single contact from search history
Contact ContactBook::getSearchContactByIndex(quint32 index)
{
    return this->Searched_Contacts[index];
}

// Display the names of frequently viewed contacts
Vector<QString> ContactBook::displayFrequentlyViewedContactsNames()
{
    Vector<QString> names;
    for (quint32 i{0}; i < this->Frequently_Viewed_Contacts.size(); ++i)
        names.push_back(this->Frequently_Viewed_Contacts[i].getFirstName() + " " + this->Frequently_Viewed_Contacts[i].getLastName());
    return names;
}

// Returns the single contact by index from frequently viewed contacts
Contact ContactBook::getFrequentlyViewedByIndex(quint32 index)
{
    return this->Frequently_Viewed_Contacts[index];
}

// Display the names of advance searched contacts
Vector<QString> ContactBook::displayAdvanceSearchedContactsNames()
{
    Vector<QString> names;
    for (quint32 i{0}; i < this->Advance_Searched_Contacts.size(); ++i)
        names.push_back(this->Advance_Searched_Contacts[i].getFirstName() + " " + this->Advance_Searched_Contacts[i].getLastName());
    return names;
}

// Return the single contact from advance search
Contact ContactBook::getAdvanceSearchedByIndex(quint32 index)
{
    return this->Advance_Searched_Contacts[index];
}

// Display the groups names
Vector<QString> ContactBook::displayGroupNames()
{
    return this->Group_Names;
}

// Display the contacts within the group names
Vector<QString> ContactBook::displayGroupContactsNames(quint32 index)
{
    Vector<QString> names;
    for (quint32 i{0}; i < this->Groups[index].size(); ++i)
        names.push_back(this->Groups[index][i].getFirstName() + " " + this->Groups[index][i].getLastName());
    return names;
}

// Returns the singl contact from any group
Contact ContactBook::getGroupContactByIndex(quint32 index, quint32 cindex)
{
    return this->Groups[index][cindex];
}

// Check if the contact is already exist or not?
bool isContactExist(Vector<Contact> &contacts, const Contact &source)
{
    for (quint32 i{0}; i < contacts.size(); ++i)
    {
        if (contacts[i] == source)
            return true;
    }

    return false;
}

// Modifying the search history according to the search
void modifySearchHistory(Vector<Contact> &contacts, Vector<quint32> &counts, Contact &source)
{
    if (!isContactExist(contacts, source))
    {
        contacts.insert(0, source);
        counts.insert(0, 1);
    }
    else
    {
        for (quint32 i{0}; i < contacts.size();)
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
