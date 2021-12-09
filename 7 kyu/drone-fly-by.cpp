#include <string>
#include <iostream>


std::string flyBy(std::string lamp, std::string drone) {
    for (size_t i = 0; i < lamp.size(); i++)
    {
        char c = drone[i];
        if(c == '=') {
            lamp[i] = 'o';
        } else if(c == 'T') {
          lamp[i] = 'o';
          break;
        } else {
            break;
        }
    }
    return lamp;
}

int main(int argc, char *argv[])
{
    std::cout << flyBy("xxxx", "") << std::endl;
}