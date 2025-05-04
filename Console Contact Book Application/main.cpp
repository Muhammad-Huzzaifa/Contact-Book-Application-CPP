#include "ContactBook.hpp"
#include <Windows.h>
#include <iostream>
#include <limits>

using namespace std;

// Display the home page
void Home(ContactBook &book)
{
	cout << "<---CONTACT BOOK APPLICATION--->\n";
	if (book.totalContactsCount() > 0)
	{
		cout << "Total contacts = " << book.totalContactsCount() << endl;
		cout << "--------------------------------\n";
		book.displayContactsNames();
		cout << "--------------------------------\n";
		cout << book.totalContactsCount() << "# ADD CONTACT\n";
		cout << book.totalContactsCount() + 1 << "# SEARCH CONTACT\n";
		cout << book.totalContactsCount() + 2 << "# VIEWE SEARCH HISTORY\n";
		cout << book.totalContactsCount() + 3 << "# FREQUENTLY VIEWED CONTACTS\n";
		cout << book.totalContactsCount() + 4 << "# GROUPS\n";
		cout << book.totalContactsCount() + 5 << "# EXIT\n";
		cout << "--------------------------------\n";
		cout << "ENTER YOUR CHOICE: ";
	}
	else
	{
		cout << "No contact saved yet.\n";
		cout << "--------------------------------\n";
		cout << book.totalContactsCount() << "# ADD CONTACT\n";
		cout << book.totalContactsCount() + 1 << "# SEARCH CONTACT\n";
		cout << book.totalContactsCount() + 2 << "# VIEWE SEARCH HISTORY\n";
		cout << book.totalContactsCount() + 3 << "# FREQUENTLY VIEWED CONTACTS\n";
		cout << book.totalContactsCount() + 4 << "# GROUPS\n";
		cout << book.totalContactsCount() + 5 << "# EXIT\n";
		cout << "--------------------------------\n";
		cout << "ENTER YOUR CHOICE: ";
	}
}

// Contact details page
void Detail(size_t index, ContactBook &book)
{
	cout << "<---DETAILS OF CONTACT--->\n";
	Contact temp{book.getContactByIndex(index)};
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# EDIT CONTACT\n";
	cout << "2# DELETE CONTACT\n";
	cout << "3# BACK\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";
}

// Edit page from detail page
void EditFromDetail(size_t index, ContactBook &book)
{
	cout << "<---ENTER THE UPDATED INFORMATION--->\n";
	Contact temp;
	cin.ignore();
	cin >> temp;
	cout << "--------------------------------\n";
	cout << "<---UPDATED CONTACT--->\n";
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# SAVE\n";
	cout << "2# CANCEL\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";

	int choice;
	cin >> choice;

	if (choice == 1)
	{
		book.editContact(index, temp);
		cout << "--------------------------------\n";
		cout << "CONTACT UPDATED SUCCESSFULLY\n";
		cout << "--------------------------------\n";
		Sleep(1000);
	}
	else
		return;
}

// Add contact page
void Add(ContactBook &book)
{
	cout << "<---ADD CONTACT--->\n";
	Contact temp;
	cin.ignore();
	cin >> temp;
	cout << "--------------------------------\n";
	cout << "1# SAVE\n";
	cout << "2# CANCEL\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";

	int choice;
	cin >> choice;

	if (choice == 1)
	{
		book.addContact(temp);
		cout << "--------------------------------\n";
		cout << "CONTACT ADDDED SUCCESSFULLY\n";
		cout << "--------------------------------\n";
		Sleep(1000);
	}

	else
		return;
}

// Search contact page
void Search(ContactBook &book)
{
	cout << "<---SEARCH CONTACT BY NAME OR PHONE NUMBER--->\n";
	string search;
	cout << "ENTER SEARCH KEYWORD: ";
	cin.ignore();
	getline(cin, search);
	book.advanceSearch(search);
	cout << "--------------------------------\n";
	if (book.totalAdvanceContactCount() > 0)
	{
		cout << "Contacts found = " << book.totalAdvanceContactCount() << endl;
		cout << "--------------------------------\n";
		book.displayAdvanceSearchedContactsNames();
		cout << "--------------------------------\n";
		cout << book.totalAdvanceContactCount() << "# BACK\n";
		cout << "--------------------------------\n";
		cout << "ENTER YOUR CHOICE: ";
	}
	else
	{
		cout << "No any contact found\n";
		cout << book.totalAdvanceContactCount() << "# BACK\n";
		cout << "--------------------------------\n";
		cout << "ENTER YOUR CHOICE: ";
		return;
	}
}

