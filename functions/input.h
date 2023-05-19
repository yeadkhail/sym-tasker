//
// Created by yead on 3/4/23.
//

#ifndef SYM_INPUT_H
#define SYM_INPUT_H

#include<iostream>
#include<cstring>
#include<fstream>
#include <sstream>

using namespace std;
struct input {
public:
    std::string taskname;
    std::string taskdetail;
    std::string tasktag;
    std::string date;
    std::string attachment;

    static int showdatedate(const std::string& date)
    {
       istringstream issdate (date);
       string part;
       getline(issdate,part,'/');
       int intdate = stoi(part);
       return intdate;
    }
    static int showdatemonth(const std::string& date)
    {
        istringstream issdate (date);
        string part;
        getline(issdate,part,'/');
        getline(issdate,part,'/');
        int intmonth = stoi(part);
        return intmonth;
    }
    static int showdateyear(const std::string& date)
    {
        istringstream issdate (date);
        string part;
        getline(issdate,part,'/');
        getline(issdate,part,'/');
        getline(issdate,part,'/');
        int intyear = stoi(part);
        return intyear;
    }


};
input insertaskdata();

#endif //SYM_INPUT_H
