#pragma once
#include <string>
#include <SDL.h>

class Window {
public:
	Window(const std::string &title, int width, int height);
	~Window();

	void pollEvents();

	inline bool isClosed() const { return _closed; }

	void clear() const;
	

private:
	std::string _title;
	int _width = 800;
	int _height =600;

	bool _closed = false;

	SDL_Window *_window = nullptr;

	bool init();

	SDL_Renderer *_renderer = nullptr;
};