#include<stdio.h>
struct Cars {
    char MODEL[50];
    int YEAR;
    float PRICE;
    int SEATS;
    char COLOR[20];
   
};

struct SERVICES {
            char SERVICE_DATE[20];
            char SERVICE_TYPE[40];
            float SERVICE_PAYMENT;
        };

enum SEAT_COLOR { BEIGE = 1, BLACK, BROWN };
        struct CUSTOMIZATIONS {
            char CUSTOMIZATION_TYPE [30];
             enum SEAT_COLOR SEAT_COLOR;
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
    
 printf("\n SERVICE DETAILS OF THE CAR \n");
        struct SERVICES service1;
        printf("SERVICE_DATE :");
        scanf("%s", service1.SERVICE_DATE);
        printf("SERVICE_TYPE :");
        scanf("%s", service1.SERVICE_TYPE);
        printf("SERVICE_PAYMENT :");
        scanf("%f", service1.SERVICE_PAYMENT);

        
        printf("\n CUSTOMIZATION DETAILS OF THE CAR \n");
        struct CUSTOMIZATIONS customization1; 

        printf("CUSTOMIZATION_TYPE (1 FOR INTERIOR / 0 FOR EXTERIOR) :");
        scanf("%d", &CUSTOMIZATION_TYPE);
       
        if (CUSTOMIZATION_TYPE == 1) {
            printf("CUSTOMIZATION_TYPE : INTERIOR\n");
            printf("SELECT SEAT_COLOR (1 FOR BEIGE / 2 FOR BLACK / 3 FOR BROWN) :");
            scanf(" %d", &customization1.SEAT_COLOR);
            switch(customization1.SEAT_COLOR) {
                case 1:
                    printf("SEAT_COLOR : BEIGE\n");
                    break;
                case 2:
                    printf("SEAT_COLOR : BLACK\n");
                    break;
                case 3:
                    printf("SEAT_COLOR : BROWN\n");
                    break;
                default:
                    printf("INVALID CHOICE FOR SEAT_COLOR\n");
            }
            
        }


 return 0;

}
