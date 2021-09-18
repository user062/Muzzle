#ifndef MZ_AUDIO_H
#define MZ_AUDIO_H

/*
mz_audio is a part of the Muzzle Suite.

It is not a seprate library like MuzzleUI though.
but it is not included in Muzzle.h unless if you
========

#define MZ_SUPPORT_AUDIO

========
*/

#include "../deps/miniaudio/miniaudio.h"

enum mz_audio_device_type
{
    MZ_AUDIO_DEVICE_TYPE_PLAYBACK = 1,
    MZ_AUDIO_DEVICE_TYPE_LOOPBACK = 4,
    MZ_AUDIO_DEVICE_TYPE_FULL_DUPLEX = 3,
    MZ_AUDIO_DEVICE_TYPE_CAPTURE = 2
};

struct audio_manager
{
    ma_result result;
    ma_decoder decoder;
    ma_device_config config;
    ma_device device;
};

typedef audio_manager audio_manager;
typedef ma_uint32 mz_audio_uint32_pro;


audio_manager init_audio_manager(int device_type);

#define MZ_AUDIO_IMPLEMENTION // Remember to comment this before commiting!

#ifdef MZ_AUDIO_IMPLEMENTION

audio_manager init_audio_manager(int device_type)
{
    audio_manager buf;
    buf.config = ma_device_config_init()
}

#endif

#endif // MZ_AUDIO_H