#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0,0,0);

    //ofVbo::disableVAOs();

    glfw = (ofxMultiGLFWWindow*)ofGetWindowPtr();

    // vector of windows, count set in main
    windows = &glfw->windows;
    
    // configure first window
    glfw->setWindow(windows->at(0));    // set window pointer
    glfw->initializeWindow();       // initialize events (mouse, keyboard, etc) on window (optional)
    ofSetWindowPosition(0, 100);    // business as usual...
    ofSetWindowShape(600, 800);
    ofSetWindowTitle("Window 1");
    //ofSetFullscreen(true);        // order important with fullscreen

    
    // configure second window
    glfw->setWindow(windows->at(1));
    glfw->initializeWindow();
    ofSetWindowPosition(500, 100);
    ofSetWindowShape(500, 800);
    ofSetWindowTitle("Window 2");
    
   
    // create third window dynamically
    glfw->createWindow();
    glfw->setWindow(windows->at(2));
    glfw->initializeWindow();
    ofSetWindowPosition(500+500, 100);
    ofSetWindowShape(500, 800);
    ofSetWindowTitle("Window 3");

    glfw->setWindow(windows->at(0));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    // update is still called once per frame
}

//--------------------------------------------------------------
void ofApp::draw(){
    // draw is called once on each window every frame
    
    // the window index will increment
    wIndex = glfw->getWindowIndex();

    switch (wIndex) { // switch on window index
        case 0:
            ofBackground(0,0,0); // change background color on each window
            ofSetColor(200, 120, 28);
            ofCircle(200, 400, ofRandom(1000));
			ofSetColor(200, 120, 200);
			ofSphere(100);
            break;
        case 1:
            ofBackground(255,0,0); // change background color on each window
            ofSetColor(28, 120, 200);
            ofCircle(200, 400, ofRandom(1000));
			ofSetColor(200, 120, 200);
			ofSphere(100);
            break;
        case 2:
            ofBackground(0,0,255); // change background color on each window
            ofSetColor(28, 200, 100);
            ofCircle(200, 400, ofRandom(1000));
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    // get event window to identify window source
    if (glfw->getEventWindow() == windows->at(0))
        cout << "window 1: key pressed" << endl;
    else if (glfw->getEventWindow() == windows->at(1))
        cout << "window 2: key pressed" << endl;
    else if (glfw->getEventWindow() == windows->at(2))
        cout << "window 3: key pressed" << endl;
    
    // hide current window
    if (key == 'h')
        glfw->hideWindow(glfw->getEventWindow());
    
    // show current window
    else if (key == '1')
        glfw->showWindow(windows->at(0));
    else if (key == '2')
        glfw->showWindow(windows->at(1));
    else if (key == '3')
        glfw->showWindow(windows->at(2));
    
    else if (key == 'n') {
        glfw->setWindow(glfw->getEventWindow());
        ofHideCursor();
    }
    else if (key == 'm') {
        glfw->setWindow(glfw->getEventWindow());
        ofShowCursor();
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    cout << "key released" << endl;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    // get event window to identify window source
    if (glfw->getEventWindow() == windows->at(0))
        cout << "window 1: mouse moved" << endl;
    else if (glfw->getEventWindow() == windows->at(1))
        cout << "window 2: mouse moved" << endl;
    else if (glfw->getEventWindow() == windows->at(2))
        cout << "window 3: mouse moved" << endl;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    cout << "mouse dragged" << endl;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    // get event window to identify window source
    if (glfw->getEventWindow() == windows->at(0))
        cout << "window 1: mouse pressed" << endl;
    else if (glfw->getEventWindow() == windows->at(1))
        cout << "window 2: mouse pressed" << endl;
    else if (glfw->getEventWindow() == windows->at(2))
        cout << "window 3: mouse pressed" << endl;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    cout << "mouse released" << endl;
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
