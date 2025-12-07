#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct Hospital {
    char name [50];
    char city [50];
    int beds;
    float price;
    float rating;
    int reviews;
};
// Define a structure for patient
struct Patient {
    char name[50];
    int age;
};
// Function to print hospital data
void printHospital(struct Hospital hosp)
{
    printf("Hospital Name: %s\n", hosp.name);
    printf("City: %s\n", hosp.city);
    printf("Total Beds: %d\n", hosp.beds);
    printf("Price per Bed: $%.2f\n", hosp.price);
    printf("Rating: %.1f\n", hosp.rating);
    printf("Reviews: %d\n", hosp.reviews);
    printf("\n");
}
// Function to sort hospitals by beds price (ascending)
void sortByPrice(struct Hospital hospitals[], int n)
{
    // Implement sorting logic
    for(int i = 0; i<n-1; i++) {
        for (int j = 0; j<n-i-1; j++) {
            if (hospitals[j].price > hospitals[j+1].price) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp;
            }
        }
            }
        }
// Function to sort hospitals by name 
void sortByName (struct Hospital hospitals[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if(strcmp(hospitals[j].name, hospitals[j+1].name)>0) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp;
            }
        }
    }
}
// Function to sort hospitals by rating and reviews
void sortByRating(struct Hospitals hospitals[], int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (hospitals[j].rating * hospitals[j].review < hospitals[j+1].rating * hospitals[j+1].reviews) {
                struct Hospital temp = hospitals[j];
                hospitals[j] = hospitals[j+1];
                hospitals[j+1] = temp;
            }
        }
    }
}
// Function to print Hospitals in a specific city
void printHospitalsInCity (struct Hospital hospitals[]) {
    char city [50];
    int hospitalsFound = 0;
    printf("Enter city name :");
    scanf("%s", city);
    printf("Hospitals in %s:\n", city);
    for (int i=0; i<5; i++) {
        if (strcasecmp(hospitals[i].city, city) ==0) {
            printf("HOSPITAL NAME : %s\n", hospitals[i].name);
            printf("CITY : %s\n", hospitals[i].city);
            printf("TOTAL BEDS : %d\n", hospitals[i].beds);
            printf("PRICE PER BED : $%.2f\n", hospitals[i].price);
            printf("RATING : %.1f\n", hospitals[i].rating);
            printf("REVIEWS : %d\n", hospitals[i].reviews);
            printf("\n");
            hospitalsFound++ ;
        }
    }
    if (hospitalsFound == 0) {
        printf("No hospitals found in %s\n", city);
    }
}
// Function to print patient data
void printPatient (struct Patient patient) {
    printf("PATIENT NAME : %s\n", patient.name);
    printf("AGE : %d\n", patient.age);
    printf("\n");
}

int main() {
   // Sample Hospital data
   struct Hospital hospitals[5]
   = { { "Hospital A", "X", 100,250.0,4.5,100},
     { "Hospital B", "Y", 150,200.0,4.2,80},
     { " Hospital C", "X", 200,180.0,4.0,120},
     { "Hospital D", "Z", 120,300.0,4.8,90},
     { "Hospital E", "Y", 130,220.0,4.3,110} };
    } 

    // Sample Patient data 
    struct Patient patients[5][3] = { { {"AMAR",35},
                                        {"MANISH",45},
                                        {"ATUL",28},
                                        {"DEBOLINA", 18},
                                        {"SHRUTI", 25},
                                        {"RAHUL", 30},
                                        {"PRIYA", 40},
                                        {"ASIF", 38},
                                        {"PRINCE", 60},
                                        {"SAHIL", 33} } };
int n =5; // number of hospitals

int choice;
char city[50];

do {
    printf("\n\n\n******* HOSPITAL MANAGEMENT "
              "SYSTEM *******\n");
              printf("1. Printing Hospital data\n");
              printf("2. Printing Patients data\n");
              printf("3. Sorting Hospitals by Beds Price\n");
              printf("4. Sorting Hospitals by Available Beds\n");
              pritnf("5. Sorting Hospitals by name\n");
              printf("6. Sorting Hospitals by Ratings and Reviews\n");
              printf("7. Print Hospitals in a Specific City\n");
              printf("8. Exit\n\n");
              printf("ENTER YOUR CHOICE :");
              scanf("%d",&choice);

              switch (choice) {
                case 1:
                    printf("\nHospital Data:\n");
                    for (int i=0; i<n; i++) {
                        printHospital(hospitals[i]);
                    }
                    break;
                    case 2:
                       printf("Printing patients Data:\n");
                       for (int i=0; i<n; i++) {
                            printf("Hospital:%s\n", hospitals[i].name);
                            for (int j=0; j<3; j++) {
                                 printPatient(patients[i][j]);
                            }
                       }
                       break;
                       case 3:
                       printf("Sorting Hospitals by beds Price :\n");
                       sortByBeds (hospitals, n);
                       for (int i=0; i<n; i++) {
                        printHospital(hospitals[i]);
                       }
                       break;
               case 4:
               printf("Sorting Hospitals by Available beds: \n");
               sortByBeds(hospitals, n);
               for (int i=0; i<n; i++) {
                printHospital (hospitals[i]);
               }        
                break;
                case 5:
                printf("Sorting Hospitals by Name :\n");
                sortByName (hospitals, n);
                for (int i=0; i<n; i++) {
                    printHospital(hospitals[i]);
                }
                break;
                case 6:
                printf("Sorting hospitals by Rating and Reviews :\n");
                sortByRating(hospitals, n);
                for (int i=0; i<n; i++) {
                    printHospital(hospitals[i]);
                }
                break;
                case 7:
                printHospitalsInCity(hospitals);
                break;
                case 8:
                printf("Exiting the Program.\n");
                break;
                default:
                printf("INVALID CHOICE. PLEASE ENTER A VALID"
                   "OPTION.\n");  
                }
            } while (choice != 8);

        


