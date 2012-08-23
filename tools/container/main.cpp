#include "main.h"
#include "tool.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{

  GenericTool *menu = new GenericTool(wxT("Generic Tool"));
  menu->Show(true);

  return true;
}
