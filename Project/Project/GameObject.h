#ifndef INCLUDED_GAMEOBJECT
#define INCLUDED_GAMEOBJECT

#include <iostream>
#include <vector>
#include "Entity.h"

class GameObject : public Entity
{
public:
	GameObject();
	~GameObject();
	virtual void Render(sf::RenderWindow *mainWindow) = 0;
	virtual void Update() = 0;
	virtual sf::Vector2i GetPosition() = 0;
private:

};

#endif