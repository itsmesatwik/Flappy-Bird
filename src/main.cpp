#include "ofMain.h"
#include "game.h"

int main() {
	ofSetupOpenGL(1024, 786, OF_WINDOW);
	srand(time(NULL));
	ofRunApp(new Game);
}