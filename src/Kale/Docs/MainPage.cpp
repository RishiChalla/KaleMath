/*
   Copyright 2022 Rishi Challa
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
	   http://www.apache.org/licenses/LICENSE-2.0
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

/**
 * @mainpage Kale Math Documentation
 * 
 * @section s1 What is Kale Math?
 * Kale Math is a library providing linear algebra classes and methods along with some basic collision detection utilities.
 * The source code is simply copied and pasted from the source of the WIP Kale game engine.
 * 
 * @section s2 Getting Started
 * I recommend using CMake and git submodules to use this library if you choose to use it. Assuming you already have a project
 * setup with a `CMakeLists.txt`, simply open a terminal/command prompt in your project's directory and add this library as
 * a submodule:
 * ```sh
 * git submodule init
 * git submodule add https://github.com/RishiChalla/KaleMath
 * ```
 * 
 * Then in your `CMakeLists.txt` you'll want to add the library using `add_subdirectory()`:
 * ```cmake
 * add_subdirectory(KaleMath/)
 * target_link_libraries(YourProject KaleMath)
 * ```
 * 
 * @section s3 Usage
 * Simply include the specific class you want to use, or just import the whole library as a whole (since it is extremely small):
 * ```c++
 * #include <iostream>
 * #include <Kale/Math/Math.hpp>
 * 
 * int main() {
 *     using namespace Kale;
 *     Vector3f myVec(1.0f, -2.0f, 3.0f);
 *     std::cout << myVec << std::endl;
 * }
 * ```
 * 
 */
