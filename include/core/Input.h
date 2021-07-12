#pragma once
#include "Applet.h"
#include "../backend.h"

static u64 __pad_down;
static u64 __pad_up;

void update_input();
int button_down(HidNpadButton button);
int button_up(HidNpadButton button);