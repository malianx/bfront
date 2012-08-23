#include "wx/wx.h"
#include "wx/menu.h"

class GenericTool : public wxFrame
{
  public:
    GenericTool(const wxString& title);

    void OnQuit(wxCommandEvent& event);

    wxMenuBar *mainbar;
    wxMenu *filemenu;
    wxMenu *editmenu;

};


