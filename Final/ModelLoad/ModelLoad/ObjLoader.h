#pragma once
#include <vector>
#include <string>
#include "glut.h"
using namespace std;
class ObjLoader {
public:
    ObjLoader(){}
    void init(string filename);//构造函数
    void Draw();//绘制函数
private:
    vector<vector<GLfloat>>vSets;//存放顶点(x,y,z)坐标
    vector<vector<GLint>>fSets;//存放面的三个顶点索引
};
