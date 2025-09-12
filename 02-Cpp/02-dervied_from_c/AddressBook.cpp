#include <iostream>
#include <limits>
#include <string>
#include <vector> 
#include <algorithm> // Required for std::find


std::vector<std::string> addressBook; // Global vector to store address book entries


void AddressBook_PrintAllUsers() // Forward declaration of a function to print all users in the address book    
{
    std::cout << "Printing all users in the address book..." << std::endl; // Print a message indicating that all users are being printed
    // Implementation of printing all users would go here
    for (const auto& user : addressBook) {
        std::cout << user << std::endl; // Print each user in the address book
    }
}
void AddressBook_AddUser(const std::string& name) // Forward declaration of a function to add a user to the address book
{
    std::cout << "Adding user: " << name << std::endl; // Print a message indicating that a user is being added
    // Implementation of adding a user would go here
    addressBook.push_back(name); // Add the user to the address book
    std::cout << "User added successfully!" << std::endl; // Print a success

}
void AddressBook_RemoveUser(const std::string& name) // Forward declaration of a function to remove a user from the address book
{
    std::cout << "Removing user: " << name << std::endl; // Print a message indicating that a user is being removed
    // Implementation of removing a user would go here
    addressBook.erase(std::remove(addressBook.begin(), addressBook.end(), name), addressBook.end()); // Remove the user from the address book
    std::cout << "User removed successfully!" << std::endl; // Print a success 

}
void AddressBook_UpdateUser(const std::string& name, const std::string& newName) // Forward declaration of a function to update a user's name in the address book
{
    std::cout << "Updating user: " << name << " to " << newName << std::endl; // Print a message indicating that a user is being updated
    // Implementation of updating a user would go here 
    auto it = std::find(addressBook.begin(), addressBook.end(), name); // Find the user in the address book
    if (it != addressBook.end()) {
        *it = newName; // Update the user's name
        std::cout << "User updated successfully!" << std::endl; // Print a success
    } else {
        std::cout << "User not found!" << std::endl; // Print a message indicating that the user was not found
    }
}
void   AddressBook_SearchUser(const std::string& name) // Forward declaration of a function to search for a user in the address book
{
    std::cout << "Searching for user: " << name << std::endl; // Print a message indicating that a user is being searched
    // Implementation of searching for a user would go here 
    auto it = std::find(addressBook.begin(), addressBook.end(), name); // Find the user in the address book
    if (it != addressBook.end()) {
        std::cout << "User found: " << *it << std::endl; // Print the user's name if found  
    } else {
        std::cout << "User not found!" << std::endl; // Print a message indicating that the user was not found
    } 
} 

int main()
{   
    int choice; // Variable to store the user's choice
    std::string name, newName; // Variables to store user names
    do {
        std::cout << "Address Book Menu:" << std::endl; // Print the address book menu
        std::cout << "1. Print All Users" << std::endl;
        std::cout << "2. Add User" << std::endl;
        std::cout << "3. Remove User" << std::endl;
        std::cout << "4. Update User" << std::endl;
        std::cout << "5. Search User" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: "; // Prompt the user for their choice
        std::cin >> choice; // Read the user's choice   
        while (std::cin.fail()) { // Check if the input is valid
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            std::cout << "Invalid input. Please enter a number: "; // Prompt the user to enter a valid number
            std::cin >> choice; // Read the user's choice again
        }
        switch (choice) { // Switch statement to handle the user's choice   
            case 1:
                AddressBook_PrintAllUsers(); // Call the function to print all users
                break;
            case 2:
                std::cout << "Enter user name to add: "; // Prompt the user for a name to add
                std::cin >> name; // Read the user's name
                AddressBook_AddUser(name); // Call the function to add the user
                break;
            case 3:
                std::cout << "Enter user name to remove: "; // Prompt the user for a name to remove
                std::cin >> name; // Read the user's name
                AddressBook_RemoveUser(name); // Call the function to remove the user
                break;
            case 4:
                std::cout << "Enter user name to update: "; // Prompt the user for a name to update
                std::cin >> name; // Read the user's name
                std::cout << "Enter new user name: "; // Prompt the user for a new name
                std::cin >> newName; // Read the new user's name
                AddressBook_UpdateUser(name, newName); // Call the function to update the user
                break;
            case 5:
                std::cout << "Enter user name to search: "; // Prompt the user for a name to search
                std::cin >> name; // Read the user's name
                AddressBook_SearchUser(name); // Call the function to search for the user
                break;
            case 6:
                std::cout << "Exiting..." << std::endl; // Print a message indicating that the program is exiting
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl; // Print a message indicating that the choice was invalid
        }
    } while (choice != 6); // Repeat the menu until the user chooses to exit
    return 0; // Return 0 to indicate successful execution of the program
  
}