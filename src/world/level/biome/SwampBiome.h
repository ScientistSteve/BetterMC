#ifndef NET_MINECRAFT_WORLD_LEVEL_BIOME__SwampBiome_H__
#define NET_MINECRAFT_WORLD_LEVEL_BIOME__SwampBiome_H__

//package net.minecraft.world.level.biome;

#include "Biome.h"
#include "../tile/Tile.h"

class SwampBiome: public Biome {
public:
    SwampBiome() {
        topMaterial = (char) Tile::grass->id;
        material    = (char) Tile::dirt->id;
        leafColor   = 0x6A7F39;
    }

    float adjustDepth(float depth) override { return depth - 0.3f; }
    float adjustScale(float scale) override { return scale * 0.4f; }

    int getSkyColor(float temp) override { return 0xA1BCB1; }
};

#endif /*NET_MINECRAFT_WORLD_LEVEL_BIOME__SwampBiome_H__*/
