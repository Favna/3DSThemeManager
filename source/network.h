// Copyright (C) 2017 ErmanSayin
// 
// This file is part of Themely.
// 
// Themely is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Themely is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Themely.  If not, see <http://www.gnu.org/licenses/>.
// 

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
