# primitive

A lightweight, header-only fundamental type detection utility for C++11 and later.

primitive identifies fundamental C++ types, including cv-qualified fundamental types.

## Requirements

- C++11 or later
- CMake 3.16 or later for CMake integration

## Usage

```cpp
#include "primitive.h"

static_assert(primitive<int>::value, "fundamental type");
static_assert(!primitive<int*>::value, "pointer type");
```

For more examples and API documentation, see [Usage Documentation](docs/usage.md).

## Manual Integration

Download [primitive.h](https://github.com/DanielArndt0/primitive/blob/main/include/primitive.h) from the repository and add it to your project's include directory.

Include the header using `#include "primitive.h"`. No separate compilation is required.

## CMake Integration

primitive can be integrated directly from GitHub using CMake's `FetchContent` module.

Add the following to your project's `CMakeLists.txt`:

```cmake
include(FetchContent)

FetchContent_Declare(
    primitive
    GIT_REPOSITORY https://github.com/DanielArndt0/primitive.git
    GIT_TAG v1.0.0
)

FetchContent_MakeAvailable(primitive)

target_link_libraries(my_target PRIVATE primitive::primitive)
```

Replace `my_target` with your application's CMake target.

If you already have the primitive source directory inside your CMake project, you can add it instead:

```cmake
add_subdirectory(path/to/primitive)
target_link_libraries(my_target PRIVATE primitive::primitive)
```

primitive is header-only and does not require a separately compiled binary.

## Compatibility

primitive requires C++11 or later and uses the standard <type_traits> header.

## Disclaimer

primitive is developed for educational purposes and experimentation with template specialization. It is not intended to replace std::is_fundamental.
