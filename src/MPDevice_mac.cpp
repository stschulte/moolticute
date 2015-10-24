/******************************************************************************
 **  Copyright (c) Raoul Hecky. All Rights Reserved.
 **
 **  Calaos is free software; you can redistribute it and/or modify
 **  it under the terms of the GNU General Public License as published by
 **  the Free Software Foundation; either version 3 of the License, or
 **  (at your option) any later version.
 **
 **  Calaos is distributed in the hope that it will be useful,
 **  but WITHOUT ANY WARRANTY; without even the implied warranty of
 **  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 **  GNU General Public License for more details.
 **
 **  You should have received a copy of the GNU General Public License
 **  along with Foobar; if not, write to the Free Software
 **  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 **
 ******************************************************************************/
#include "MPDevice_mac.h"
#include "UsbMonitor_mac.h"

MPDevice_mac::MPDevice_mac(QObject *parent, const MPPlatformDef &platformDef):
    MPDevice(parent)
{
}

MPDevice_mac::~MPDevice_mac()
{
}

QList<MPPlatformDef> MPDevice_mac::enumerateDevices()
{
    return UsbMonitor_mac::Instance()->getDeviceList();
}
