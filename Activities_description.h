//
// Created by jieke on 21/02/24.
//
#include <iostream>
#ifndef ACTIVITIES_TRACKER_ACTIVITIES_DESCRIPTION_H
#define ACTIVITIES_TRACKER_ACTIVITIES_DESCRIPTION_H


class Activities_description {
private:
    std::string activity_name;

public:
    Activities_description(std::string name, const std::string& time_start, const std::string& time_end) : activity_name(name),
    activity_time_start(time_start), activity_time_end(time_end) {};

    const std::string& get_activity_name() const{
        return activity_name;
    }

    const std::string& get_activity_time_start() const{
        return activity_time_start;
    }

    const std::string& get_activity_time_end() const{
        return activity_time_end;
    }

    void set_activity_name (const std::string& name) {
        activity_name = name;
    }

    void set_activity_time_start (const std::string& time_start) {
        activity_time_start = time_start;
    }

    void set_activity_time_end (const std::string& time_end) {
        activity_time_end = time_end;
    }
};


#endif //ACTIVITIES_TRACKER_ACTIVITIES_DESCRIPTION_H
