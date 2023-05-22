//
// Created by yead on 5/21/23.
//
#include<iostream>
#include<fstream>
#include<cstring>
#include<sstream>
#include<header.h>
#include <chrono>

bool isUrgent(input taskdata)
{
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
        return false;
    }
    else if(input::showdateyear(taskdata.date) == year)
    {
        if(input::showdatemonth(taskdata.date) < month)
        {
            return false;
        }
        else if(input::showdatemonth(taskdata.date) == month)
        {
            if(input::showdatedate(taskdata.date) < day)
            {
                return false;
            }
            else if(input::showdatedate(taskdata.date) == day)
            {
                return true;
            }
            else if(input::showdatedate(taskdata.date) <= day+1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if(input::showdatemonth(taskdata.date) == month+1)
        {
            if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            {
                if(input::showdatedate(taskdata.date) == 1 && day==31)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if(month==4 || month==6 || month==9 || month==11)
            {
                if(input::showdatedate(taskdata.date) == 1 && day==30)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if(month==2 && year%4==0)
            {
                if(input::showdatedate(taskdata.date) == 1 && day==29)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
            else if(month==2 && year%4!=0)
            {
                if(input::showdatedate(taskdata.date) == 1 && day==28)
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
    else if(input::showdateyear(taskdata.date) == year+1 && month==12 && day==31)
    {
        if(input::showdatemonth(taskdata.date) == 1)
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
