#include <iostream>
void sayhello();

class Say
{
    private:
        char* str;

    public:
        Say( char* s )
        {
            str = s;
        }
        void sayThis( const char* str )
        {
            std::cout << str << "from a static library!\n";
        }

        void sayString();
};
