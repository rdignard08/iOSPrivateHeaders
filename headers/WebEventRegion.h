
@protocol NSCopying;
@interface WebEventRegion : NSObject <NSCopying> {

    {CGPoint="x"d"y"d} p1;
    {CGPoint="x"d"y"d} p2;
    {CGPoint="x"d"y"d} p3;
    {CGPoint="x"d"y"d} p4;
}

 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (id) .cxx_construct;
 - (BOOL) isEqual:(id)a ;
 - (BOOL) hitTest:({CGPoint=dd})a ;
 - (id) initWithPoints:({CGPoint=dd})a ;
 - ({FloatQuad={FloatPoint=ff}{FloatPoint=ff}{FloatPoint=ff}{FloatPoint=ff}}) quad;
 - ({CGPoint=dd}) p1;
 - ({CGPoint=dd}) p2;
 - ({CGPoint=dd}) p3;
 - ({CGPoint=dd}) p4;


@end
