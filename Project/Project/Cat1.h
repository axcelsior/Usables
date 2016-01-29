#ifndef INCLUDED_CAT1
#define INCLUDED_CAT1

#include <SFML\Graphics.hpp>
#include "GameObject.h"

class Cat1 : public GameObject
{
public:
	Cat1(sf::Texture *texture, int x, int y, int ID);
	~Cat1();
	virtual void Render(sf::RenderWindow *mainWindow);
	virtual void Update();
	virtual void move(int x, int y);
	virtual sf::Vector2i GetPosition();
	bool interacting();

	bool isInteracting = false;
private:
	sf::Sprite mSprite;
	int mID;
	sf::Vector2i mPosition;

	
};

#endif