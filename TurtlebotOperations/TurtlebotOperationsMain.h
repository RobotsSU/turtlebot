/***************************************************************
 * Name:      TurtlebotOperationsMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2011-07-25
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef TURTLEBOTOPERATIONSMAIN_H
#define TURTLEBOTOPERATIONSMAIN_H

//(*Headers(TurtlebotOperationsFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

#include <ros/ros.h>
#include "TurtlebotOps.h"


class TurtlebotOperationsFrame: public wxFrame
{
    public:

        TurtlebotOperationsFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~TurtlebotOperationsFrame();

    private:

        TurtlebotOps *Turtlebot;
        //(*Handlers(TurtlebotOperationsFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnbtnStopClick(wxCommandEvent& event);
        void OnbtnConnectClick(wxCommandEvent& event);
        void OnbtnRightClick(wxCommandEvent& event);
        void OnbtnForwardClick(wxCommandEvent& event);
        void OnbtnReverseClick(wxCommandEvent& event);
        void OnbtnLeftClick(wxCommandEvent& event);
        void OnbtnStopClick1(wxCommandEvent& event);
        //*)

        //(*Identifiers(TurtlebotOperationsFrame)
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON1;
        static const long ID_BUTTON5;
        static const long ID_BUTTON2;
        static const long ID_BUTTON6;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT1;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(TurtlebotOperationsFrame)
        wxButton* btnForward;
        wxButton* btnStop;
        wxButton* btnLeft;
        wxButton* btnConnect;
        wxPanel* Panel1;
        wxTextCtrl* txtStatus;
        wxButton* btnReverse;
        wxButton* btnRight;
        wxStatusBar* StatusBar1;
        wxStaticText* lblStatus;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // TURTLEBOTOPERATIONSMAIN_H
