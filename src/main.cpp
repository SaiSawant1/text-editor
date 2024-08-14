#include <SDL2/SDL.h>
#include <SDL2/SDL_error.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>
#include <cstdio>
#include <cstdlib>
#include <iostream>

void scc(int code) {
  if (code < 0) {
    std::cerr << "SDL ERROR: " << SDL_GetError() << std::endl;
    std::exit(1);
  }
}

void *scp(void *ptr) {
  if (ptr == NULL) {
    std::cerr << "SDL ERROR: " << SDL_GetError() << std::endl;
    std::exit(1);
  }

  return ptr;
}

int main() {

  scc(SDL_Init(SDL_INIT_VIDEO));

  SDL_Window *window = static_cast<SDL_Window *>(scp(
      SDL_CreateWindow("Text Editor", 0, 0, 800, 600, SDL_WINDOW_RESIZABLE)));

  SDL_Renderer *renderer = static_cast<SDL_Renderer *>(
      scp(SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED)));

  bool quit = false;

  while (!quit) {
    SDL_Event event = {0};

    while (SDL_PollEvent(&event)) {
      switch (event.type) {
      case SDL_QUIT: {

      } break;
      }

      scc(SDL_SetRenderDrawColor(renderer, 100, 0, 0, 0));
      scc(SDL_RenderClear(renderer));

      SDL_RenderPresent(renderer);
    }
  }

  SDL_Quit();

  return 0;
}
