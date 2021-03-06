#pragma once
/*
*      Copyright (C) 2014-2015 Anton Baranov
*      http://cryol.kiev.ua/
*
*      Copyright (C) 2011 Pulse-Eight
*      http://www.pulse-eight.com/
*
*  This Program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2, or (at your option)
*  any later version.
*
*  This Program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with Kodi; see the file COPYING.  If not, write to
*  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*  http://www.gnu.org/copyleft/gpl.html
*
*/

#include "libXBMC_addon.h"
#include "libXBMC_pvr.h"

#define PVR_CLIENT_VERSION	"0.0.4"
#define GIT_PLUGIN_URL    	"http://kodi.lanet.tv/"

extern bool							m_bCreated;
extern std::string					ApiUrl;
extern std::string					StaticUrl;
extern std::string					g_strEPGPath;
extern std::string					g_strClientPath;
extern std::string					g_strListPath;
extern std::string					g_strLogoPath;
extern ADDON::CHelper_libXBMC_addon *XBMC;
extern CHelper_libXBMC_pvr          *PVR;