/*
** EPITECH PROJECT, 2024
** sound-lib
** File description:
** e
*/

#include "../includes/my.h"

int sound_pop(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/pop.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}

int sound_click(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/minecraft_click.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}

int sound_cobble(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/cobblestone.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}

int sound_grass(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/grass.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}

int sound_ghast(void)
{
    sfSound *sound;
    sfSoundBuffer *soundbuffer;

    soundbuffer = sfSoundBuffer_createFromFile("sound/ghast.ogg");
    sound = sfSound_create();
    sfSound_setBuffer(sound, soundbuffer);
    sfSound_play(sound);
    return 0;
}
