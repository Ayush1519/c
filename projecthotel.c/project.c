#include <ctype.h>
#include <stdio.h>//standard library
#include <string.h>//standard library

struct Hotel {//struct data sturcture
    char name[50];//char variable 
    char city[50];
    int beds;
    float price;
    float rating;
    int reviews;
};

struct Guest {
    char name[50];
    int age;
};

void printHotels(struct Hotel hotel) {//function
    printf("\nHotel Name: %s\n", hotel.name);
    printf("City: %s\n", hotel.city);
    printf("Total Beds: %d\n", hotel.beds);
    printf("Price per Bed: $%.2f\n", hotel.price);
    printf("Rating: %.1f\n", hotel.rating);
    printf("Reviews: %d\n", hotel.reviews);
    printf("---------------------------------\n");
}


void sortByPrice(struct Hotel hotels[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hotels[j].price > hotels[j + 1].price) {
                struct Hotel temp = hotels[j];
                hotels[j] = hotels[j + 1];
                hotels[j + 1] = temp;
            }
        }
    }
}


void sortByName(struct Hotel hotels[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(hotels[j].name, hotels[j + 1].name) > 0) {
                struct Hotel temp = hotels[j];
                hotels[j] = hotels[j + 1];
                hotels[j + 1] = temp;
            }
        }
    }
}

void sortByRating(struct Hotel hotels[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hotels[j].rating * hotels[j].reviews < hotels[j + 1].rating * hotels[j + 1].reviews) {
                struct Hotel temp = hotels[j];
                hotels[j] = hotels[j + 1];
                hotels[j + 1] = temp;
            }
        }
    }
}


void printHotelsInCity(struct Hotel hotels[]) {
    char city[50];
    int hotelsFound = 0;

    printf("Enter city name (X, Y, or Z): ");
    scanf("%s", city);

    printf("Hotels in %s:\n", city);

    for (int i = 0; i < 5; i++) {
        if (strcasecmp(hotels[i].city, city) == 0) {
            printHotels(hotels[i]);
            hotelsFound++;
        }
    }

    if (hotelsFound == 0) {
        printf("No hotels found in %s\n", city);
    }
}

void sortByBeds(struct Hotel hotels[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (hotels[j].beds < hotels[j + 1].beds) {
                struct Hotel temp = hotels[j];
                hotels[j] = hotels[j + 1];
                hotels[j + 1] = temp;
            }
        }
    }
}

void printGuest(struct Guest guest) {
    printf("\nGuest Name: %s\n", guest.name);
    printf("Age: %d\n", guest.age);
    printf("---------------------------------\n");
}

void printMainMenu() {
    printf("\n\n************ Hotel Management System ************\n");
    printf("1. Print Hotel Data\n");
    printf("2. Print Guests Data\n");
    printf("3. Sort Hotels by Price\n");
    printf("4. Sort Hotels by Available Beds\n");
    printf("5. Sort Hotels by Name\n");
    printf("6. Sort Hotels by Rating and Reviews\n");
    printf("7. Print Hotels in a Specific City\n");
    printf("8. Exit\n");
    printf("**********************************************\n");
    printf("Enter your choice: ");
}

int main() {
    struct Hotel hotels[5] = {
        {"Hotel A", "X", 100, 250.0, 4.5, 100},
        {"Hotel B", "Y", 150, 200.0, 4.2, 80},
        {"Hotel C", "X", 200, 180.0, 4.0, 120},
        {"Hotel D", "Z", 80, 300.0, 4.8, 90},
        {"Hotel E", "Y", 120, 220.0, 4.6, 110}
    };

    struct Guest guests[5][3] = {
        {{"Amar", 35}, {"Manish", 45}, {"Atul", 28}},
        {{"Elvish", 62}, {"Debolina", 18}, {"Shruti", 55}},
        {{"Zafar", 50}, {"Rahul", 30}, {"Priya", 40}},
        {{"Amir", 22}, {"Asif", 38}, {"Prince", 60}},
        {{"Aditya", 28}, {"Aman", 48}, {"Sahil", 33}}
    };

    int n = 5;  // Number of hotels
    int choice;

    do {
        printMainMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n***** Print Hotel Data *****\n");
                for (int i = 0; i < n; i++) {
                    printHotels(hotels[i]);
                }
                break;

            case 2:
                printf("\n***** Print Guests Data *****\n");
                for (int i = 0; i < n; i++) {
                    printf("\nHotel: %s\n", hotels[i].name);
                    for (int j = 0; j < 3; j++) {
                        printGuest(guests[i][j]);
                    }
                }
                break;

            case 3:
                printf("\n***** Sorting Hotels by Price (Ascending) *****\n");
                sortByPrice(hotels, n);
                for (int i = 0; i < n; i++) {
                    printHotels(hotels[i]);
                }
                break;

            case 4:
                printf("\n***** Sorting Hotels by Available Beds (Descending) *****\n");
                sortByBeds(hotels, n);
                for (int i = 0; i < n; i++) {
                    printHotels(hotels[i]);
                }
                break;

            case 5:
                printf("\n***** Sorting Hotels by Name (Alphabetical) *****\n");
                sortByName(hotels, n);
                for (int i = 0; i < n; i++) {
                    printHotels(hotels[i]);
                }
                break;

            case 6:
                printf("\n***** Sorting Hotels by Rating and Reviews (Descending) *****\n");
                sortByRating(hotels, n);
                for (int i = 0; i < n; i++) {
                    printHotels(hotels[i]);
                }
                break;

            case 7:
                printf("\n***** Print Hotels in a Specific City *****\n");
                printHotelsInCity(hotels);
                break;

            case 8:
                printf("\nExiting the program. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 8);

    return 0;
}
