#include "say.h"

int main()
{
    extern Say libsay;
    Say localsay = Say( "Local instance of say" );
    sayhello();
    libsay.sayString();
    localsay.sayString();
    return 0;
}
