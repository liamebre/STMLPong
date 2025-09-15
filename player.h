#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <vector>
using namespace sf;	

class player
{


public:

	Vector2f position;
	float size;
	CircleShape shape;
	bool moveL = false;
	bool moveR = false;
	bool moveU = false;
	bool moveD = false;


	player();
	player(Vector2f _position, float _size);
	void setSize(int size_);
	void moveRight();
	void moveLeft();
	void moveUp();
	void moveDown();
	void update(Time dt);

};

