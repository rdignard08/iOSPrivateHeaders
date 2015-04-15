
@interface CAMutableMeshTransform : CAMeshTransform {

}
 + (id) meshTransform;

 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) init;
 - (id) depthNormalization;
 - (i) subdivisionSteps;
 - (void) replaceVertexAtIndex:(Q)awithVertex:({CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}})b;
 - (void) replaceFaceAtIndex:(Q)awithFace:({CAMeshFace=[4I][4f]})b;
 - (void) setDepthNormalization:(id)a;
 - (void) setSubdivisionSteps:(i)a;
 - (void) addVertex:({CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}})a;
 - (void) removeVertexAtIndex:(Q)a;
 - (void) addFace:({CAMeshFace=[4I][4f]})a;
 - (void) removeFaceAtIndex:(Q)a;


@end
