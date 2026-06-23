#ifndef NET_MINECRAFT_WORLD_LEVEL_BIOME__ForestBiome_H__
#define NET_MINECRAFT_WORLD_LEVEL_BIOME__ForestBiome_H__

//package net.minecraft.world.level.biome;

#include "Biome.h"
#include "../levelgen/feature/TreeFeature.h"
#include "../levelgen/feature/BirchFeature.h"
#include "../levelgen/feature/BasicTree.h"

class ForestBiome: public Biome
{
public:
    Feature* getTreeFeature(Random* random) {
        if (random->nextInt(5) == 0) {
            return new BirchFeature();
        }
        if (random->nextInt(3) == 0) {
         //   return new BasicTree(false); // temporarily disabled
        }
        return new TreeFeature(false);
    }

    float adjustDepth(float depth) override { return depth + 0.1f; }
    float adjustScale(float scale) override { return scale * 1.2f; }
};

#endif /*NET_MINECRAFT_WORLD_LEVEL_BIOME__ForestBiome_H__*/
