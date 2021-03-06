#include <stdio.h>
#include "game.h"
#include "resource.h"

void (*current_scene_proc)(void);

uint8_t screenshot[640 * 480 * 4];

void init_game() {
  current_scene_proc = splash_proc;
}

void main_proc() {
  current_scene_proc();
  char fps_buf[32];
  sprintf(fps_buf, "FPS: %d", gGetFPS());
  gDrawString(20, 20, fps_buf, G_WHITE);
}

