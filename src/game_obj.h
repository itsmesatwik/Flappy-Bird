#include "ofMain.h"
#include <tuple>

class GameObj {
protected:
	ofImage obj_image_;
	ofVec2f position_;
	float height_;
	float width_;

public:
	GameObj();
	~GameObj();
	void setDims(float width, float height);
	void setPos(ofVec2f pos);
	void setImage(ofImage img);
	void update();
	void resize(int w, int h);
	ofImage getImage();
	ofVec2f getPos();
	std::tuple<int, int> getDims();
}