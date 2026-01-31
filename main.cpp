#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Coop RPG Test");
    
    sf::CircleShape player1(30.f);
    player1.setFillColor(sf::Color::Green);
    player1.setPosition(100, 300);
    
    sf::CircleShape player2(30.f);
    player2.setFillColor(sf::Color::Blue);
    player2.setPosition(400, 300);
    
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            
            // Управление игроком 1
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::W)
                    player1.move(0, -10);
                if (event.key.code == sf::Keyboard::S)
                    player1.move(0, 10);
                if (event.key.code == sf::Keyboard::A)
                    player1.move(-10, 0);
                if (event.key.code == sf::Keyboard::D)
                    player1.move(10, 0);
                
                // Управление игроком 2
                if (event.key.code == sf::Keyboard::Up)
                    player2.move(0, -10);
                if (event.key.code == sf::Keyboard::Down)
                    player2.move(0, 10);
                if (event.key.code == sf::Keyboard::Left)
                    player2.move(-10, 0);
                if (event.key.code == sf::Keyboard::Right)
                    player2.move(10, 0);
            }
        }
        
        window.clear(sf::Color::Black);
        window.draw(player1);
        window.draw(player2);
        window.display();
    }
    
    return 0;
}