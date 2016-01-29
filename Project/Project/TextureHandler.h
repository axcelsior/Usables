#ifndef TEXTUREHANDLER_H
#define TEXTUREHANDLER_H

#include <SFML/Graphics.hpp>

class TextureHandler
{
public:
	TextureHandler();
	~TextureHandler();
	void Initialize();
	sf::Texture mTileTexture, mSidebarTexture, mSelectorTexture, mSaveTexture, mCat1Texture;
	sf::Texture* GetTexture(int ID);
};

#endif