#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(30);
	ofBackground(0);
	ofEnableDepthTest();
	ofSetWindowTitle("Insta");

	ofSetRectMode(ofRectMode::OF_RECTMODE_CENTER);
	ofNoFill();

	this->rect_size = 24;
	this->rect_span = ofGetWidth() / this->rect_size;
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw() {

	cam.begin();

	//ofRotateY(ofGetFrameNum() % 360);

	float noise_value;
	for (int x = -ofGetWidth() / 2; x <= ofGetWidth() / 2; x += this->rect_size) {
		for (int y = -ofGetHeight() / 2; y <= ofGetHeight() / 2; y += this->rect_size) {
			noise_value = ofNoise(x * 0.005, y * 0.005, ofGetFrameNum() * 0.05);
			ofRect(ofVec3f(x, y, noise_value * 300 - 150), this->rect_size * 0.75, this->rect_size * 0.75);
		}
	}

	cam.end();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
