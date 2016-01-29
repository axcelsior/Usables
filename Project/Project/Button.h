#ifndef INCLUDED_BUTTON
#define INCLUDED_BUTTON
#include "Usable.h"
class Button : public Usable{
public:

	Button(int ID, sf::Texture *texture, sf::Vector2i pos);
	virtual void Render(sf::RenderWindow *mainWindow);
	virtual void Update();
	virtual sf::Vector2i GetPosition();

	virtual bool getInteraction(bool b);
	virtual int getChannelID();

private:
	sf::Sprite mSprite;
	sf::Vector2i mPosition;
	int mChannelID;


};



#endif