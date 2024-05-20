#ifndef PORJECT2121_TEXTURES_H
#define PORJECT2121_TEXTURES_H
#include<SFML/Graphics.hpp>

class TextureHolder{
private:
    sf::Texture m_player_texture;
    sf::Texture m_lvl1_border_texture;
    sf::Texture m_lvl1_background_texture;
    sf::Texture m_flying_eye_texture;
    sf::Texture m_bullet_texture;
    static TextureHolder* m_texture_holder;

    TextureHolder() = default;
    TextureHolder(const TextureHolder&);
public:
    static TextureHolder* instance();

    void setTextures();

    sf::Texture player_textures() const { return m_player_texture; };
    sf::Texture lvl1_border_texture() const { return m_lvl1_border_texture; };
    sf::Texture lvl1_background_texture() const { return m_lvl1_background_texture; };
    sf::Texture flying_eye_texture() const { return m_flying_eye_texture; };
    sf::Texture bullet_texture() const { return m_bullet_texture; };
};


#endif //PORJECT2121_TEXTURES_H
