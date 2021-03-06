// Copyright 2018 The Darwin Neuroevolution Framework Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// portable abstractions for platform specific code

#pragma once

#include <string>
using namespace std;

namespace pal {

//! Returns user home directory path
string userHomePath();

//! Returns true if AVX2 is detected
bool detectAvx2();

//! Sets an enviroment variable
void setenv(const char* name, const char* value);

}  // namespace pal
