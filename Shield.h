#pragma once
#include "settings.h"

class Shield {
public:
	Shield(sf::Vector2f playercenterpos);
	void update();
	void draw(sf::RenderWindow& window);
	void activate();
	bool isActive(); 
	void desActivate();
	void setPosition(sf::Vector2f pos);
private:
	sf::Sprite sprite;
	sf::Texture texture;
	sf::Clock timer;
	bool active = false;
};
Shield::Shield(sf::Vector2f playercenterpos) {
	texture.loadFromFile(IMAGES_FOLDER + SHIELD_BONUS_FILE_NAME);
	sprite.setTexture(texture);
	sf::FloatRect bounds = sprite.getLocalBounds();
	sprite.setOrigin(bounds.width / 2, bounds.height / 2);
	sprite.setPosition(playercenterpos);
}
void Shield::activate() { active = true; }

bool Shield::isActive() { return active; }

void Shield::desActivate() { active = false; }

void setPosition(sf::Vector2f pos) { sprite.setPosition(pos); }
void update() {};
void draw(sf::RenderWindow& window) { window.draw(sprite); }