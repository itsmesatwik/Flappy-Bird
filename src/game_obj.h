#include "ofMain.h"
#include <tuple>

class GameObj {
private:
	ofImage obj_image_;
	ofVec2f position_;
	float height_;
	float width_;

public:
	GameObj();
	~GameObj();
	void update();
	void resize(int w, int h);
	ofImage getImage();
	ofVec2f getPos();
	std::tuple<int, int> getDims();
}