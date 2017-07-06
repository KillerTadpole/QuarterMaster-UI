#ifndef BUTTON_BASE_HPP_INCLUDED
#define BUTTON_BASE_HPP_INCLUDED

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

static const int ID_CLICK_BUTTON = 4;

class ButtonBase : public wxButton
{
public:
  ButtonBase(wxWindow* parent,
             wxWindowID id = wxID_ANY,
             wxString const& label = wxEmptyString,
             wxPoint const& pos = wxDefaultPosition,
             wxSize const& size = wxDefaultSize,
             long style = 0,
             wxValidator const& validator = wxDefaultValidator,
             const wxString& name = wxButtonNameStr);
  static const int ID_CLICK_BUTTON;
private:
  void OnClick(wxCommandEvent& event);
  wxDECLARE_EVENT_TABLE();
};

#endif
