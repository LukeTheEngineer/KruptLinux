# KruptLinux
global equivalent for Krupt. 

A few months ago I republished a more organised repository regarding the Krupt Console helper. In that repository I mentioned that I would be working on a linux equivalent in the future. 
Here today I present you with KruptLinux. This command line interface was completely overhauled and now has an independant daemon to power it. 

This repo is supported by most operating system out there and building it very simple.

**[WITHOUT WINDOWS VISUAL STUDIO]**

1. Clone the repo with the command: **git clone https://github.com/LukeTheEngineer/KruptLinux**
2. change into the directory once finished: **cd KruptLinux**
3. make a folder named build: **mkdir build**
4. change into the build directory: **cd build**
5. run the CMake command: **cmake ..**
6. run make when the files are generated: **make**

**[WITH WINDOWS VISUAL STUDIO]**

**NOTE**: In the CMakeLists.txt you must change the CMAKE_SUPPRESS_REGENERATION to OFF in order to generate the solution file.

1. Clone the repo with the command: **git clone https://github.com/LukeTheEngineer/KruptLinux**
2. change into the directory once finished: **cd KruptLinux**
3. make a folder named build: **mkdir build**
4. change into the build directory: **cd build**
5. run the CMake command: **cmake ..**
6. run the solution with **Visual Studio**
7. build the solution **Build>>Build Solution** or **CTRL+Shift+B**

And you should be finished!!!
