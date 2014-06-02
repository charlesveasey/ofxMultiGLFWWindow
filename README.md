ofxMultiGLFWWindow
==================

Multiple GLFW windows in openFrameworks

This addon is a modification of the GWLF window class. It allows multiple windows and events.

The draw loop is called an aditional time for every window. If three windows are registered, then the draw loop will be called three times per frame. You can query the current window index to distribute draw routines. 

The update loop is called once per frame as normal.

Window events can be de/registered on any window. The callbacks are global, but one can filter them by querying the window event origin.

See the example project for use. 
