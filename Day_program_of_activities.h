//
// Created by jieke on 22/02/24.
//
#include <iostream>
#include <list>
#include <memory>
#include "Activities_description.h"
#include "ncurses.h"

#ifndef ACTIVITIES_TRACKER_DAY_PROGRAM_OF_ACTIVITIES_H
#define ACTIVITIES_TRACKER_DAY_PROGRAM_OF_ACTIVITIES_H


class Day_program_of_activities {
private:
    int day_number;
    std::list<std::shared_ptr<Activities_description>> day_activities;
    int count = 0;
public:
    Day_program_of_activities(int day_number) : day_number(day_number) {};

    ~Day_program_of_activities() noexcept{};

    int get_day_number() const{
        return day_number;
    }

    void add_activity(const std::string& name, const std::string& time_start, const std::string& time_end);

    bool remove_activity(const std::string& nome);

    bool is_inserted(const std::string &name) const;

    int time_convertor(const std::string& time) const;

    void show_program();

    const std::list<std::shared_ptr<Activities_description>> &get_day_activities() const {
        return day_activities;
    }
};


#endif //ACTIVITIES_TRACKER_DAY_PROGRAM_OF_ACTIVITIES_H
