#include <iostream>
#include <map>
#include "Day_program_of_activities.h"


int main() {
        std::map <int, std::shared_ptr<Day_program_of_activities>> week;
        week[1] = std::make_shared<Day_program_of_activities>(1);
        week[2] = std::make_shared<Day_program_of_activities>(2);
        week[3] = std::make_shared<Day_program_of_activities>(3);
        week[4] = std::make_shared<Day_program_of_activities>(4);
        week[5] = std::make_shared<Day_program_of_activities>(5);
        week[6] = std::make_shared<Day_program_of_activities>(6);
        week[7] = std::make_shared<Day_program_of_activities>(7);
        week[1]->add_activity("Study", "8:00", "10:00");
        week[1]->add_activity("Work", "10:01", "12:00");
        week[1]->add_activity("Lunch", "12:01", "13:00");
        week[1]->add_activity("job", "3:00", "7:00");
        /*if(week[1]->remove_activity("Work")) {
            printf("Activity removed\n");
        } else {
            printf("Activity not found\n");
        }*/
        week[1]->show_program();


}
