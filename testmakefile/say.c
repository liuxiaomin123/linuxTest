#include "say.h"

void Say::sayString()
{
    std::cout << str << std::endl;
}

Say libsay( "Library instance of Say" );
