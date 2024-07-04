#pragma once // To prevent multiple inclusions

#include "Contact.hpp"
#include "Vector.hpp"

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
    void deleteContact(size_t);
    // Method for editing contact in ContactBook
    void editContact(size_t, Contact &);

    // Delete the contact from search contacts
    void deleteContactFromSearch(size_t);
    // Method for editing contact from searched array
    void edidSearchContact(size_t, Contact &);

    // Delete the contact from frequently viewed contacts
    void deleteContactFromFrequently(size_t);
    // Method for editing contact from frequently viewed contacts
    void editFrequetlyViewedContact(size_t, Contact &);

    // Delete contact from advance search
    void deleteContactFromAdvanceSearch(size_t);
    // Method to edit the contact from advance searched array
    void editContactFromAdvanceSearch(size_t, Contact &);

    // Function that make advance search possible
    void advanceSearch(string &);
    // Function that returns the searched contact
    Contact search(size_t);

    // Getting total count for stored contacts in the array
    size_t totalContactsCount();
    // Getting the total count of search history
    size_t totalSearchContactsCount();
    // Getting the total count of frequently viewed contacts
    size_t totalFrequentlyViewedContactsCount();
    // Getting total count for adavanced searched contacts in the array
    size_t totalAdvanceContactCount();

    // Add group function
    void addGroup(string &);
    // Delete group function
    void deleteGroup(size_t);
    // Add contact to group
    void addContactToGroup(size_t, Contact &);
    // Remove contact from group
    void deleteContactFromGroup(size_t, size_t);
    // Getting the count of total groups
    size_t totalGroupsCount();
    // Getting the total contacts in certain group
    size_t totalContactsInGroup(size_t);
    // Merge equal contacts within certain group
    void mergeEqualContactsInGroup(size_t index);

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

    // Displaying the contact list
    friend ostream &operator<<(ostream &, const ContactBook &);

    // Returns the stored contacts
    Vector<Contact> Contacts();
    // Display the names of stored contacts
    void displayContactsNames();
    // Return single contact by index
    Contact getContactByIndex(size_t);

    // Returns the searched contacts
    Vector<Contact> SearchedContacts();

    // Returns the count for every searched contact
    Vector<int> SearchedContactsCount();

    // Display the names of searched contacts with their count
    void displaySearchedContactsNames();
    // Returns the single contact by index
    Contact getSearchContactByIndex(size_t);

    // Returns the frequently searched contacts
    Vector<Contact> FrequentlySearchedContacts();
    // Display the names of frequently viewed contacts
    void displayFrequentlyViewedContactsNames();
    // Returns the single contact by index
    Contact getFrequentlyViewedByIndex(size_t);

    // Returns the contacts as the result of advence search
    Vector<Contact> AdvanceSearchedContacts();
    // Display the names of advance searched contacts
    void displayAdvanceSearchedContactsNames();
    // Returns the single contact by index
    Contact getAdvanceSearchedByIndex(size_t);

    // Display the names of groups
    void displayGroupNames();
    // Display the contact names within the certain group
    void displayGroupContactsNames(size_t);
    // Returns the single contact by index
    Contact getGroupContactByIndex(size_t, size_t);

    // Private access specifeir,  so this can be accessed only within the class's scope
public:
    Vector<Contact> All_Contacts_Stored;
    Vector<Contact> Searched_Contacts;
    Vector<int> Searched_Contacts_Count;
    Vector<Contact> Frequently_Viewed_Contacts;
    Vector<string> Contacs_In_String;
    Vector<Contact> Advance_Searched_Contacts;
    Vector<string> Group_Names;
    Vector<Vector<Contact>> Groups;
};

// To check if the file is empty
bool isEmptyFile(ifstream &);

// To check of the contact is already exist in the array
bool isContactExist(Vector<Contact> &, const Contact &);

// To modify the search history according to the search
void modifySearchHistory(Vector<Contact> &, Vector<int> &, Contact &);