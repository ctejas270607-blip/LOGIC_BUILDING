#include<stdio.h>
struct Cars {
    char MODEL[50];
    int YEAR;
    float PRICE;
    int SEATS;
    char COLOR[20];
   
};
int main() {
    struct Cars car1, car2, car3;
     int AVALIABILITY;
     int SERVICE; 
     
    printf("DETAILS OF CAR \n");
    printf("CAR MODEL SERIES :");
    fgets(car1.MODEL, sizeof(car1.MODEL), stdin);
    printf("MANUFACTURE YEAR :");
    scanf("%d",&car1.YEAR);
    printf("PRICE OF THE CAR :");
    scanf("%f",&car1.PRICE);
    printf("NUMBER OF SEATS :");
    scanf("%d",&car1.SEATS);
    printf("COLOR :");
    scanf("%s",car1.COLOR);
    
    printf("AVALIABILITY (1 for Yes / 0 for No) :");
    scanf("%d",&AVALIABILITY);
    if (AVALIABILITY == 1) {
        printf("THE TOTAL NUMBER OF CAR AVAILABLE IS 7\n");
        int BOOKING_DATE;
        printf("YOUR BOOKING DATE (DDMMYYYY) :");
        scanf("%d",&BOOKING_DATE);
        printf("\n CAR BOOKING_DATE IS :%d\n", BOOKING_DATE);
    }
    else {
          printf("SORRY! THE CAR IS OUT OF AVAILABILITY\n");
           }
        
        printf("SERVICE CHECKED (1 ON COMPLETION OF 6 MONTHS/ 0 FOR 10000 KM): ");
        scanf("%d", &SERVICE);
        if (SERVICE == 1) {
            printf("YOUR SERVICE PAYMENT IS COMPENSATED\n");
            int SERVICE_PAYMENT;
            printf("ENTER YOUR SERVICE PAYMENT AMOUNT: ");
            scanf("%d", &SERVICE_PAYMENT);
            printf("SERVICE PAYMENT AMOUNT COMPENSATED: %d\n", SERVICE_PAYMENT);
        }
        else {
            printf("SERVICE PAYMENT COMPENSATED AS PER THE COMPANY \n"); 
        }


 return 0;
}