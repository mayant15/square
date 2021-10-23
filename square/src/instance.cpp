#include <square/instance.h>

namespace sq
{
    Instance create_instance(const InitOptions &options)
    {
        // NOTE: Return value optimization can happen here. Trust the compiler, no need to complicate code with move :)
        // https://stackoverflow.com/questions/10476665/avoiding-copy-of-objects-with-the-return-statement
        Instance instance{};
        instance.width = options.width;
        instance.height = options.height;
        instance.clearColor = options.clearColor;
        return instance;
    }
} // namespace sq
