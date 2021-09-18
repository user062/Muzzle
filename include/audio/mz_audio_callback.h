#ifndef MZ_AUDIO_CALLBACK_H
#define MZ_AUDIO_CALLBACK_H

#include "../deps/miniaudio/miniaudio.h"

void mz_audio_callback(ma_device* p_device, void* p_output, const void* p_input, ma_uint32 frame_count);

#ifdef MZ_AUDIO_IMPLEMENTION

void mz_audio_callback(audio_device* p_device, void* p_output, const void* p_input, mz_audio_uint32 frame_count)
{

}

#endif


#endif // MZ_AUDIO_CALLBACK_H