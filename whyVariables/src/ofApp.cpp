#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    position = 100;
    
    cout << position << endl;
    
    cout << &(position) << endl;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

    position = position + ofRandom(-3,3);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255,0,0);

    ofRect(position,10,50,50);
    
    
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
