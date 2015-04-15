
@interface CAMutableMeshTransform : CAMeshTransform {

}
 + (id) meshTransform;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (id) depthNormalization;
 - (int) subdivisionSteps;
 - (void) replaceVertexAtIndex:(unsigned long long)awithVertex:({CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}})b;
 - (void) replaceFaceAtIndex:(unsigned long long)awithFace:({CAMeshFace=[4I][4f]})b;
 - (void) setDepthNormalization:(id)a;
 - (void) setSubdivisionSteps:(int)a;
 - (void) addVertex:({CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}})a;
 - (void) removeVertexAtIndex:(unsigned long long)a;
 - (void) addFace:({CAMeshFace=[4I][4f]})a;
 - (void) removeFaceAtIndex:(unsigned long long)a;


@end
