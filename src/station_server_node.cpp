#include "measurement_station/StationServer.h"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "station_server");
  ros::NodeHandle nh;

  StationServer server(nh, "rplidar", "camera_astra");

  while (ros::ok())
  {
    ros::spinOnce();

    server.performAction();

    ros::Duration(0.1).sleep();
  }

  return 0;
}
