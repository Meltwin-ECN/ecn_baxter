/**========================================================================
 * ?                                ABOUT
 * @author         :  Geoffrey Côte
 * @email          :  geoffrey.cote@centraliens-nantes.org
 * @repo           :  https://github.com/Baxterminator/ecn_baxter/
 * @createdOn      :  19/02/2023
 * @description    :  ROS2 part of the GameMaster
 *========================================================================**/
#include "ecn_baxter/ui/file_loader_wrapper.hpp"
#include <ecn_baxter/game/game_master_2.hpp>
#include <qpushbutton.h>

namespace ecn_baxter::game {

GameMaster_2::GameMaster_2(rclcpp::NodeOptions opts)
    : rclcpp::Node("game_master_2", opts), SetupPointsClient(get_logger()) {
  ptn_setup = rclcpp_action::create_client<PointsSetup>(this, "points_setup");
}
} // namespace ecn_baxter::game