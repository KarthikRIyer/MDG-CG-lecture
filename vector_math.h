class Vector2 { public: float x,y; };
class Vector3 {
public:
    float x,y,z;
    Vector3 operator + (Vector3 v) const
    { return Vector3(x + v.x, y + v.y, z + v.z); }
    Vector3 operator - (Vector3 v) const
    { return Vector3(x - v.x, y - v.y, z - v.z); }
    Vector3 operator * (float f) const
    { return Vector3(x*f,y*f,z*f); }
    Vector3 operator - () const
    { return Vector3(-x,-y,-z); }
    Vector3 operator / (float f) const
    { return Vector3(x/f,y/f,z/f); }
    Vector3(float a, float b,float c):x(a),y(b),z(c){}
    Vector3(){}
    Vector3 direction(){
        return Vector3(x/sqrt(x*x+y*y+z*z),y/sqrt(x*x+y*y+z*z),z/sqrt(x*x+y*y+z*z));
    }
    Vector3 cross(Vector3 v){
        return Vector3(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
    }
    float dot(Vector3 v){
        return (x * v.x + y * v.y + z * v.z);
    }
    float length(){
        return (sqrt(x*x+y*y+z*z));
    }
    static Vector3 unitY(){return Vector3(0.0f,1.0f,0.0f);}
    static Vector3 unitX(){return Vector3(1.0f,0.0f,0.0f);}
    static Vector3 unitZ(){return Vector3(0.0f,0.0f,1.0f);}
};
typedef Vector2 Point2;
typedef Vector3 Point3;
