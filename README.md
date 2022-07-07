# Sample Native Dynamic Library

An example of and explanation for how to create a NuGet package containing a dynamic library that can be linked into a C++ project.

## Quick-Start

```
Install-Package i343-native-dynamic-library
```

```cpp
#include <i343/dynamic_math/mathematics.h>

void foo()
{
    const double sum = i343::dynamic_math::mathematics::add(42.0, 27.6);
}
```
