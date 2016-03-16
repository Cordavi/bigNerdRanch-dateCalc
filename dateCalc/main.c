//
//  main.c
//  dateCalc
//
//  Created by Cordavi on 3/16/16.
//  Copyright © 2016 Cordavi. All rights reserved.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    //Time since beginning
    long secondsSince1970 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1970);
    
    struct tm now;
    localtime_r(&secondsSince1970, &now);
    printf("The current time is %d:%d:%d\n", now.tm_hour, now.tm_min, now.tm_sec);
    printf("The current date is %d-%d-%d\n", (now.tm_mon + 1), now.tm_mday, (now.tm_year + 1900));
    
    //Time 4 million seconds in the future
    long fourMillonSecondsInFuture = (secondsSince1970 + 4000000);
    
    struct tm future;
    localtime_r(&fourMillonSecondsInFuture, &future);
    printf("The time in 4 million seconds is %d:%d:%d\n", future.tm_hour, future.tm_min, future.tm_sec);
    printf("The date in 4 million seconds is %d-%d-%d\n", (future.tm_mon + 1), future.tm_mday, (future.tm_year + 1900));
    
    

    
    return 0;
}
