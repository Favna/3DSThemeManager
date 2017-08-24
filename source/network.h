#pragma once

#include "global.h"
#include "theme.h"

#include "lib/json.hpp"
using nlohmann::json;

extern string update;
extern int downloading;

Result HTTPGet(vector<char>&, string, string* fileName = NULL, int* progress = NULL);

void checkForUpdate(void*);
void installUpdate();

void downloadThemeFromURL(void*);
