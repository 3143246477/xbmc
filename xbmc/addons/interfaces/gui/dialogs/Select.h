/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

extern "C"
{

struct AddonGlobalInterface;

namespace ADDON
{

  /*!
   * @brief Global gui Add-on to Kodi callback functions
   *
   * To hold functions not related to a instance type and usable for
   * every add-on type.
   *
   * Related add-on header is "./xbmc/addons/kodi-dev-kit/include/kodi/gui/dialogs/Select.h"
   */
  struct Interface_GUIDialogSelect
  {
    static void Init(AddonGlobalInterface* addonInterface);
    static void DeInit(AddonGlobalInterface* addonInterface);

    /*!
     * @brief callback functions from add-on to kodi
     *
     * @note To add a new function use the "_" style to directly identify an
     * add-on callback function. Everything with CamelCase is only to be used
     * in Kodi.
     *
     * The parameter `kodiBase` is used to become the pointer for a `CAddonDll`
     * class.
     */
    //@{
    static int open(void* kodiBase, const char *heading, const char *entries[], unsigned int size, int selected, unsigned int autoclose);
    static bool open_multi_select(void* kodiBase, const char *heading, const char *entryIDs[], const char *entryNames[],
                                  bool entriesSelected[], unsigned int size, unsigned int autoclose);
    //@}
  };

} /* namespace ADDON */
} /* extern "C" */
