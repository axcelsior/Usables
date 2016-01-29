#include "Button.h"
#include "Channels.h"

int INTERACTION_RADIUS = 20;


Button::Button(int channel, sf::Texture *texture,sf::Vector2i vec) :
	mChannelID(channel),
	mPosition(vec){
	mSprite.setPosition(sf::Vector2f(mPosition));
	mSprite.setTexture(*texture);
	
}


int Button::getChannelID(){
	return mChannelID;
}

bool Button::getInteraction(bool b){
	
	if (!b){
		Channels::setActive(mChannelID, false, 1);
		return true;
	}
	else return false;
	/*
		if (length(mPosition, cat->GetPosition()) < INTERACTION_RADIUS){
			if (cat->interacting()){
					// activate channel
					Channels::setActive(mChannelID, false, 1);
					// play sound
					return true;
			}
		}
		*/
}


sf::Vector2i Button::GetPosition(){
	return mPosition;
}

void Button::Render(sf::RenderWindow *window){

	window->draw(mSprite);
}
void Button::Update(){

}