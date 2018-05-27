#include "ofMain.h"
#include <tuple>

class GameObj {
public:
	virtual void setDims(float width, float height) = 0;
	virtual void setPos(ofVec2f &pos) = 0;
	virtual void setImage(ofImage &img) = 0;
	virtual void update() = 0;
	virtual void resize(int w, int h) = 0;
	virtual ofImage getImage() = 0;
	virtual ofVec2f getPos() = 0;
	virtual std::tuple<int, int> getDims() = 0;
}