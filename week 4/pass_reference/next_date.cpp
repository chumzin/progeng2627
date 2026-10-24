#include <iostream>

bool leap_year(int year) {
    bool ly = false;

    if ((year % 4 == 0)){
        if (year % 400 == 0) {
            ly = !ly;
        } else if (year % 100 != 0) {
            ly = !ly;
        }
    }
    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    bool year_changed = false, month_changed = false, day_changed = false; // flag for when date is changed manually
    // year changed should only be true if the year is incremented
    // day changed flag is redundant ( i think )


    if (leap_year(y1) && m1 == 2) {
        // case if its a leap year and its february
        d2 = (d1 + 1) % 29;
        if (d2 == 0) {
            d2 = 29;
            day_changed = true;
        } else if (d2 == 1) {
            m2 = m1 + 1; 
            month_changed = true;
        }
    }

    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12) {
        d2 = (d1 + 1) % 31;
        if (d2 == 1){ // next month
            if (m1 == 12) { // if its december 
                y2 = y1 + 1;
                year_changed = true;
            }
            m2 = (m1 + 1) % 12 ;
            month_changed = true;
        }
        if (d2 == 0) {
            d2 = 31;
            day_changed = true;
        }
    }

    if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
        d2 = (d1 + 1) % 30;
        if (d2 == 1){
            m2 = m1 + 1;
            month_changed = true;
        }
        if (d2 == 0) {
            d2 = 30;
            day_changed = true;
        }
    }

    if (!month_changed) {
        m2 = m1;
    }
    if (!year_changed) {
        y2 = y1;
    }

}

int main(){
    int d1, m1, y1;
    int d2, m2, y2;

    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);

    std::cout << d2 << std::endl;
    std::cout << m2 << std::endl;
    std::cout << y2 << std::endl;
}