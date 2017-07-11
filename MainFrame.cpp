#include "MainFrame.hpp"
#include "HelloButton.hpp"

namespace
{
  const int ID_HELLO = 3;
  const int ID_ADD = 2;
}

MainFrame::MainFrame(wxString const& title,
                     wxPoint const& pos,
                     wxSize const& size)
  : wxFrame(NULL, wxID_ANY, title, pos, size)
{
  auto* menuFile = new wxMenu();
  menuFile->Append(ID_HELLO,
      "&Save\tCtrl-S",
      "This button saves your stuff! ;)");
  menuFile->AppendSeparator();
  menuFile->Append(wxID_EXIT);
  menuFile->AppendSeparator();
  menuFile->Append(ID_ADD,
      "&AddItem\tCtrl-I",
      "Have you bought something new?");
  wxMenu* menuHelp = new wxMenu;
  menuHelp->Append(wxID_HELP);
  wxMenuBar* menuBar = new wxMenuBar;
  menuBar->Append(menuFile, "&File");
  menuBar->Append(menuHelp, "&Help");
  this->SetMenuBar(menuBar);
  CreateStatusBar();
  SetStatusText("Welcome to Quarter Master!");
  pButton = new HelloButton(this, 4, "cool button", wxPoint(50, 50));
  pButton2 = new ButtonBase(this, 4, "button2", wxPoint(50, 100));
  pButton3 = new HelloButton(this, 4, "New Button", wxPoint(300, 50));
}

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
  EVT_MENU(ID_HELLO, MainFrame::OnHello)
  EVT_MENU(ID_ADD, MainFrame::OnAdd)
  EVT_MENU(wxID_EXIT, MainFrame::OnExit)
  EVT_MENU(wxID_HELP, MainFrame::OnAbout)
wxEND_EVENT_TABLE()

void MainFrame::OnHello(wxCommandEvent& event)
{
  wxLogMessage("Your information has been saved!");
}

void MainFrame::OnAdd(wxCommandEvent& event)
{
    wxLogMessage("Add your item in the blaks below");
}

void MainFrame::OnExit(wxCommandEvent& event)
{
  Close(true);
}

void MainFrame::OnAbout(wxCommandEvent& event)
{
  wxMessageBox("I'm bussy, ask again later!",
               "Help",
               wxOK | wxICON_INFORMATION);
}
