/*
 * Trevor Dunn
 * April 7, 2024
 * Profile Creator
 * Note: This is a personal project designed to create a mock facebook profile.
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

std::vector<std::string> getFriendInfo(std::string userName);
void outputResults(std::string userName, std::vector<std::string> userFriends, std::string userDateofBirth, std::string userJoinedDate);

int main()
{
    std::string userName = "[unpopulated]";
    std::string userDateOfBirth = "[unpopulated]";
    std::string userJoinedDate = "[unpopulated]";
    std::vector<std::string> userFriends;
    // Get some basic information from the user.
    std::cout << "What is your name?" << std::endl;
    getline(std::cin, userName);
    std::cout << "What is your date of birth? (DD/MM/YYYY)" << std::endl;
    getline(std::cin, userDateOfBirth); // Need to update this to use an actual date.
    // TO DO: Implement userJoinedDate
    userFriends = getFriendInfo(userName);
    outputResults(userName, userFriends, userDateOfBirth, userJoinedDate);

    return 0;
}

std::vector<std::string> getFriendInfo(std::string userName)
{
    std::vector<std::string> friends;
    std::string newFriend;
    int starterFriendCount = 0;
    std::cout << "How many friends would you like to add?" << std::endl;
    std::cin >> starterFriendCount;
    for (int i = starterFriendCount; i > 0; i--)
    {
        std::cout << "What is your friend's name?" << std::endl;
        if (i == starterFriendCount)
        {
            std::cin.ignore();
        }
        getline(std::cin, newFriend);
        friends.push_back(newFriend);
    }

    return friends;
}

void outputResults(std::string userName, std::vector<std::string> userFriends, std::string userDateofBirth, std::string userJoinedDate)
{
    std::cout << userName << std::endl;
    std::cout << userDateofBirth << std::endl;
    std::cout << userJoinedDate << std::endl;
    std::cout << "Your friends:" << std::endl;
    for (size_t i = 0; i < userFriends.size(); i++)
    {
        std::cout << userFriends[i] << std::endl;
    }
}