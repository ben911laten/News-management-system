#include "user.h"
#include "Event.h"
user::user() {
    spam = 0;
}

int user::getId() {
    return id;
}

void user::setId(int newId) {
    id = newId;
}

std::vector<std::string> user::getPreference() {
    return preference;
}

void user::addPreference(std::string newPreference) {
    preference.push_back(newPreference);
}

std::string user::getUsername() {
    return username;
}

void user::setUsername(std::string newusername) {
    username = newusername;
}

std::string user::getPassword() {
    return password;
}

void user::setPassword(std::string newPassword) {
    password = newPassword;
}

void user::reportSpam(Event event) {
    spam++;
}

void user::rate(Event event, int rate) {
    // implementation
}

void user::displayNews() {
    // implementation
}

void user::displayNews(std::string category) {
    // implementation
}
