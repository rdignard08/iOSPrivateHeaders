
@protocol NSCoding, NSCopying, NSMutableCopying;
@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {

    ^v _impl;
    unsigned long long _normalization;
    long long _subdivisionSteps;
}
@property (atomic, assign, readonly) NSNumber* vertexCount;
@property (atomic, assign, readonly) NSNumber* faceCount;
@property (atomic, copy, readonly) NSString* depthNormalization;
@property (atomic, assign, readonly) NSNumber* subdivisionSteps;
 + (id) meshTransformWithVertexCount:(unsigned long long)avertices:(r^{CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}})bfaceCount:(unsigned long long)cfaces:(r^{CAMeshFace=[4I][4f]})ddepthNormalization:(id)e;
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
 - (id) CA_interpolateValue:(id)abyFraction:(float)b;
 - (double) CA_distanceToValue:(id)a;
 - (id) CA_interpolateValues:(id)ainterpolator:(id)b;
 - (id) meshTransformForLayer:(id)a;
 - (id) initWithVertexCount:(unsigned long long)avertices:(r^{CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}})bfaceCount:(unsigned long long)cfaces:(r^{CAMeshFace=[4I][4f]})ddepthNormalization:(id)e;
 - (id) _initWithMeshTransform:(id)a;
 - (id) depthNormalization;
 - (BOOL) _constructWithData:(id)a;
 - (unsigned long long) vertexCount;
 - ({CAMeshVertex={CGPoint=dd}{CAPoint3D=ddd}}) vertexAtIndex:(unsigned long long)a;
 - (unsigned long long) faceCount;
 - ({CAMeshFace=[4I][4f]}) faceAtIndex:(unsigned long long)a;
 - (int) subdivisionSteps;
 - (id) _subdivideToDepth:(long long)a;


@end
