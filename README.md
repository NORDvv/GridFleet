# GridFleet

**GridFleet** is a learning-focused portfolio project exploring **Multi-Agent Path Finding (MAPF)** with **Python** and **ROS 2**. The project simulates multiple robots moving on a grid toward their goals while avoiding collisions, and visualizes their state in **RViz** using custom markers.

This project was built to strengthen my understanding of multi-robot coordination, ROS 2 system design, custom interfaces, launch files, and visualization pipelines. It is designed as both a technical learning exercise and a portfolio piece.

## Why I built this

I built GridFleet for two reasons:

1. **Learning** — to get hands-on practice with MAPF concepts, ROS 2 architecture, and building a non-trivial robotics software project from scratch.
2. **Portfolio value** — to create a project that demonstrates algorithmic thinking, system decomposition, and practical robotics-adjacent software engineering.

## Features

* Grid-based multi-robot simulation
* Up to 6 robots, inspired by small-team robotic soccer scale
* Independent ROS 2 nodes for world, planner, robots, and visualization
* Custom ROS 2 messages and services
* Conflict-aware planning with a lightweight CBS-style approach
* RViz visualization of:

  * robot positions
  * goals
  * planned paths
  * obstacles
* Paused-start simulation for cleaner demos

## Tech stack

* **Python**
* **ROS 2 Humble**
* **rclpy**
* **RViz 2**
* Custom ROS 2 interfaces (`msg` / `srv`)

## Architecture

GridFleet is split into several ROS 2 components:

* Planner Node
  Produces paths for robots based on the current scenario and conflict-handling logic.

* World Node
  Owns the simulation loop, advances the world step-by-step, and coordinates progression.

* Robot Node
  Represents an individual robot as an independent ROS 2 node.

* Visualiser Node
  Publishes RViz markers for robots, goals, paths, and obstacles.

* Gridfleet Interfaces
  Contains custom message and service definitions used by the system.

This structure was chosen deliberately to practice modular ROS 2 design rather than building everything into one script.

## Visualization

The current RViz visualization includes:

* **vertical cylinder markers** for robots
* **sphere markers** for goals
* **line strips** for planned paths
* **cube-list markers** for obstacles

The simulation currently uses discrete grid-step movement, so robots “jump” from one cell to another instead of moving continuously.

## How it works

At a high level:

1. A scenario defines the grid, obstacles, robot start positions, and goals.
2. The planner generates paths.
3. The world node advances the simulation step by step.
4. Robot nodes publish their states.
5. The visualizer node renders the system in RViz.

## Running the project

### 1. Build the workspace

```bash
cd ros2_ws
source /opt/ros/humble/setup.bash
colcon build
source install/setup.bash
```

### 2. Launch the system

```bash
ros2 launch gridfleet gridfleet_system.launch.py
```

### 3. Start the paused simulation

If the world starts in paused mode, begin execution with:

```bash
ros2 service call /start_simulation std_srvs/srv/Trigger "{}"
```

## Example capabilities

The current version can:

* load a grid scenario with obstacles
* simulate multiple robots at once
* avoid simple conflicts between robots
* display the evolving simulation in ROS 2 / RViz
* bring the full system up from a single launch file

## What I learned

This project helped me practice and better understand:

* ROS 2 node-based architecture
* custom message and service design
* launch file orchestration
* debugging multi-node systems
* RViz marker-based visualization
* representing MAPF concepts in working code
* separating planning, simulation, and presentation responsibilities

## Limitations

Current limitations include:

* movement is discrete rather than continuous
* the planner uses a simplified CBS-style approach rather than a full research-grade implementation
* scenarios are currently defined in code rather than loaded from external map files
* the visualization is functional and portfolio-friendly, but not yet highly polished

## Future improvements

Possible next steps:

* smoother animation between grid cells
* richer scenario loading and map formats
* improved conflict resolution and stronger CBS support
* pause / resume / reset controls
* benchmarking different MAPF strategies
* PettingZoo or reinforcement learning experiments on top of the simulator

## Acknowledgements

This project is a personal learning and portfolio project.

It was inspired in part by academic coursework and by the broader MAPF field. The underlying problem of multi-agent path finding is a well-established research area and is not my original idea. The implementation, ROS 2 architecture, simulation flow, and visualization in this repository were built by me as a hands-on engineering project.

## License

MIT License. See LICENSE for details.
