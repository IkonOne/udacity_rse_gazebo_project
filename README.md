# Udacity Robotics Software Engineer - Gazebo Project

Built on PopOS! 22.04 using gazebo 11.

## Requirements

* One user created model using physics joints
* One interior building with enough space for a robot to move
* One Gazebo plugin that prints hello when loaded
* One world with:
  * The building
  * Two copies of the model
  * One extra model from the gazebo models
  * That loads the plugin
  
## Usage

1. In bash, navigate to the root folder of this project.
2. execute `source .bashrc_gazebo_project`
3. execute `gazebo myrobot/world/myworld.world --verbose`

This will result in the world being loaded...
