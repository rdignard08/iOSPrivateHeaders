
@protocol NSCoding;
@interface CACGPathCodingSegment : NSObject <NSCoding> {

    i _type;
    [3{CGPoint="x"d"y"d}] _points;
}

 - (id) .cxx_construct;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithCGPathElement:(r^{CGPathElement=i^{CGPoint}})a;
 - (void) addToCGPath:(^{CGPath=})a;


@end
