#pragma once
#include <vector>
#include <string>
#include "glut.h"
using namespace std;
class ObjLoader {
public:
    ObjLoader(){}
    void init(string filename);//���캯��
    void Draw();//���ƺ���
private:
    vector<vector<GLfloat>>vSets;//��Ŷ���(x,y,z)����
    vector<vector<GLint>>fSets;//������������������
};
