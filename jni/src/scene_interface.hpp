#ifndef SCENE_INTERFACE_HPP
#define SCENE_INTERFACE_HPP

#include <SDL.h>
#include "inputstate.hpp"

class SceneInterface
{
public:
	SceneInterface() {}
	virtual ~SceneInterface() {}
	
	virtual void Init(SDL_Window* window, SDL_Renderer* renderer) = 0;
	virtual void Update(const InputState& inputs, Uint32 timestamp) = 0;
	virtual void Render(SDL_Renderer *renderer) = 0;
	virtual bool Running() const = 0;
};

#endif // SCENE_INTERFACE_HPP
