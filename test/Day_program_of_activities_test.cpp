//
// Created by jieke on 03/03/24.
//

#include "gtest/gtest.h"
#include "../Day_program_of_activities.h"
TEST(Day_program_of_activities, Constructor_test) {
    Day_program_of_activities day(1);
    ASSERT_EQ(day.get_day_number(), 1);
}

TEST(Day_program_of_activities, Add_activity_test) {
    Day_program_of_activities day(1);
    day.add_activity("running", "10:00", "11:00");
    std::list<std::shared_ptr<Activities_description>> Day_activities = day.get_day_activities();
    ASSERT_EQ(Day_activities.front()->get_activity_name(), "running");
    ASSERT_EQ(Day_activities.front()->get_activity_time_start(), "10:00");
    ASSERT_EQ(Day_activities.front()->get_activity_time_end(), "11:00");
}

TEST(Day_program_of_activities, Remove_activity_test) {
    Day_program_of_activities day(1);
    day.add_activity("running", "10:00", "11:00");
    day.remove_activity("running");
    std::list<std::shared_ptr<Activities_description>> Day_activities = day.get_day_activities();
    ASSERT_EQ(Day_activities.size(), 0);
}

TEST(Day_program_of_activities, Is_inserted_test) {
    Day_program_of_activities day(1);
    day.add_activity("running", "10:00", "11:00");
    ASSERT_TRUE(day.is_inserted("running"));
}

// fammi il test delll'exception per il tempo inizio e tempo finale


TEST(Day_program_of_activities, Exeception_test) {
    Day_program_of_activities day(1);
    ASSERT_THROW(day.add_activity("running", "11:00", "10:00"), std::logic_error);
}


