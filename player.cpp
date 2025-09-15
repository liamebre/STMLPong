#include "player.h"

player::player() {
	size = 100;
	position = Vector2f(0, 0);
	shape.setRadius(size);
	shape.setFillColor(Color::Red);
}

player::player(Vector2f _position, float _size) {
	size = _size;
	position = _position;
	shape.setRadius(size);
	shape.setFillColor(Color::White);
}

void player::setSize(int _size)
{
	size = _size;
	shape.setRadius(size);
}

void player::moveRight()
{
	moveR = true;
}

void player::moveLeft()
{
	moveL = true;
}
void player::moveUp()
{
	moveU= true;
}

void player::moveDown()
{
	moveD = true;
}

void player::update(Time dt)
{

	if (moveR) {
		position.x += 500 * dt.asSeconds();
		moveR = false;	
	}
	if (moveL) {
		position.x -= 500 * dt.asSeconds();
		moveL = false;
	}
	if (moveU) {
		position.y -= 500 * dt.asSeconds();
		moveU = false;
	}
	if (moveD) {
		position.y += 500 * dt.asSeconds();
		moveD = false;
	}
	shape.setPosition(position);
}	
