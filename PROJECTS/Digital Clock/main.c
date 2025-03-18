#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int main() {

    int format;
    printf("Choose the time format (1 or 2): \n");
    printf("1. 12 Hour format\n");
    printf("2. 24 Hour format\n");
    printf("Choose: ");
    scanf("%d", &format);

    while (1) {
        //TIME SHOW
        time_t main_time;
        struct tm *current_time;
        char buffer[50];

        time(&main_time);
        current_time = localtime(&main_time);

        if (format == 1){
            strftime(buffer, sizeof(buffer), "%I:%M:%S %p", current_time);
        }
        else if (format == 2) {
            strftime(buffer, sizeof(buffer), "%H:%M:%S %p", current_time);
        }else {
            printf("Wrong Input. Choosing default format (12 hour)\n");
            strftime(buffer, sizeof(buffer), "%I:%M:%S %p", current_time);
        }


        // DATE SHOW
        time_t main_date;
        struct tm *current_date;
        char buffer2[100];

        time(&main_date);
        current_date = localtime(&main_date);

        strftime(buffer2, sizeof(buffer2), "%A %B %d %Y", current_date);

        printf("Current time: %s\n", buffer);
        printf("Current date: %s\n", buffer2);

        sleep(1);
        clear_screen();
    }


    return 0;
}
