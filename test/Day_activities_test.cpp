//
// Created by jieke on 03/03/24.
//

#include "gtest/gtest.h"
#include "../Day_activities.h"
TEST(Day_activities, Constructor_test) {
    Day_activities day(1);
    ASSERT_EQ(day.get_day_number(), 1);
}

TEST(Day_activities, Add_activity_test) {
    Day_activities day(1);
    day.add_activity("running", "10:00", "11:00");
    std::list<std::shared_ptr<Activities_description>> Day_activities = day.get_day_activities();
    ASSERT_EQ(Day_activities.front()->get_activity_name(), "running");
    ASSERT_EQ(Day_activities.front()->get_time().get_time_start(), "10:00");
    ASSERT_EQ(Day_activities.front()->get_time().get_time_end(), "11:00");
}

TEST(Day_activities, Remove_activity_test) {
    Day_activities day(1);
    day.add_activity("running", "10:00", "11:00");
    day.add_activity("run", "13:00", "16:00");
    day.remove_activity("running");

    std::list<std::shared_ptr<Activities_description>> Day_activities = day.get_day_activities();
    ASSERT_EQ(Day_activities.size(), 0);
}

TEST(Day_activities, Is_inserted_test) {
    Day_activities day(1);
    day.add_activity("running", "10:00", "11:00");
    day.add_activity("run", "10:00", "11:00");
    ASSERT_TRUE(day.is_inserted("running"));
}

TEST(Day_activities, Exeception_test) {
    Day_activities day(1);
    ASSERT_THROW(day.add_activity("running", "11:00", "10:00"), std::logic_error);
}


