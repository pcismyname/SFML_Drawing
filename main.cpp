#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1024, 786), "idk what am i doing");

    sf::Texture b;
    sf::Texture illu;
    sf::Vector2u window_size = window.getSize();
    b.loadFromFile("C:\\Users\\chids\\OneDrive\\Desktop\\test_sfml\\SFML_Drawing\\picture\\xp.jpg");
    illu.loadFromFile("C:\\Users\\chids\\OneDrive\\Desktop\\test_sfml\\SFML_Drawing\\picture\\illu3.jpg");

    //////////////////////////
    /*set background*/
    sf::Sprite background(b);
    background.setOrigin(window_size.x / 2, window_size.y / 2);

    /*start drawing !!!!*/
    sf::CircleShape head(100.f, 3);
    sf::CircleShape eye1(10.f);
    sf::CircleShape eye2(10.f);
    sf::CircleShape nose(12.f, 3);
    sf::RectangleShape body;
    sf::CircleShape ear1(20.f,3);
    sf::CircleShape ear2(20.f,3);
    sf::CircleShape ball(100);
    sf::RectangleShape arm[4];


    body.setSize(sf::Vector2f(150.f, 300.f));
    arm[0].setSize(sf::Vector2f(50.f, 150.f));
    arm[1].setSize(sf::Vector2f(50.f, 150.f));
    arm[2].setSize(sf::Vector2f(50.f, 200.f));
    arm[3].setSize(sf::Vector2f(50.f, 200.f));


    head.setFillColor(sf::Color(255, 165, 0));
    head.setOutlineThickness(7.f);
    head.setOutlineColor(sf::Color(150, 75, 0));

    eye1.setOutlineThickness(5.f);
    eye2.setOutlineThickness(5.f);
    body.setOutlineThickness(15.f);

    eye1.setOutlineColor(sf::Color(255,255,255));
    eye2.setOutlineColor(sf::Color(255,255,255));
    body.setOutlineColor(sf::Color(255,128,0));
    eye1.setFillColor(sf::Color(0,0,0));
    eye2.setFillColor(sf::Color(0,0,0));
    nose.setFillColor(sf::Color(255, 0, 0));
    body.setFillColor(sf::Color(255, 204, 153));
    ear1.setFillColor(sf::Color(0,0,255));
    ear2.setFillColor(sf::Color(0,0,255));
    ball.setTexture(&illu);
    arm[0].setFillColor(sf::Color(255,255,0));
    arm[1].setFillColor(sf::Color(255,255,0));
    arm[2].setFillColor(sf::Color(255,255,0));
    arm[3].setFillColor(sf::Color(255,255,0));


    arm[1].setRotation(60.f);
    arm[0].setRotation(-60.f);
    head.setRotation(180.f);
    head.setPosition(512.f, 350.f);
    eye1.setPosition(380.f, 220.f);
    eye2.setPosition(420.f, 220.f);
    nose.setPosition(400.f,280.f);
    body.setPosition(335.f,310);
    ear1.setPosition(320,165);
    ear2.setPosition(460,165);
    ball.setPosition(600,20);
    arm[0].setPosition(200,300);
    arm[1].setPosition(600,250);
    arm[2].setPosition(435,600);
    arm[3].setPosition(330,600);






    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(background);
        window.draw(arm[0]);
        window.draw(arm[1]);
        window.draw(arm[2]);
        window.draw(arm[3]);
        window.draw(body);
        window.draw(head);
        window.draw(eye1);
        window.draw(eye2);
        window.draw(nose);
        window.draw(ear1);
        window.draw(ear2);
        window.draw(ball);

        window.display();
    }

    return 0;
}
