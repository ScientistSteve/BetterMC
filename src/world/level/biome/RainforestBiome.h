#ifndef NET_MINECRAFT_WORLD_LEVEL_BIOME__RainforestBiome_H__
#define NET_MINECRAFT_WORLD_LEVEL_BIOME__RainforestBiome_H__

//package net.minecraft.world.level.biome;

#include "Biome.h"
#include "../../../util/Random.h"
#include "../levelgen/feature/TreeFeature.h"
#include "../levelgen/feature/BasicTree.h"

class RainforestBiome: public Biome
{
public:
    Feature* getTreeFeature(Random* random) {
        if (random->nextInt(3) == 0) {
        //    return new BasicTree(false); // temporarily disabled
        }
        return new TreeFeature(false);
    }
    float adjustDepth(float depth) override { return depth + 0.2f; }
    float adjustScale(float scale) override { return scale * 1.6f; }
};

#endif /*NET_MINECRAFT_WORLD_LEVEL_BIOME__RainforestBiome_H__*/
