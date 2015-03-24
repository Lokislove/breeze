﻿

/*
* breeze License
* Copyright (C) 2014 YaweiZhang <yawei_zhang@foxmail.com>.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/*
*  file desc
*  common header file.
*
*/

#ifndef _COMMON_H_
#define _COMMON_H_

#include <log4z/log4z.h>
#include <tinyxml2.h>
#include "defined.h"
#include "handler.h"
#include "single.h"
#include "genID.h"
#include "config.h"
#include "dbhelper/dbHelper.h"





template<class T>
std::string toString(const T &t)
{
	std::stringstream os;
	os << t;
	return os.str();
}

inline unsigned  int getNowTick()
{
	return (unsigned int)std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}






#endif