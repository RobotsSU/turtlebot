/***************************************************************
 * Name:      TurtlebotOperationsApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2011-07-25
 * Copyright:  ()
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "TurtlebotOperationsApp.h"

//(*AppHeaders
#include "TurtlebotOperationsMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(TurtlebotOperationsApp);

bool TurtlebotOperationsApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	TurtlebotOperationsFrame* Frame = new TurtlebotOperationsFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
