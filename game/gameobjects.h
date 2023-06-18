#pragma once
#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

typedef struct {
    int x;
    int y;
} GmRabbit;

typedef struct {
    int x;
    int y;
} DWolf;

typedef struct {
    int x;
    int y;
} GmWolf;

typedef struct {
    int x;
    int y;
} GmCarrot;

typedef struct {
    int x;
    int y;
} GmEmpty;

void GmRabbit_Draw(void);
void DWolf_Draw(void);
void GmWolf_Draw(void);
void GmCarrot_Draw(void);
void GmEmpty_Draw(void);

void GmRabbit_Init(GmRabbit* rabbit, int x, int y);
void DWolf_Init(DWolf* wolf, int x, int y);
void GmWolf_Init(GmWolf* wolf, int x, int y);
void GmCarrot_Init(GmCarrot* carrot, int x, int y);
void GmEmpty_Init(GmEmpty* empty, int x, int y);

#endif /* GAMEOBJECTS_H */