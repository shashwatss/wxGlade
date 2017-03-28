// -*- C++ -*-
//
// generated by wxGlade "faked test version"
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef BUG186_H
#define BUG186_H

#include <wx/wx.h>
#include <wx/image.h>
#include <wx/intl.h>

#ifndef APP_CATALOG
#define APP_CATALOG "app"  // replace with the appropriate catalog name
#endif


// begin wxGlade: ::dependencies
#include <wx/menu.h>
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class Frame186: public wxFrame {
public:
    // begin wxGlade: Frame186::ids
    enum {
        myMagicMenu = wxID_HIGHEST + 1000,
        myMagicTool = wxID_HIGHEST + 1002,
        myButtonId = wxID_HIGHEST + 1005,
    };
    // end wxGlade

    Frame186(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_FRAME_STYLE);

private:
    // begin wxGlade: Frame186::methods
    void set_properties();
    void do_layout();
    // end wxGlade

protected:
    // begin wxGlade: Frame186::attributes
    wxMenuBar* Bug186_Frame_menubar;
    wxToolBar* Bug186_Frame_toolbar;
    wxTextCtrl* text_ctrl_1;
    wxTextCtrl* text_ctrl_2;
    wxTextCtrl* text_ctrl_3;
    wxTextCtrl* text_ctrl_4;
    // end wxGlade
}; // wxGlade: end class


#endif // BUG186_H
