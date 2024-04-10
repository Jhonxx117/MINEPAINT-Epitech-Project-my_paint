/*
** EPITECH PROJECT, 2024
** sounds_second
** File description:
** e
*/

#include "../includes/my.h"

int sound_enderpearl(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/enderpearl.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}

int sound_bucket(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/bucket.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}

int sound_c418(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/c418.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}

int sound_oh(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/oh.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}

int sound_eraser(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/eraser.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}
