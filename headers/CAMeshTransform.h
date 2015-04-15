
@protocol NSCoding, NSCopying, NSMutableCopying;
@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {

    ^v _impl;
    Q _normalization;
    q _subdivisionSteps;
}
@property (atomic, assign, readonly) NSNumber* vertexCount;
@property (atomic, assign, readonly) NSNumber* faceCount;
@property (atomic, copy, readonly) NSString* depthNormalization;
@property (atomic, assign, readonly) NSNumber* subdivisionSteps;
 + (id) meshTransformWithVertexCount:(Q)avertices:(r^{CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}})bfaceCount:(Q)cfaces:(r^{CAMeshFace=[4I][4f]})ddepthNormalization:(id)e;
 + (void) CAMLParserStartElement:(id)a;
 + (void) CAMLParserEndElement:(id)acontent:(id)b;

 - (id) _init;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (id) mutableCopyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (void) encodeWithCAMLWriter:(id)a;
 - (id) _data;
 - (^{Object=^^?{Atomic={?=i}}}) CA_copyRenderValue;
 - (id) CA_interpolateValue:(id)abyFraction:(f)b;
 - (d) CA_distanceToValue:(id)a;
 - (id) CA_interpolateValues:(id)ainterpolator:(id)b;
 - (id) meshTransformForLayer:(id)a;
 - (id) initWithVertexCount:(Q)avertices:(r^{CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}})bfaceCount:(Q)cfaces:(r^{CAMeshFace=[4I][4f]})ddepthNormalization:(id)e;
 - (id) _initWithMeshTransform:(id)a;
 - (id) depthNormalization;
 - (BOOL) _constructWithData:(id)a;
 - (Q) vertexCount;
 - ({CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}}) vertexAtIndex:(Q)a;
 - (Q) faceCount;
 - ({CAMeshFace=[4I][4f]}) faceAtIndex:(Q)a;
 - (i) subdivisionSteps;
 - (id) _subdivideToDepth:(q)a;


@end
