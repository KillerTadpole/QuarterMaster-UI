#include "ButtonBase.hpp"

ButtonBase::ButtonBase(wxWindow* parent,
                       wxWindowID id,
                       wxString const& label,
                       wxPoint const& pos,
                       wxSize const& size,
                       long style,
                       wxValidator const& validator,
                       const wxString& name)
  : wxButton(parent, id, label, pos, size, style, validator, name)
{
}

const int ButtonBase::ID_CLICK_BUTTON = 4;

wxBEGIN_EVENT_TABLE(ButtonBase, wxButton)
EVT_BUTTON(ID_CLICK_BUTTON, ButtonBase::OnClick)
wxEND_EVENT_TABLE()

void ButtonBase::OnClick(wxCommandEvent& event)
{
  std::string j;
  j += "I Don't Know what to put here ";
  j += std::string(GetLabel());
  wxLogMessage(wxString(j));
}
