#include "RootFrame.h"
#include <wx/wx.h>
using namespace std;

/**
 * GloApp is the main entry point of the application
 * it is inherited from wxApp class which can be considered
 * as the application itself
 */
class GloApp : public wxApp {
public:
    virtual bool OnInit() wxOVERRIDE {
        RootFrame *rootFrame = new RootFrame("GloApp : Media Player");
        rootFrame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(GloApp);
