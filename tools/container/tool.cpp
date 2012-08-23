#include "tool.h"

GenericTool::GenericTool(const wxString& title)
    : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(1024, 768))
{

  mainbar = new wxMenuBar;
  filemenu = new wxMenu;
  editmenu = new wxMenu;

  filemenu->Append(wxID_ANY, wxT("&New"));
  filemenu->Append(wxID_ANY, wxT("&Open"));
  filemenu->Append(wxID_ANY, wxT("&Save"));

  filemenu->AppendSeparator();
  filemenu->Append(wxID_EXIT, wxT("&Exit"));

  mainbar->Append(filemenu, wxT("&File"));
  mainbar->Append(editmenu, wxT("&Edit"));

  SetMenuBar(mainbar);

  Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED,
    wxCommandEventHandler(GenericTool::OnQuit));


  Centre();

}

void GenericTool::OnQuit(wxCommandEvent& WXUNUSED(event))
{
  Close(true);
}
