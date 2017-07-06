#ifndef HELLO_BUTTON_HPP_INCLUDED
#define HELLO_BUTTON_HPP_INCLUDED

#include "ButtonBase.hpp"

class HelloButton : public ButtonBase
{
public:
  HelloButton(wxWindow* parent,
              wxWindowID id = wxID_ANY,
              wxString const& label = wxEmptyString,
              wxPoint const& pos = wxDefaultPosition,
              wxSize const& size = wxDefaultSize,
              long style = 0,
              wxValidator const& validator = wxDefaultValidator,
              const wxString& name = wxButtonNameStr);

private:
  void OnClick(wxCommandEvent& event);
  wxDECLARE_EVENT_TABLE();
};

#endif
