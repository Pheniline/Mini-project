#include "User.h"

User::User(string u, string p) {
    username = u;
    password = p;
}

bool User::login(string u, string p) {

    if(u == username && p == password) {
        return true;
    }

    return false;
}