# ViSP-ProjectionExercise
This is the code for building the dll, that uses ViSP library to project 3D points to 2D, given some camera parameters. We will use cmake to build the project. This is how we go about doing this in windows:

1. Clone the Repository

2. Open Cmake -> In source code field, give "**path-to**/ViSP-ProjectionExercise" -> In the build field, give "**path-to**/ViSP-ProjectionExercise-build".

![Alt text](./images/cmake-img.PNG?raw=true "Screen")

4. Select your version of Visual Studio:

![Alt text](./images/cmake-img_win.PNG?raw=true "Screen")

3. Hit Configure. There is a possibility that you may get Error saying "Could not find a package configuration file provided by "ViSP".....". (if you don't, awesome!)

![Alt text](./images/cmake-dir-not-found.PNG?raw=true "Screen")

4. As a solution, update value of VISP_DIR with "**path-to**/visp-3.0.1-build/install". You'll see something like this:

![Alt text](./images/cmake-with-path.PNG?raw=true "Screen")

5. Hit configure twice, the red lines shoiuld disappear now. Now, hit generate. Finally, it should look something like this:

![Alt text](./images/cmake-generated.PNG?raw=true "Screen")

6. Now goto "**path-to**/ViSP-ProjectionExercise-build" and open ViSP-ProjectionExercise.sln. -> Build -> Build Solution (with Release(X64) configuration).

![Alt text](./images/VS14-BuildProjectFinal.PNG?raw=true "Screen")

7. The required dll can be found in "**path-to**/ViSP-ProjectionExercise-build/Release"

The dll can be used in the Assets folder of your unity project. The functions of the dll can then be imported in unity and used.

[Here](https://github.com/aryamihirsingh/ViSP-UnityPlugin) is the link to the demonstration of the projection from 3D to 2D in unity, using this very dll.

Versions Used:
1. Unity version - 5.5.2f1
2. Microsoft Visual Studio 2015 (14)
3. Cmake 3.3.2
4. ViSP 3.0.1
