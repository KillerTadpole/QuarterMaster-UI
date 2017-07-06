#ifndef MAIN_FRAME_HPP_INCLUDED
#define MAIN_FRAME_HPP_INCLUDED

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "HelloButton.hpp"

class MainFrame : public wxFrame
{
public:
  MainFrame(wxString const& title, wxPoint const& pos, wxSize const& size);

private:
  void OnHello(wxCommandEvent& event);
  void OnExit(wxCommandEvent& event);
  void OnAbout(wxCommandEvent& event);
  ButtonBase* pButton;
  ButtonBase* pButton2;
  wxDECLARE_EVENT_TABLE();
};

#endif
