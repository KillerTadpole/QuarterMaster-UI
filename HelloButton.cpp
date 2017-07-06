#include "HelloButton.hpp"

HelloButton::HelloButton(wxWindow* parent,
                         wxWindowID id,
                         wxString const& label,
                         wxPoint const& pos,
                         wxSize const& size,
                         long style,
                         wxValidator const& validator,
                         const wxString& name)
  : ButtonBase(parent, id, label, pos, size, style, validator, name)
{
}

wxBEGIN_EVENT_TABLE(HelloButton, ButtonBase)
  EVT_BUTTON(ButtonBase::ID_CLICK_BUTTON, HelloButton::OnClick)
wxEND_EVENT_TABLE()

void HelloButton::OnClick(wxCommandEvent& event)
{
  std::string j;
  j += "If I knew how to make tables, I would put one here! ";
  j += std::string(GetLabel());
  wxLogMessage(wxString(j));
}
