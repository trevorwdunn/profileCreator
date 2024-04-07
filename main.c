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
#include <time>

std::vector<std::string> getFriendInfo(std::string userName);

int main() { 
    std::string userName;
    std::string userDateOfBirth;
    std::string userJoinedDate;
    std::vector<std::string> userFriends;
    // Get some basic information from the user. 
    std::cout << "What is your name?" << std::endl;
    getline(std::cin, userName);
    std::cout << "What is your date of birth?" << std::endl;
    getline(std::cin, userDateOfBirth); // Need to update this to use an actual date. 
    // TO DO: Implement userJoinedDate
    userFriends = getFriendInfo(userName);


    return 0;
}


std::vector<std::string> getFriendInfo(std::string userName) { 
    std::vector<std::string> friends;
    std::string newFriend;
    int starterFriendCount;
    std::cout << "How many friends would you like to add?" << std::endl;
    std::cin starterFriendCount;
    for (int i = starterFriendCount, i > 0, i--) { 
        std::cout << "What is your friend's name?" << std::endl;
        getline(std::cin newFriend);
        friends.push_back(newFriend);
    }


    return friends;
}
