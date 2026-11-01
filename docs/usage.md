# primitive Usage

`primitive<T>` identifies fundamental C++ types at compile time, including `void` and `decltype(nullptr)`.

## Check a Type

```cpp
#include "primitive.h"

static_assert(primitive<int>::value, "primitive type");
static_assert(primitive<const double>::value, "qualified primitive type");
```

## User-Defined and Reference Types

```cpp
struct Widget {};

static_assert(!primitive<Widget>::value, "class type");
static_assert(!primitive<int&>::value, "reference type");
```

Top-level `const` and `volatile` qualifiers are ignored. References, pointers, arrays, enumerations, and class types are not fundamental types.
