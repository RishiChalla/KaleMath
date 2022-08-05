# KaleMath
A standalone extract of the math utilities in the Kale engine (WIP). Open source under the Apache 2 license.

## What is Kale Math?
Kale Math is a library providing linear algebra classes and methods along with some basic collision detection utilities.
The source code is simply copied and pasted from the source of the WIP Kale game engine.

## Getting Started
I recommend using CMake and git submodules to use this library if you choose to use it. Assuming you already have a project
setup with a `CMakeLists.txt`, simply open a terminal/command prompt in your project's directory and add this library as
a submodule:
```shell
git submodule init
git submodule add https://github.com/RishiChalla/KaleMath
```

Then in your `CMakeLists.txt` you'll want to add the library using `add_subdirectory()`:
```cmake
add_subdirectory(KaleMath/)
target_link_libraries(YourProject KaleMath)
```

## Documentation
Doxygen documentation can be generated using the `doxygen` command from within the `doc` directory:
```shell
cd doc/
doxygen
```

The main page will then be found in `doc/generated/html/index.html`.

## Usage
Simply include the specific class you want to use, or just import the whole library as a whole (since it is extremely small):
```c++
#include <iostream>
#include <Kale/Math/Math.hpp>

int main() {
    using namespace Kale;
    Vector3f myVec(1.0f, -2.0f, 3.0f);
    std::cout << myVec << std::endl;
}
```
