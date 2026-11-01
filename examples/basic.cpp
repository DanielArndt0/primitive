#include "primitive.h"

struct Widget
{
};

static_assert(primitive<int>::value, "integer type");
static_assert(primitive<const double>::value, "qualified fundamental type");
static_assert(primitive<void>::value, "void type");
static_assert(!primitive<Widget>::value, "user-defined type");
static_assert(!primitive<int &>::value, "reference type");

int main()
{
    return primitive<char>::value && !primitive<Widget>::value ? 0 : 1;
}
