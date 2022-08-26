#include <gazebo/gazebo.hh>

namespace gazebo {

class MyPlugin : public WorldPlugin {
public:
    MyPlugin() : WorldPlugin() {
        printf("Hello...\n");
    }

    void Load(physics::WorldPtr world, sdf::ElementPtr sdf) { }

};
GZ_REGISTER_WORLD_PLUGIN(MyPlugin)

} // namespace gazebo