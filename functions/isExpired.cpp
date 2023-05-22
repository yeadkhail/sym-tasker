//
// Created by yead on 5/23/23.
//
#include<iostream>
#include<cstring>
#include<cstdlib>
#include <fstream>
#include "header.h"

bool isExpired(input taskdata)
{
    using namespace std;
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    // Convert the system time to a time_t object
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Convert the time_t object to a struct tm
    std::tm* timeInfo = std::localtime(&currentTime);
    // Extract the date, month, and year
    int day = timeInfo->tm_mday;
    int month = timeInfo->tm_mon + 1;  // tm_mon is zero-based
    int year = timeInfo->tm_year + 1900;  // tm_year is years since 1900
    if(input::showdateyear(taskdata.date) < year)
    {
        return true;
    }
    else if(input::showdateyear(taskdata.date) == year)
    {
        if(input::showdatemonth(taskdata.date) < month)
        {
            return true;
        }
        else if(input::showdatemonth(taskdata.date) == month)
        {
            if(input::showdatedate(taskdata.date) < day)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }

    }
    else
    {
        return false;
    }

}