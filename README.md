ofxMultiGLFWWindow
==================

**Note: This addon is no longer supported as these features are integrated into the openFrameworks core starting with version 0.9.0. This addon was used to allow multi-window support in openFrameworks version 0.8.x**

Multiple GLFW windows in openFrameworks

This addon is a modification of the GLFW window class. It allows multiple windows and events.

The draw loop is called an additional time for every window. If three windows are registered, then the draw loop will be called three times per frame. You can query the current window index to distribute draw routines. 

The update loop is called once per frame as normal.

Window events can be registered on any window. The callbacks are global, but one can filter them by querying the window event origin.

See the example project for use. 

Note: if using Xcode, set ofxMultiGLFWWindow.cpp to compile as objective C++.

TODO: OpenGL 3.2 not working under Windows 
