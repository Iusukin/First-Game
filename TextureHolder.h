#pragma once
#ifndef TEXTURE_HOLDER_H
#define TEXTURE_HOLDER_H

#include <SFML/Graphics.hpp>
#include <map>

using namespace sf;
using namespace std;

class TextureHolder
{
private:

	std::map<std::string, Texture> m_Texture;
	static TextureHolder* ms_Instance;

public:
	TextureHolder();
	static Texture& GetTexture( std::string const& filename);
};

#endif 