// Detail of advance search contact
void DetailFromSearch(size_t index, ContactBook &book)
{
	book.search(index);
	cout << "<---DETAILS OF CONTACT--->\n";
	Contact temp{book.getAdvanceSearchedByIndex(index)};
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# EDIT CONTACT\n";
	cout << "2# DELETE CONTACT\n";
	cout << "3# BACK\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";
}

// Edit from detail from search
void EditFromDetailFromSearch(size_t index, ContactBook &book)
{
	cout << "<---ENTER THE UPDATED INFORMATION--->\n";
	Contact temp;
	cin.ignore();
	cin >> temp;
	cout << "--------------------------------\n";
	cout << "<---UPDATED CONTACT--->\n";
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# SAVE\n";
	cout << "2# CANCEL\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";

	int choice;
	cin >> choice;

	if (choice == 1)
	{
		book.editContactFromAdvanceSearch(index, temp);
		cout << "--------------------------------\n";
		cout << "CONTACT UPDATED SUCCESSFULLY\n";
		cout << "--------------------------------\n";
		Sleep(1000);
	}
	else
		return;
}

// Search history page
void SearchHistory(ContactBook &book)
{
	cout << "<---SEARCH HISTORY--->\n";
	if (book.totalSearchContactsCount() > 0)
	{
		cout << "Searched contacts = " << book.totalSearchContactsCount() << endl;
		cout << "--------------------------------\n";
		book.displaySearchedContactsNames();
		cout << "--------------------------------\n";
		cout << book.totalSearchContactsCount() << "# BACK\n";
		cout << "--------------------------------\n";
		cout << "ENTER YOUR CHOICE: ";
	}
	else
	{
		cout << "No any contact searched\n";
		cout << book.totalSearchContactsCount() << "# BACK\n";
		cout << "--------------------------------\n";
		cout << "ENTER YOUR CHOICE: ";
		return;
	}
}

// Detail from search history
void DetailFromSearchHistory(size_t index, ContactBook &book)
{
	cout << "<---DETAILS OF CONTACT--->\n";
	Contact temp{book.getSearchContactByIndex(index)};
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# EDIT CONTACT\n";
	cout << "2# DELETE CONTACT\n";
	cout << "3# BACK\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";
}

// Edit from detail from search history
void EditFromDetailFromSearchHistory(size_t index, ContactBook &book)
{
	cout << "<---ENTER THE UPDATED INFORMATION--->\n";
	Contact temp;
	cin.ignore();
	cin >> temp;
	cout << "--------------------------------\n";
	cout << "<---UPDATED CONTACT--->\n";
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# SAVE\n";
	cout << "2# CANCEL\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";

	int choice;
	cin >> choice;

	if (choice == 1)
	{
		book.edidSearchContact(index, temp);
		cout << "--------------------------------\n";
		cout << "CONTACT UPDATED SUCCESSFULLY\n";
		cout << "--------------------------------\n";
		Sleep(1000);
	}
	else
		return;
}

// Frequently viewed contacts page
void FrequentlyViewedContacts(ContactBook &book)
{
	cout << "<---SEARCH HISTORY--->\n";
	if (book.totalFrequentlyViewedContactsCount() > 0)
	{
		cout << "Searched contacts = " << book.totalFrequentlyViewedContactsCount() << endl;
		cout << "--------------------------------\n";
		book.displayFrequentlyViewedContactsNames();
		cout << "--------------------------------\n";
		cout << book.totalFrequentlyViewedContactsCount() << "# BACK\n";
		cout << "--------------------------------\n";
		cout << "ENTER YOUR CHOICE: ";
	}
	else
	{
		cout << "No any frequently viewed contact\n";
		cout << book.totalFrequentlyViewedContactsCount() << "# BACK\n";
		cout << "--------------------------------\n";
		cout << "ENTER YOUR CHOICE: ";
		return;
	}
}

// Detail from frequently viewed contacs
void DetailFromFrequentlyViewedContacts(size_t index, ContactBook &book)
{
	cout << "<---DETAILS OF CONTACT--->\n";
	Contact temp{book.getFrequentlyViewedByIndex(index)};
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# EDIT CONTACT\n";
	cout << "2# DELETE CONTACT\n";
	cout << "3# BACK\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";
}

