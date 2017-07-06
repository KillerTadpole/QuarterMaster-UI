#ifndef MY_APP_HPP_INCLUDED
#define MY_APP_HPP_INCLUDED

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

class MyApp : public wxApp
{
public:
  virtual bool OnInit();
  virtual ~MyApp();
};

#endif
