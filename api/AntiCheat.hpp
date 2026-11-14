#pragma once

#include <Geode/loader/Event.hpp>
#include <Geode/loader/Dispatch.hpp>
#include <Geode/loader/Mod.hpp>
#include <ccTypes.h>

#define MY_MOD_ID "thesillydoggo.qolmod"

namespace qolmod::api
{
    void enableAntiCheat(geode::Mod* mod = geode::Mod::get());
    void disableAntiCheat(geode::Mod* mod = geode::Mod::get());
};
