#include "core/Input.h"

int button_down(HidNpadButton button)
{
    if (__pad_down & button) return 1;
    else return 0;
}

void update_input()
{
    padUpdate(__get_pointer_to_pad_state());

    __pad_down = padGetButtonsDown(__get_pointer_to_pad_state());
    __pad_up = padGetButtonsUp(__get_pointer_to_pad_state());
}

int button_up(HidNpadButton button)
{
    if (__pad_up & button) return 1;
    else return 0;
}