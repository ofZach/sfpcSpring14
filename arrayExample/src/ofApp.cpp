#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

        // init, check, iterate
    
    for (int i = 0; i < 50; i++){
        positions[i] = 100 + i * 50;
    }
    

    
    
}


//--------------------------------------------------------------
void ofApp::update(){


    for (int i = 0; i < 50; i++){
        positions[i] += ofRandom(-3,3);
    }
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    for (int i = 0; i < 50; i++){
        ofRect(positions[i], 50, 50,50);
    }

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
