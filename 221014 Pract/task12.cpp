#include <iostream>

int main() {


    // Напишете програма, която да приема цяло число между 1 и 12 и цяло число за година. Да извежда броя дни в съответния месец като използвате горната програма, за да проверите дали годината е високосна. Реализирайте програмата използвайки:
    // if-else оператор
    // switch оператор
    int month, year;

    std::cout << "Enter a month and a year: ";
    std::cin >> month >> year;

    bool isLeap = false;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {

        isLeap = true;

    }
    
    int numberOfDays = 0;

    if (isLeap) {

        switch (month)
        {
        case 1:
            numberOfDays = 31;
            break;
        
        case 2:
            numberOfDays = 29;
            break;
        
        case 3:
            numberOfDays = 31;
            break;
        
        case 4:
            numberOfDays = 30;
            break;
        
        case 5:
            numberOfDays = 31;
            break;
        
        case 6:
            numberOfDays = 30;
            break;
        
        case 7:
            numberOfDays = 31;
            break;
        
        case 8:
            numberOfDays = 31;
            break;
        
        case 9:
            numberOfDays = 30;
            break;
        
        case 10:
            numberOfDays = 31;
            break;
        
        case 11:
            numberOfDays = 30;
            break;
        
        case 12:
            numberOfDays = 31;
            break;

        default:
            break;
        }

    }

    if (!isLeap) {

        switch (month)
        {
        case 1:
            numberOfDays = 31;
            break;
        
        case 2:
            numberOfDays = 28;
            break;
        
        case 3:
            numberOfDays = 31;
            break;
        
        case 4:
            numberOfDays = 30;
            break;
        
        case 5:
            numberOfDays = 31;
            break;
        
        case 6:
            numberOfDays = 30;
            break;
        
        case 7:
            numberOfDays = 31;
            break;
        
        case 8:
            numberOfDays = 31;
            break;
        
        case 9:
            numberOfDays = 30;
            break;
        
        case 10:
            numberOfDays = 31;
            break;
        
        case 11:
            numberOfDays = 30;
            break;
        
        case 12:
            numberOfDays = 31;
            break;

        default:
            break;
        }

    }

    std::cout << "Number of days in the month: " << numberOfDays << std::endl;

    return 0;

}