// Edit from detail from frequently viewed contacts
void EditFromDetailFromFrequentlyViewedContacts(size_t index, ContactBook &book)
{
	cout << "<---ENTER THE UPDATED INFORMATION--->\n";
	Contact temp;
	cin.ignore();
	cin >> temp;
	cout << "--------------------------------\n";
	cout << "<---UPDATED CONTACT--->\n";
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# SAVE\n";
	cout << "2# CANCEL\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";

	int choice;
	cin >> choice;

	if (choice == 1)
	{
		book.editFrequetlyViewedContact(index, temp);
		cout << "--------------------------------\n";
		cout << "CONTACT UPDATED SUCCESSFULLY\n";
		cout << "--------------------------------\n";
		Sleep(1000);
	}
	else
		return;
}

// Display the groups page
void Groups(ContactBook &book)
{
	cout << "<---GROUPS--->\n";
	if (book.totalGroupsCount() > 0)
	{
		cout << "Total Groups = " << book.totalGroupsCount() << endl;
		cout << "--------------------------------\n";
		book.displayGroupNames();
		cout << "--------------------------------\n";
	}
	else
		cout << "No Groups Found\n";
	cout << book.totalGroupsCount() << "# ADD GROUP\n";
	cout << book.totalGroupsCount() + 1 << "# BACK\n";
	cout << "--------------------------------\n";
	cout << "ENTER YOUR CHOICE: ";
}

// Contacts within certain group window
void ContactInGroup(size_t index, ContactBook &book)
{
	cout << "<---GROUP DETAILS--->\n";
	if (book.totalContactsInGroup(index) > 0)
	{
		cout << "Total Contacts In This Group = " << book.totalContactsInGroup(index) << endl;
		cout << "--------------------------------\n";
		book.displayGroupContactsNames(index);
		cout << "--------------------------------\n";
	}
	else
		cout << "There is no any contact in this group\n";
	cout << book.totalContactsInGroup(index) << "# ADD CONTACT IN THIS GROUP\n";
	cout << book.totalContactsInGroup(index) + 1 << "# DELETE THIS GROUP\n";
	cout << book.totalContactsInGroup(index) + 2 << "# BACK\n";
	cout << "ENTER YOUR CHOICE: ";
}

// Add contact in the opened group function
void AddContactInGroup(size_t index, ContactBook &book)
{
	cout << "<---SELECT CONTACT YOU WANT TO ADD?--->\n";
	book.displayContactsNames();
	cout << "--------------------------------\n";
	cout << book.totalContactsCount() << "# BACK\n";
	cout << "ENTER YOUR CHOICE: ";

	int choice;
	cin >> choice;

	if (choice >= 0 && choice < book.totalContactsCount())
	{
		Contact temp{book.getContactByIndex(choice)};
		book.addContactToGroup(index, temp);
		cout << "--------------------------------\n";
		cout << "CONTACT IS ADDED SUCCESSFULLY IN THIS GROUP\n";
		cout << "--------------------------------\n";
		Sleep(1000);
	}

	else
		return;
}

// Detail from from Contact in group
void DetailFromContactInGroup(size_t index, size_t cindex, ContactBook &book)
{
	cout << "<---CONTACT DETAILS--->\n";
	Contact temp{book.getGroupContactByIndex(index, cindex)};
	cout << endl
		 << temp;
	cout << "--------------------------------\n";
	cout << "1# REMOVE CONTACT FROM THIS GROUP\n";
	cout << "2# BACK\n";
	cout << "ENTER YOUR CHOICE: ";
}

