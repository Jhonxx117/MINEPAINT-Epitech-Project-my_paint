/*
** EPITECH PROJECT, 2024
** color.h
** File description:
** e
*/

#include "../../includes/incluall.h"
#pragma once

typedef struct color_s {
    bool white;
    bool blue;
    bool purple;
    bool green;
    bool yellow;
    bool black;
    bool red;
    bool orange;
    bool pink;
} color_t;

typedef struct shape_s {
    bool circle;
    bool triangle;
    bool square;
    bool rectangle;
} shape_t;

typedef struct tool_s {
    bool cursor;
    bool pencil;
    bool bucket;
    bool eraser;
} tool_t;
