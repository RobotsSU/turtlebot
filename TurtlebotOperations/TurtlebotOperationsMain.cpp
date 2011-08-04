/***************************************************************
 * Name:      TurtlebotOperationsMain.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2011-07-25
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "TurtlebotOperationsMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(TurtlebotOperationsFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(TurtlebotOperationsFrame)
const long TurtlebotOperationsFrame::ID_BUTTON3 = wxNewId();
const long TurtlebotOperationsFrame::ID_BUTTON4 = wxNewId();
const long TurtlebotOperationsFrame::ID_BUTTON1 = wxNewId();
const long TurtlebotOperationsFrame::ID_BUTTON5 = wxNewId();
const long TurtlebotOperationsFrame::ID_BUTTON2 = wxNewId();
const long TurtlebotOperationsFrame::ID_BUTTON6 = wxNewId();
const long TurtlebotOperationsFrame::ID_TEXTCTRL1 = wxNewId();
const long TurtlebotOperationsFrame::ID_STATICTEXT1 = wxNewId();
const long TurtlebotOperationsFrame::ID_PANEL1 = wxNewId();
const long TurtlebotOperationsFrame::idMenuQuit = wxNewId();
const long TurtlebotOperationsFrame::idMenuAbout = wxNewId();
const long TurtlebotOperationsFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(TurtlebotOperationsFrame,wxFrame)
    //(*EventTable(TurtlebotOperationsFrame)
    //*)
END_EVENT_TABLE()

TurtlebotOperationsFrame::TurtlebotOperationsFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(TurtlebotOperationsFrame)
    wxBoxSizer* BoxSizer4;
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxBoxSizer* BoxSizer2;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxBoxSizer* BoxSizer3;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    btnLeft = new wxButton(Panel1, ID_BUTTON3, _("Left"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    BoxSizer2->Add(btnLeft, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxVERTICAL);
    btnForward = new wxButton(Panel1, ID_BUTTON4, _("Forward"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    BoxSizer3->Add(btnForward, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnStop = new wxButton(Panel1, ID_BUTTON1, _("Stop"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer3->Add(btnStop, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnReverse = new wxButton(Panel1, ID_BUTTON5, _("Reverse"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    BoxSizer3->Add(btnReverse, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    btnRight = new wxButton(Panel1, ID_BUTTON2, _("Right"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer2->Add(btnRight, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer4 = new wxBoxSizer(wxVERTICAL);
    btnConnect = new wxButton(Panel1, ID_BUTTON6, _("Connect"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    BoxSizer4->Add(btnConnect, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    txtStatus = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("disconnected"), wxDefaultPosition, wxSize(110,29), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    BoxSizer4->Add(txtStatus, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    lblStatus = new wxStaticText(Panel1, ID_STATICTEXT1, _("Status"), wxDefaultPosition, wxSize(61,29), 0, _T("ID_STATICTEXT1"));
    BoxSizer4->Add(lblStatus, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer2->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(BoxSizer2);
    BoxSizer2->Fit(Panel1);
    BoxSizer2->SetSizeHints(Panel1);
    BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TurtlebotOperationsFrame::OnbtnLeftClick);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TurtlebotOperationsFrame::OnbtnForwardClick);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TurtlebotOperationsFrame::OnbtnStopClick1);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TurtlebotOperationsFrame::OnbtnReverseClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TurtlebotOperationsFrame::OnbtnRightClick);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&TurtlebotOperationsFrame::OnbtnConnectClick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TurtlebotOperationsFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&TurtlebotOperationsFrame::OnAbout);
    //*)

    Turtlebot = NULL;
    int arg1 = 0;  // no initialization arguements
    char *arg2;
    ros::init(arg1,&arg2, "turtlebot_teleop");
}

TurtlebotOperationsFrame::~TurtlebotOperationsFrame()
{
    //(*Destroy(TurtlebotOperationsFrame)
    //*)
    if (Turtlebot) delete Turtlebot;
}

void TurtlebotOperationsFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void TurtlebotOperationsFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}



void TurtlebotOperationsFrame::OnbtnConnectClick(wxCommandEvent& event)
{
    if (!Turtlebot)
    {
        Turtlebot = new TurtlebotOps();
        txtStatus->ChangeValue(_T("running"));
    }

}

void TurtlebotOperationsFrame::OnbtnRightClick(wxCommandEvent& event)
{
    if (Turtlebot)
    {
        Turtlebot->Input(KEYCODE_R);
        txtStatus->ChangeValue(_T("turning right"));
    }
}

void TurtlebotOperationsFrame::OnbtnForwardClick(wxCommandEvent& event)
{
    if (Turtlebot)
    {
        Turtlebot->Input(KEYCODE_U);
        txtStatus->ChangeValue(_T("forward"));
    }

}

void TurtlebotOperationsFrame::OnbtnReverseClick(wxCommandEvent& event)
{
    if (Turtlebot)
    {
        Turtlebot->Input(KEYCODE_D);
        txtStatus->ChangeValue(_T("reverse"));
    }

}

void TurtlebotOperationsFrame::OnbtnLeftClick(wxCommandEvent& event)
{
    if (Turtlebot)
    {
        Turtlebot->Input(KEYCODE_L);
        txtStatus->ChangeValue(_T("turning left"));
    }

}

void TurtlebotOperationsFrame::OnbtnStopClick1(wxCommandEvent& event)
{
    if (Turtlebot)
    {
        Turtlebot->Input(KEYCODE_S);
        txtStatus->ChangeValue(_T("stop"));
    }

}
