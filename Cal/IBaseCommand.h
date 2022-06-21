#pragma once
#include "wx/wx.h"
class IBaseCommand
{
public:
    virtual wxString Execute() = 0;

};