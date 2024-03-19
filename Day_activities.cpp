//
// Created by jieke on 22/02/24.
//
#include <iostream>
#include "Day_activities.h"
#include <exception>

void Day_activities::add_activity(const std::string &name, const std::string& time_start, const std::string& time_end) {
    std::list<std::shared_ptr<Activities_description>>::iterator it = day_activities.begin();
    if(is_inserted(name)) {
        printf("Activity already exists\n");
    } else {
        for(const auto &activity : day_activities) {
            if(time_convertor(time_end)< time_convertor(activity->get_time().get_time_start())) {
                break;
            }
            it ++;
        }
        day_activities.insert(it, std::make_shared<Activities_description>(name, time_start, time_end));
    }
}

bool Day_activities::remove_activity(const std::string &nome)
{
    for(const auto &activity : day_activities) {
        if(activity->get_activity_name() == nome) {
            day_activities.remove(activity);
            return true;
        }
    }
    return false;
}

bool Day_activities::is_inserted(const std::string& name) const {
    for(const auto &activity : day_activities) {
        if(activity->get_activity_name() == name) {
            return true;
        }
    }
    return false;
}

void Day_activities::show_program() const{
    initscr();
    clear();
    printf("Activities_program of %d' day\n", day_number);

    for(auto &activity : day_activities) {
        int i = 4;
        initscr();
        clear();
        printw("Activities program of %d' day", day_number);
        mvprintw(2, 0, "Activity:");
        mvprintw(2, 50, "Start time:");
        mvprintw(2, 100, "End time:");
        for(auto &activity: day_activities) {
            mvprintw(i, 0, "%s", activity->get_activity_name().c_str());
            mvprintw(i, 50, "%s", activity->get_time().get_time_start().c_str());
            mvprintw(i, 100, "%s", activity->get_time().get_time_end().c_str());
            i+=2;
        }
        printw("\n\nToday you have %d activities have to do", day_activities.size());
        refresh();
        getch();
        endwin();
    }

}