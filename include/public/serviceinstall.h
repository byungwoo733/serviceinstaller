// Copyright (c) 2010-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#include <string>
#include <iostream>
#include <fstream>
#include <dirent.h>
#include <stdlib.h>
#include <errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <glib.h>
#include <luna-service2/lunaservice.h>
#include <string.h>
#include <pbnjson.hpp>
#include "rolegen.h"

//#define DEBUG 1

#define CONFIGURATOR_REGISTER_URL "palm://com.palm.configurator/scan"
#define CONFIGURATOR_UNREGISTER_URL "palm://com.palm.configurator/unconfigure"

#define PUBLIC_ENDPOINT_ROOT WEBOS_INSTALL_SYSBUS_DYNPUBSERVICESDIR
#define PRIVATE_ENDPOINT_ROOT WEBOS_INSTALL_SYSBUS_DYNPRVSERVICESDIR

#define TYPE_SERVICE "services"
#define TYPE_APP "applications"

using namespace std;

void installApp(string id, string type, string root);
void uninstallApp(string id, string type, string root);

