#ifndef ARCANUM_OBJECTS_TILE_HPP
#define ARCANUM_OBJECTS_TILE_HPP

#include <Arcanum/Graphics/Sprite.hpp>

namespace arcanum
{
	namespace objects
	{
		class Tile
		{
		public:
			enum
			{
				Width  = 78,
				Height = 40
			};
			const math::Point& getPos();
			void setPos(const math::Point& value);
			const std::shared_ptr<graphics::Sprite> getSprite();
			void setSprite(std::shared_ptr<graphics::Sprite> value);
		private:
			math::Point mPos;
			std::shared_ptr<graphics::Sprite> mBody;
		};
	}
}

#endif    
