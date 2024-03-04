//
// Created by jieke on 02/03/24.
//
#include "gtest/gtest.h"
#include "../Activities_description.h"

TEST(Activities_description, Constructor_test ) {
    Activities_description activity("running", "10:00", "11:00");
    ASSERT_EQ(activity.get_activity_name(), "running");
    ASSERT_EQ(activity.get_activity_time_start(), "10:00");
    ASSERT_EQ(activity.get_activity_time_end(), "11:00");
}

TEST(Activities_description, Setters_test) {
    Activities_description activity("running", "10:00", "11:00");
    activity.set_activity_name("walking");
    activity.set_activity_time_start("12:00");
    activity.set_activity_time_end("13:00");
    ASSERT_EQ(activity.get_activity_name(), "walking");
    ASSERT_EQ(activity.get_activity_time_start(), "12:00");
    ASSERT_EQ(activity.get_activity_time_end(), "13:00");
}


TEST(Activities_description, Getter_test) {
    Activities_description activity("running", "10:00", "11:00");
    ASSERT_EQ(activity.get_activity_name(), "running");
    ASSERT_EQ(activity.get_activity_time_start(), "10:00");
    ASSERT_EQ(activity.get_activity_time_end(), "11:00");
}


