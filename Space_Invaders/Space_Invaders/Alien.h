#pragma once

#include<raylib.h>

class Alien
{

public:

	Alien(int type, Vector2 position);
	void Update(int direction);
	void Draw();
	int getType();
	Rectangle getRect();
	static void UnloadImages();
	static Texture2D alienImages[3];
	int type;
	Vector2 position;
	

private:


};

