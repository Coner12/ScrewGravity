#pragma once

struct config_t {
    bool enabled = false;
    bool gravitySetting = false;
    bool frozen = false;
    int upSpeed = 0;
    //just so i can call the isRoom from other scripts
    bool isRoom = false;
};

extern config_t config;

void SaveConfig();
bool LoadConfig();