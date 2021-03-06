#pragma once
/*
 *      Copyright (C) 2013 Team XBMC
 *      http://xbmc.org
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
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include <string>

#include "IFileItemListModifier.h"

class CSmartPlaylistFileItemListModifier : public IFileItemListModifier
{
public:
  CSmartPlaylistFileItemListModifier() = default;
  ~CSmartPlaylistFileItemListModifier() override = default;

  bool CanModify(const CFileItemList &items) const override;
  bool Modify(CFileItemList &items) const override;

private:
  static std::string GetUrlOption(const std::string &path, const std::string &option);
};
