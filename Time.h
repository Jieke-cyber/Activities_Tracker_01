//
// Created by jieke on 19/03/24.
//
#include<iostream>
#ifndef ACTIVITIES_TRACKER_TIME_H
#define ACTIVITIES_TRACKER_TIME_H


class Time {
private:
    std::string activity_time_start;
    std::string activity_time_end;
public:
    Time(std::string ts, std::string te) : activity_time_start(ts),  activity_time_end(te) {
        if(te<=ts)
            throw ()
    }
    int time_convertor(const std::string& time) const;
};


#endif //ACTIVITIES_TRACKER_TIME_H
