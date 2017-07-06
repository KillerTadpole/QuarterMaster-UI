#include "main.hpp"
#include "MainFrame.hpp"

bool MyApp::OnInit()
{
  auto* frame = new MainFrame("Quarter Master", wxPoint(50, 50), wxSize(500, 400));
  frame->Show(true);
  return true;
}

MyApp::~MyApp()
{
}

wxIMPLEMENT_APP(MyApp);
