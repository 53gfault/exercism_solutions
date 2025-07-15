namespace hellmath {

enum class AccountStatus {
    troll,
    guest,
    user,
    mod
};

enum class Action {
    read,
    write,
    remove
};

bool display_post(AccountStatus poster, AccountStatus viewer) {
    if( poster == AccountStatus::troll )
        return viewer == AccountStatus::troll;
    return true;
}

bool permission_check(Action action, AccountStatus status) {
    if( status == AccountStatus::guest) return action == Action::read;
    else if( status == AccountStatus::user || status == AccountStatus::troll )
        return action <= Action::write;
    return true;
}

bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
    if( player1 == AccountStatus::guest || player2 == AccountStatus::guest ) return false;
    if( player1 == AccountStatus::troll || player2 == AccountStatus::troll )
        return player1 == AccountStatus::troll && player2 == AccountStatus::troll;
    return true;
}

bool has_priority(AccountStatus player1, AccountStatus player2) {
    return player1 > player2;
}

}