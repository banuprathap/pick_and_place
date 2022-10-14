#include "ros/ros.h"
#include "challenge/add_boxes_srv.h"

bool add_boxes(challenge::add_boxes_srv::Request &req, challenge::add_boxes_srv::Response &res) {
        ROS_INFO("Running add_boxes_srv Handler");
        res.return_value = "Success";
        return true;
}

int main(int argc, char **argv) {
        ros::init(argc, argv, "add_boxes_server");
        ros::NodeHandle nh;
        ros::ServiceServer service = nh.advertiseService("challenge/add_boxes", add_boxes);
        ROS_INFO("add_boxes_server has started");
        ros::spin();
        return 0;
}