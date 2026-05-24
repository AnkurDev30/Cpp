#include <SFML/Graphics.hpp>
#include<iostream>
using namespace sf;
int main()
{
    RenderWindow window(VideoMode(1000,800), "My App");

    while(window.isOpen())
    {
        Event event;

        while(window.pollEvent(event))
        {
            if(event.type == Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        //window.display();
        if(event.type == Event::Closed)
        {
            std::cout<<"hello"<<std::endl;
        }
    }

    return 0;
}