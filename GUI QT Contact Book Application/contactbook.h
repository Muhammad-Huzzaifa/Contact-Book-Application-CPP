#ifndef CONTACTSBOOK_H
#define CONTACTSBOOK_H

#include "contact.h"
#include "Vector.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

// ContactBook class to operate with all contacts
class ContactBook
{
    // Public access specifeir, so this can be accessed from outside of the class
public:
    // Default Constructor
    ContactBook();

    // Destructor
    ~ContactBook();

    // Merging equal contacts
    void mergeEqualContacts();

    // Sorting contacts by first names
    void sortByFirstName();

    // Method for adding contact to ContactBook
    void addContact(Contact &);

    // Method for deleting contact from ContactBook
    void deleteContact(quint32);
    // Method for editing contact in ContactBook
    void editContact(quint32, Contact &);

    // Delete the contact from search contacts
    void deleteContactFromSearch(quint32);
    // Method for editing contact from searched array
    void edidSearchContact(quint32, Contact &);

    // Delete the contact from frequently viewed contacts
    void deleteContactFromFrequently(quint32);
    // Method for editing contact from frequently viewed contacts
    void editFrequetlyViewedContact(quint32, Contact &);

    // Delete contact from advance search
    void deleteContactFromAdvanceSearch(quint32);
    // Method to edit the contact from advance searched array
    void editContactFromAdvanceSearch(quint32, Contact &);

    // Function that make advance search possible
    void advanceSearch(QString &);
    // Function that returns the searched contact
    Contact search(quint32);

    // Getting total count for stored contacts in the array
    quint32 totalContactsCount();
    // Getting the total count of search history
    quint32 totalSearchContactsCount();
    // Getting the total count of frequently viewed contacts
    quint32 totalFrequentlyViewedContactsCount();
    // Getting total count for adavanced searched contacts in the array
    quint32 totalAdvanceContactCount();

    // Add group function
    void addGroup(QString &);
    // Delete group function
    void deleteGroup(quint32);
    // Add contact to group
    void addContactToGroup(quint32, quint32);
    // Remove contact from group
    void deleteContactFromGroup(quint32, quint32);
    // Getting the count of total groups
    quint32 totalGroupsCount();
    // Getting the total contacts in certain group
    quint32 totalContactsInGroup(quint32);
    // Merge equal contacts within certain group
    void mergeEqualContactsInGroup(quint32);

    // Load from file
    void loadFromFile();
    // Save to file
    void saveToFile();

    // Load the searched contacts from file
    void loadForSearchHistory();
    // Save the searched contacts in file
    void saveForSearchHistory();

    // Handelling frequently viewed contacts
    void saveForFrequentlyViewedContacts();

    // Load the groups data from file
    void loadGroupsFromFile();
    // Save groups to file
    void saveGroupsToFile();

    // Display the names of stored contacts
    Vector<QString> displayContactsNames();
    // Return single contact by index
    Contact getContactByIndex(quint32);

    // Display the names of searched contacts with their count
    Vector<QString> displaySearchedContactsNames();
    // Returns the single contact by index
    Contact getSearchContactByIndex(quint32);

    // Display the names of frequently viewed contacts
    Vector<QString> displayFrequentlyViewedContactsNames();
    // Returns the single contact by index
    Contact getFrequentlyViewedByIndex(quint32);

    // Display the names of advance searched contacts
    Vector<QString> displayAdvanceSearchedContactsNames();
    // Returns the single contact by index
    Contact getAdvanceSearchedByIndex(quint32);

    // Display group names
    Vector<QString> displayGroupNames();
    // Display the contact names within the certain group
    Vector<QString> displayGroupContactsNames(quint32);
    // Returns the single contact by index
    Contact getGroupContactByIndex(quint32, quint32);

    // Private access specifeir,  so this can be accessed only within the class's scope
public:
    Vector<Contact> All_Contacts_Stored;
    Vector<Contact> Searched_Contacts;
    Vector<quint32> Searched_Contacts_Count;
    Vector<Contact> Frequently_Viewed_Contacts;
    Vector<QString> Contacs_In_String;
    Vector<Contact> Advance_Searched_Contacts;
    Vector<QString> Group_Names;
    Vector<Vector<Contact>> Groups;
};

// To check of the contact is already exist in the array
bool isContactExist(Vector<Contact> &, const Contact &);

// To modify the search history according to the search
void modifySearchHistory(Vector<Contact> &, Vector<quint32> &, Contact &);

#endif // CONTACTSBOOK_H