int main()
{
	ContactBook book;
	bool exit{false};

	while (!exit)
	{
		system("cls");
		Home(book);

		int choice1;
		cin >> choice1;

		if (choice1 >= 0 && choice1 < book.totalContactsCount())
		{
			system("cls");
			Detail(choice1, book);

			int choice2;
			cin >> choice2;

			if (choice2 == 1)
			{
				system("cls");
				EditFromDetail(choice1, book);
			}

			else if (choice2 == 2)
			{
				book.deleteContact(choice1);
				cout << "--------------------------------\n";
				cout << "CONTACT DELETED SUCCESSFULLY\n";
				cout << "--------------------------------\n";
				Sleep(1000);
			}
		}

		else if (choice1 == book.totalContactsCount())
		{
			system("cls");
			Add(book);
		}

		else if (choice1 == book.totalContactsCount() + 1)
		{
			system("cls");
			Search(book);

			int choice2;
			cin >> choice2;

			if (book.totalAdvanceContactCount() > 0)
			{
				if (choice2 >= 0 && choice2 < book.totalAdvanceContactCount())
				{
					system("cls");
					DetailFromSearch(choice2, book);

					int choice3;
					cin >> choice3;

					if (choice3 == 1)
					{
						system("cls");
						EditFromDetailFromSearch(choice2, book);
					}

					else if (choice3 == 2)
					{
						book.deleteContactFromAdvanceSearch(choice2);
						cout << "--------------------------------\n";
						cout << "CONTACT DELETED SUCCESSFULLY\n";
						cout << "--------------------------------\n";
						Sleep(1000);
					}
				}
			}
		}

		else if (choice1 == book.totalContactsCount() + 2)
		{
			system("cls");
			SearchHistory(book);

			int choice2;
			cin >> choice2;

			if (book.totalSearchContactsCount() > 0)
			{
				if (choice2 >= 0 && choice2 < book.totalSearchContactsCount())
				{
					system("cls");
					DetailFromSearchHistory(choice2, book);

					int choice3;
					cin >> choice3;

					if (choice3 == 1)
					{
						system("cls");
						EditFromDetailFromSearchHistory(choice2, book);
					}

					else if (choice3 == 2)
					{
						book.deleteContactFromSearch(choice2);
						cout << "--------------------------------\n";
						cout << "CONTACT DELETED SUCCESSFULLY\n";
						cout << "--------------------------------\n";
						Sleep(1000);
					}
				}
			}
		}

		else if (choice1 == book.totalContactsCount() + 3)
		{
			system("cls");
			FrequentlyViewedContacts(book);

			int choice2;
			cin >> choice2;

			if (book.totalFrequentlyViewedContactsCount() > 0)
			{
				if (choice2 >= 0 && choice2 < book.totalFrequentlyViewedContactsCount())
				{
					system("cls");
					DetailFromFrequentlyViewedContacts(choice2, book);

					int choice3;
					cin >> choice3;

					if (choice3 == 1)
					{
						system("cls");
						EditFromDetailFromFrequentlyViewedContacts(choice2, book);
					}

					else if (choice3 == 2)
					{
						book.deleteContactFromFrequently(choice2);
						cout << "--------------------------------\n";
						cout << "CONTACT DELETED SUCCESSFULLY\n";
						cout << "--------------------------------\n";
						Sleep(1000);
					}
				}
			}
		}

		else if (choice1 == book.totalContactsCount() + 4)
		{
			system("cls");
			Groups(book);

			int choice2;
			cin >> choice2;

			if (choice2 >= 0 && choice2 < book.totalGroupsCount())
			{
				system("cls");
				ContactInGroup(choice2, book);

				int choice3;
				cin >> choice3;

				if (choice3 >= 0 && choice3 < book.totalContactsInGroup(choice2))
				{
					system("cls");
					DetailFromContactInGroup(choice2, choice3, book);

					int choice4;
					cin >> choice4;

					if (choice4 == 1)
					{
						book.deleteContactFromGroup(choice2, choice3);
						cout << "--------------------------------\n";
						cout << "CONTACT IS SUCCESSFULLY REMOVED FROM THIS GROUP\n";
						cout << "--------------------------------\n";
						Sleep(1000);
					}
				}

				else if (choice3 == book.totalContactsInGroup(choice2))
				{
					system("cls");
					AddContactInGroup(choice2, book);
				}

				else if (choice3 == book.totalContactsInGroup(choice2) + 1)
				{
					book.deleteGroup(choice2);
					cout << "--------------------------------\n";
					cout << "GROUP IS DELETED SUCCESSFULLY\n";
					cout << "--------------------------------\n";
					Sleep(1000);
				}
			}

			else if (choice2 == book.totalGroupsCount())
			{
				system("cls");
				cout << "<---CREATE GROUP--->\n";
				string name;
				cout << "ENTER GROUP NAME: ";
				cin >> name;
				book.addGroup(name);
				cout << "--------------------------------\n";
				cout << "GROUP IS ADDED SUCCESSFULLY\n";
				cout << "--------------------------------\n";
				Sleep(1000);
			}
		}

		else if (choice1 == book.totalContactsCount() + 5)
		{
			system("cls");
			exit = true;
		}

		// For ignoring the error value in any case
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cout << "<---FULL DETAILS OF CONTACTS STORED--->\n";
	cout << book;

	system("pause");
	return 0;
}