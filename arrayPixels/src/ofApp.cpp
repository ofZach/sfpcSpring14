#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    grabber.initGrabber(420, 240);
}

//--------------------------------------------------------------
void ofApp::update(){

    grabber.update();
    
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255,255,255);
    grabber.draw(0, 0);
    
    
    
    unsigned char * pixels = grabber.getPixels();
    
    for (int x = 0; x < 420; x+=10){            // x is for the X position
        for (int y = 0; y < 240; y+=10){        // y is for the Y position
            
            int pixelPosition = (y * 420 + x)*3;
            int r = pixels[pixelPosition];
            int g = pixels[pixelPosition+1];
            int b = pixels[pixelPosition+2];
            ofSetColor(r,g,b);
            ofRect(420 + x, y, 10,10);
            
        }
    }

    
//        for (int x = 0; x < 420; x+=10){            // x is for the X position
//            for (int y = 0; y < 240; y+=10){
//                ofColor color = grabber.getPixelsRef().getColor(x,y);
//                
//            }
//        }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
