#pragma once
#include "include.h"


int main() {
	Vector2u screenSize = Vector2u(1920, 1080);
	Vector2f screenSizeF = Vector2f(1920, 1080);
	VideoMode vm(screenSize);
	RenderWindow window(vm, "Pong", State::Fullscreen);	
	
	player p1(screenSizeF/2.0f,100);

	Clock clock;

	while (window.isOpen()) {
		while (const optional event = window.pollEvent())
		{
			if (event->is<Event::Closed>() || Keyboard::isKeyPressed(Keyboard::Key::Escape))
				// Quit the game when the window is closed
				window.close();
		}
		Time dt = clock.restart();	

		if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
			p1.moveRight();
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
			p1.moveLeft();
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
			p1.moveUp();
		}
		if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
			p1.moveDown();
		}

		p1.update(dt);

		window.clear();
		window.draw(p1.shape);
		window.display();
	}
	return 0;
}
