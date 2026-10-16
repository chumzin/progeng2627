#include <iostream>
#include <string>
#include <utility>

int abs(int n){
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}

bool in_bound(std::pair<int, int> start, std::pair<int, int> end) {
    int s_x = std::get<0>(start);
    int s_y = std::get<1>(start);

    int e_x = std::get<1>(end);
    int e_y = std::get<1>(end);

    return (((s_x >= 1) && (s_x <= 8)) &&
            ((s_y >= 1) && (s_y <= 8)) && 
            ((e_x >= 1) && (e_x <= 8)) && 
            ((e_y >= 1) && (e_y <= 8)));
}

bool validate_rook(std::pair<int, int> start, std::pair<int, int> end) {
    if (in_bound(start, end)){
        return ((std::get<0>(start) == std::get<0>(end)) && (std::get<1>(start) != std::get<1>(end)) || ((std::get<1>(start) == std::get<1>(end)) && (std::get<0>(start) != std::get<0>(end)))); 
    } else {
        return false;
    }
}

bool validate_king(std::pair<int, int> start, std::pair<int, int> end) {
    int s_x = std::get<0>(start);
    int s_y = std::get<1>(start);

    int e_x = std::get<1>(end);
    int e_y = std::get<1>(end);



    if (((std::max(s_x, e_x) - std::min(s_x, e_x) <= 1) && (std::max(s_y, e_y) - std::min(s_y, e_y) <= 1)) && in_bound(start, end)) {
        return true;
    } else {
        return false;
    }
}

bool validate_knight(std::pair<int, int> start, std::pair<int, int> end) {
    int s_x = std::get<0>(start);
    int s_y = std::get<1>(start);

    int e_x = std::get<1>(end);
    int e_y = std::get<1>(end);

    if (!in_bound(start, end)) {
        return false;
    }

    if (((abs(s_x - e_x) == 2) && (abs(s_y - e_y) == 1) ||
        ((abs(s_y - e_y) == 2) && (abs(s_x - e_x) == 1)))) {
            return true;
        } else {
            return false;
        }

}

bool validate_bishop(std::pair<int, int> start, std::pair<int, int> end) {
    int s_x = std::get<0>(start);
    int s_y = std::get<1>(start);

    int e_x = std::get<1>(end);
    int e_y = std::get<1>(end);

    if (!in_bound(start, end)) {
        return false;
    }

    if (((s_x - e_x) == (s_y - e_y)) && (s_x != e_x)) {
        return true;
    } else {
        return false;
    }
}

bool validate_queen(std::pair<int, int> start, std::pair<int, int> end) {
    int s_x = std::get<0>(start);
    int s_y = std::get<1>(start);

    int e_x = std::get<1>(end);
    int e_y = std::get<1>(end);

    if (!in_bound(start, end)) {
        return false;
    }

    bool a = validate_bishop(start, end), b= validate_rook(start, end);

    if ((!a && b) || (a && !b)) {
        return true;
    } else {
        return false;
    }
}
// note to self: i got bored so this will be done later!!
// note to self:  i did it!!!

int main(){
    std::string chess_piece;

    std::cout << "Enter the type of chess piece" << std::endl;
    std::cin >> chess_piece;

    int a, b;
    std::cout << "Enter the starting coordinate of the " << chess_piece << std::endl;
    std::cin >> a >> b;
    std::pair<int, int> start = std::make_pair(a, b);

    std::cout << "Enter the ending coordinate of the " << chess_piece << std::endl;
    std::cin >> a >> b;
    std::pair<int, int> end = std::make_pair(a, b);

    std::cout << "The move is";

    if (chess_piece == "rook") {
        if (validate_rook(start, end)) {
            std::cout << " ";
        } else {
            std::cout << "n't";
        }
    } else if (chess_piece == "bishop") {
        if (validate_bishop(start, end)) {
            std::cout << " ";
        } else {
            std::cout << "n't";
        }
    } else if (chess_piece == "queen") {
        if (validate_queen(start, end)) {
                    std::cout << " ";
        } else {
            std::cout << "n't";
        }
    } else if (chess_piece == "knight") {
        if (validate_knight(start, end)) {
                    std::cout << " ";
        } else {
            std::cout << "n't";
        }
    } else if (chess_piece == "king") {
        if (validate_king(start, end)) {
                    std::cout << " ";
        } else {
            std::cout << "n't";
        }
    } else {
        std::cout << "n't";
    }

    std::cout << " valid!" << std::endl;

        
    
}