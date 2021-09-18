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
    MZ_AUDIO_DEVICE_TYPE_PLAYBACK       = 1,
    MZ_AUDIO_DEVICE_TYPE_LOOPBACK       = 4,
    MZ_AUDIO_DEVICE_TYPE_CAPTURE        = 2,
    MZ_AUDIO_DEVICE_TYPE_FULL_DUPLEX    = MZ_AUDIO_DEVICE_TYPE_PLAYBACK | MZ_AUDIO_DEVICE_TYPE_CAPTURE // 3 //
};

enum mz_audio_device_playback_format
{
    MZ_AUDIO_DEVICE_PLAYBACK_FORMAT_NATIVE_UNKNOWN  = 0,
    MZ_AUDIO_DEVICE_PLAYBACK_FORMAT_U8              = 1,
    MZ_AUDIO_DEVICE_PLAYBACK_FORMAT_S16             = 2,
    MZ_AUDIO_DEVICE_PLAYBACK_FORMAT_S24             = 3,
    MZ_AUDIO_DEVICE_PLAYBACK_FORMAT_S32             = 4,
    MZ_AUDIO_DEVICE_PLAYBACK_FORMAT_F32             = 5,
    MZ_AUDIO_DEVICE_PLAYBACK_FORMAT_COUNT,
};

struct audio_manager
{
    ma_result result;
    ma_decoder decoder;
    ma_device_config config;
    ma_device device;
};

typedef struct audio_manager audio_manager;
typedef ma_uint32 mz_audio_uint32;


audio_manager init_audio_manager(int device_type);

#define MZ_AUDIO_IMPLEMENTION // Remember to comment this before commiting!

#ifdef MZ_AUDIO_IMPLEMENTION

audio_manager init_audio_manager(int device_type, int playback_format, mz_audio_uint32 channels, mz_audio_uint32 sample_rate)
{
    audio_manager buf;
    buf.config = ma_device_config_init(device_type);
    buf.config.playback.format = playback_format;
    buf.config.playback.channels = channels;
    buf.config.sampleRate = sample_rate;

}

#endif

#endif // MZ_AUDIO_H